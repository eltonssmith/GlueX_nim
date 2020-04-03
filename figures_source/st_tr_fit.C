Double_t DoubleGauss_func (Double_t *x, Double_t *par){
    
    // Fit to a Double Gaussian
    
    Double_t PI=3.14159;
    
    Double_t A1  = par[0];
    Double_t mu1 = par[1];
    Double_t sigma1 = par[2];
    Double_t A2  = par[3];
    Double_t mu2 = par[4];
    Double_t sigma2 = par[5];
    Double_t c1=par[6];
    Double_t c2=par[7];
    Double_t c3=par[8];
    Double_t c4=par[9];
    
    Double_t time = x[0] ;
    Double_t f1, f2;
    
    //
    f1 = A1*exp( -(time-mu1)*(time-mu1)/(2*sigma1*sigma1));
    f2 = A2*exp( -(time-mu2)*(time-mu2)/(2*sigma2*sigma2));
    
    //cout << " DoubleGAuss" << " A1=" << A1 << " mu1=" << mu1 << " sigma1=" << sigma1 << " A2=" << A2 << " mu2=" << mu2 << " sigma2=" << sigma2 << " f1=" << f1 << " f2=" << f2 << endl;
    
    return f1+f2+c1+c2*time+c3*time*time+c4*time*time*time;
}


void st_tr_fit (void)
{
// 
// plot the results of light transmission for various light guide wrappings
//

// #include <TMath.h>
#include <TRandom.h>

gROOT->Reset();
//TTree *Bfield = (TTree *) gROOT->FindObject("Bfield");
gStyle->SetPalette(1,0);
gStyle->SetOptStat(kFALSE);
// gStyle->SetOptFit(kTRUE);
// gStyle->SetOptFit(1111);
gStyle->SetPadRightMargin(0.15);
gStyle->SetPadLeftMargin(0.15);
gStyle->SetPadBottomMargin(0.15);
gStyle->SetFillColor(0);
//

    TString filename="SCR.data";
    
   TGraphErrors *gr_STdiff= new TGraphErrors(filename);
    
    Double_t A1=1;
    Double_t mu1=0.;
    Double_t sigma1=0.23;
    Double_t A2=0.1;
    Double_t mu2=-0.5;
    Double_t sigma2=0.5;
    Double_t c1=1;
    Double_t c2=0;
    Double_t c3=1;
    Double_t c4=0;
    Int_t npar=10;
    
    TF1 *DoubleGauss = new TF1("DoubleGauss",DoubleGauss_func,-1,1,npar);
    DoubleGauss->SetParameters(A1,mu1,sigma1,A2,mu2,sigma2,c1,c2,c3,c4);
    DoubleGauss->SetParNames("A1","mu1","sigma1","A2","mu2","sigma2","c1","c2","c3","c4");
    // DoubleGauss->FixParameter(6,0);
    // DoubleGauss->FixParameter(7,0);
    // DoubleGauss->FixParameter(8,0);
    //DoubleGauss->FixParameter(9,0);
    DoubleGauss->SetParLimits(0,0,100);
    DoubleGauss->SetParLimits(3,0,100);
    /*DoubleGauss->SetParLimits(2,0,2);
    DoubleGauss->SetParLimits(4,0,2);*/
    
   TCanvas *c0 = new TCanvas("c0","c0 plot_STresol",200,10,700,500);
   // c0->SetGridx();
   // c0->SetGridy();
   c0->SetLeftMargin(0.25);
   c0->SetRightMargin(0.05);
   c0->SetTopMargin(0.05);
   c0->SetBottomMargin(0.2);

   TLegend *leg = new TLegend(0.2,0.70,0.50,0.8);
    
    // dump graphed values
    
    Int_t npts=gr_STdiff->GetN();
    cout << " npts=" << npts << endl;
    
    for (Int_t jj=0; jj<npts; jj++) {
        Double_t x,y;
        gr_STdiff->GetPoint(jj,x,y);
        Double_t xerr=gr_STdiff->GetErrorX(jj);
        Double_t yerr=gr_STdiff->GetErrorY(jj);
        cout << " jj=" << jj << " x=" << x << " y=" << y << " xerr=" << xerr << " yerr=" << yerr << endl;
    }

   Double_t xmin=-2;
   Double_t xmax=2;
   Double_t ymin=0;
   Double_t ymax=1.2;
   gr_STdiff->SetTitle("");
   gr_STdiff->GetXaxis()->SetRangeUser(xmin,xmax);
   gr_STdiff->GetYaxis()->SetRangeUser(ymin,ymax);
   gr_STdiff->GetXaxis()->SetTitleSize(0.07);
   gr_STdiff->GetYaxis()->SetTitleSize(0.07);
   gr_STdiff->GetXaxis()->SetLabelSize(0.07);
   gr_STdiff->GetYaxis()->SetLabelSize(0.07);
    gr_STdiff->GetYaxis()->SetTitleOffset(1.5);
   // gr_STdiff->GetYaxis()->SetTitleOffset(2.0);
   gr_STdiff->GetXaxis()->SetTitle("Start - RF time(ns)");
   gr_STdiff->GetYaxis()->SetTitle("Normalized Counts");
   gr_STdiff->GetXaxis()->SetNdivisions(505);

   leg->AddEntry(gr_STdiff,"Current","p");
   gr_STdiff->SetMarkerColor(4);
   gr_STdiff->SetMarkerStyle(20);
   gr_STdiff->SetMarkerSize(0.5);
    gr_STdiff->Fit("DoubleGauss","","",-1,1);
    gr_STdiff->Draw("Ap");
    
    /*Double_t mu1=2.92622e-02;
    Double_t mu1s=7.68567e-05;
    Double_t mu2=6.58625e-01;
    Double_t mu2s=3.07517e-04;
    Double_t sigma1=1.91500e-01;
    Double_t sigma1s=5.70437e-05;
    Double_t sigma2=3.97301e-01;
    Double_t sigma2s=5.85381e-04;*/
    
    mu1 = DoubleGauss->GetParameter(1);
    sigma1 = abs(DoubleGauss->GetParameter(2));
    mu2 = DoubleGauss->GetParameter(4);
    sigma2 = abs(DoubleGauss->GetParameter(5));
    
    TString tex;
    tex.Form("#mu_{1} = %.3f ns",mu1);
    TLatex *text = new TLatex (0.7,0.9,tex);
    text->SetNDC();
    text->SetTextSize(0.05);
    text->Draw();
    tex.Form("#sigma_{1} = %.3f ns",sigma1);
    text->DrawLatex(0.7,0.82,tex);
    tex.Form("#mu_{2} = %.3f ns",mu2);
    text->DrawLatex(0.7,0.74,tex);
    tex.Form("#sigma_{2} = %.3f ns",sigma2);
    text->DrawLatex(0.7,0.66,tex);
    
    
    c0->SaveAs("st_tr_fit.pdf");
}
