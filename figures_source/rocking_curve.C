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
      c1->SetRightMargin(0.20);
   }
   TFile f("rocking_curve.root");
   TH2D *h = (TH2D*)f.Get("m2scan4");
   h->Draw("colz");
   c1->Print("JD70-8-study1_4_sigma.png");
   c1->Print("JD70-8-study1_4_sigma.pdf");
}
