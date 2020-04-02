#include <vector>
#include <math.h>

#include <TF1.h>
#include <TAxis.h>
#include <TArrow.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TFitResult.h>
#include <TMatrixDSym.h>
#include <TCanvas.h>
#include <TROOT.h>

double slimits[2] = {100, 200};
double sigma_spec[2] = {0.5, 0.5};

double emittance_x = 0.0038; // mm.mrad
double emittance_y = 0.0021; // mm.mrad
double collimator_spos = 194.92; // m
double harp5C11_xsigma_err = 0.030; // mm
double harp5C11_ysigma_err = 0.030; // mm
double harp5C11B_xsigma_err = 0.030; // mm
double harp5C11B_ysigma_err = 0.030; // mm
double radHarp_xsigma_err = 0.10; // mm
double radHarp_ysigma_err = 0.10; // mm
double harp5C11_spos = 102.97; // mm
double harp5C11B_spos = 115.11; // mm
double radHarp_spos = 119.70; // m

double fit_model(double *var, double *par)
{
   // var[0] = s coordinate (m)
   // par[0] = s coordinate (m) of focus
   // par[1] = sigma at the focus (mm)
   // par[2] = emittance (mm.mrad)

   return sqrt(pow(par[1],2) + pow(par[2]/par[1] * (var[0] - par[0]),2));
}

std::vector<double> fit_model_gradient(double *var, double *par)
{
   // var[0] = s coordinate (m)
   // par[0] = s coordinate (m) of focus
   // par[1] = sigma at the focus (mm)
   // par[2] = emittance (mm.mrad)

   double y = sqrt(pow(par[1],2) + pow(par[2]/par[1] * (var[0] - par[0]),2));
   std::vector<double> grad;
   grad.push_back(-pow(par[2]/par[1],2) * (var[0] - par[0]) / y);
   grad.push_back(pow(par[1],2) - pow(par[2]/par[1] * (var[0] - par[0]),2) / (y * par[1]));
   return grad;
}

