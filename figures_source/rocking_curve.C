#include <TROOT.h>
#include <TFile.h>
#include <TH2D.h>
#include <TAxis.h>

#include <TCanvas.h>

TH2D *m2scan4();

void rocking_curve()
{
   TCanvas *c1 = (TCanvas*)gROOT->FindObject("c1");
   if (c1 == 0) {
      c1 = new TCanvas("c1","c1",5,10,550,500);
      c1->SetLeftMargin(0.15);
      c1->SetTopMargin(0.1);
      c1->SetBottomMargin(0.15);
      c1->SetRightMargin(0.2);
   }
   TFile f("rocking_curve.root");
   TH2D *h = (TH2D*)f.Get("m2scan4");
   h->SetTitleSize(0.05);
    h->GetXaxis()->SetTitleSize(0.07);
   h->GetXaxis()->SetLabelSize(0.07);
   h->GetXaxis()->SetNdivisions(505);
   h->GetYaxis()->SetTitleSize(0.07);
   h->GetYaxis()->SetLabelSize(0.07);
   h->GetYaxis()->SetNdivisions(505);
   h->GetZaxis()->SetTitleSize(0.07);
   h->GetZaxis()->SetLabelSize(0.07);
   h->GetZaxis()->SetNdivisions(505);
   h->GetZaxis()->SetTitleOffset(1);
    h->Draw("colz");
   c1->Print("JD70-8-study1_4_sigma.png");
   // c1->Print("JD70-8-study1_4_sigma.pdf");
}