void fit_and_plot(double sx[3], double sigx[3], double sigxerr[3],
                  double sy[3], double sigy[3], double sigyerr[3])
{
   double zero[3] = {0,0,0};
   TF1 *xfitf = new TF1("xfitf", fit_model, slimits[0], slimits[1], 3);
   xfitf->SetParameter(0, slimits[1]);
   xfitf->SetParameter(1, 1.0);
   xfitf->FixParameter(2, emittance_x);
   xfitf->SetLineColor(kRed);
   TGraphErrors *xdata = new TGraphErrors(3,sx,sigx,zero,sigxerr);
   TFitResultPtr xfit = xdata->Fit(xfitf, "qs");
   xdata->SetLineColor(kRed);
   xdata->SetLineWidth(2);
   xdata->SetMarkerColor(kRed);
   xdata->SetMarkerStyle(20);

   int npoints = 100;
   double ss[2*npoints+1];
   double x0[2*npoints+1];
   double xpar[3] = {xfit->Parameter(0), xfit->Parameter(1), xfit->Parameter(2)};
   TMatrixDSym xcovar = xfit->GetCovarianceMatrix();
   double minvar = 0.0001;
   double xmax = 0;
   for (int n=0; n < npoints; ++n) {
      double s = slimits[0] + n * (slimits[1] - slimits[0]) / 100;
      double xmu = fit_model(&s, xpar);
      std::vector<double> gra = fit_model_gradient(&s, xpar);
      ss[n] = s;
      ss[2*npoints-1-n] = s;
      double xsigma = sqrt(xcovar(0,0) * pow(gra[0],2) +
                           xcovar(1,1) * pow(gra[1],2) +
                           2 * xcovar(0,1) * gra[0] * gra[1] + minvar);
      x0[n] = xmu - xsigma;
      x0[n] = (x0[n] > 0)? x0[n] : 0;
      x0[2*npoints-1-n] = xmu + xsigma;
      xmax = (xmu + xsigma > xmax)? xmu + xsigma : xmax;
   }
   ss[2*npoints] = ss[0];
   x0[2*npoints] = x0[0];
   TGraph *xshade = new TGraph(2*npoints+1, ss, x0);
   xshade->SetFillColorAlpha(kRed, 0.2);

   TF1 *yfitf = new TF1("yfitf", fit_model, slimits[0], slimits[1], 3);
   yfitf->SetParameter(0, slimits[1]);
   yfitf->SetParameter(1, 1.0);
   yfitf->FixParameter(2, emittance_y);
   yfitf->SetLineColor(kBlue);
   TGraphErrors *ydata = new TGraphErrors(3,sy,sigy,zero,sigyerr);
   TFitResultPtr yfit = ydata->Fit(yfitf, "qs");
   ydata->SetLineColor(kBlue);
   ydata->SetLineWidth(2);
   ydata->SetMarkerColor(kBlue);
   ydata->SetMarkerStyle(20);

   double y0[2*npoints+1];
   double ypar[3] = {yfit->Parameter(0), yfit->Parameter(1), yfit->Parameter(2)};
   TMatrixDSym ycovar = yfit->GetCovarianceMatrix();
   double ymax = 0;
   for (int n=0; n < npoints; ++n) {
      double s = slimits[0] + n * (slimits[1] - slimits[0]) / 100;
      double ymu = fit_model(&s, ypar);
      std::vector<double> gra = fit_model_gradient(&s, ypar);
      ss[n] = s;
      ss[2*npoints-1-n] = s;
      double ysigma = sqrt(ycovar(0,0) * pow(gra[0],2) +
                           ycovar(1,1) * pow(gra[1],2) +
                           2 * ycovar(0,1) * gra[0] * gra[1] + minvar);
      y0[n] = ymu - ysigma;
      y0[n] = (y0[n] > 0)? y0[n] : 0;
      y0[2*npoints-1-n] = ymu + ysigma;
      ymax = (ymu + ysigma > ymax)? ymu + ysigma : ymax;
   }
   ss[2*npoints] = ss[0];
   y0[2*npoints] = y0[0];
   TGraph *yshade = new TGraph(2*npoints+1, ss, y0);
   yshade->SetFillColorAlpha(kBlue, 0.2);

   TCanvas *c1 = new TCanvas("c1", "", 800, 600);
   c1->SetSupportGL(1);
   xfitf->SetTitle(""); // "sigma x vs accelerator s"
   xfitf->GetXaxis()->SetTitle("accelerator s coordinate (m)");
   xfitf->GetYaxis()->SetTitle("#sigma_{x} (mm)");
   xfitf->SetMinimum(0);
   xfitf->SetMaximum(xmax);
   xfitf->Draw();
   xdata->Draw("P");
   xshade->Draw("f");
   double scol[2] = {collimator_spos, collimator_spos};
   double xcol[2] = {0, 1.5};
   TGraph *gcol = new TGraph(2, scol, xcol);
   gcol->Draw("L");
   TArrow *xspec = new TArrow(scol[0], sigma_spec[0], slimits[1], 
                                       sigma_spec[0], 0.03, "<|");
   xspec->SetAngle(35);
   xspec->Draw();
   c1->Update();
   c1->Print("harp-x-767755.pdf");
   c1->Print("harp-x-767755.png");
   yfitf->SetTitle(""); // "sigma y vs accelerator s"
   yfitf->GetXaxis()->SetTitle("accelerator s coordinate (m)");
   yfitf->GetYaxis()->SetTitle("#sigma_{y} (mm)");
   yfitf->SetMinimum(0);
   yfitf->SetMaximum(ymax);
   yfitf->Draw();
   ydata->Draw("P");
   yshade->Draw("f");
   gcol->Draw("L");
   TArrow *yspec = new TArrow(scol[0], sigma_spec[1], slimits[1], 
                                       sigma_spec[1], 0.03, "<|");
   yspec->SetAngle(35);
   yspec->Draw();
   c1->Update();
   c1->Print("harp-y-767755.pdf");
   c1->Print("harp-y-767755.png");
}

void harp_xy()
{
   gROOT->SetBatch();
   double sx[3] = {harp5C11_spos, harp5C11B_spos, radHarp_spos};
   double sigx[3] = {1.21, 1.05, 0.89};
   double sigxerr[3] = {harp5C11_xsigma_err,
                        harp5C11B_xsigma_err,
                        radHarp_xsigma_err};
   double sy[3] = {harp5C11_spos, harp5C11B_spos, radHarp_spos};
   double sigy[3] = {0.48, 0.46, 0.435};
   double sigyerr[3] = {harp5C11_ysigma_err,
                        harp5C11B_ysigma_err,
                        radHarp_ysigma_err};
   fit_and_plot(sx, sigx, sigxerr, sy, sigy, sigyerr);
}
