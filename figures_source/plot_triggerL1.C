void plot_triggerL1(void)
{
//
    // Plot the trigger L1 rates for GlueX Phase I.
    // Data taken from Somov's plot
    //

// #include <TMath.h>
#include <TRandom.h>

gROOT->Reset();
//TTree *Bfield = (TTree *) gROOT->FindObject("Bfield");
gStyle->SetPalette(1,0);
// gStyle->SetOptStat(kTRUE);
// gStyle->SetOptFit(kTRUE);
// gStyle->SetOptFit(1111);
gStyle->SetPadRightMargin(0.15);
gStyle->SetPadLeftMargin(0.15);
gStyle->SetPadBottomMargin(0.15);
gStyle->SetFillColor(0);
//

    const Int_t npts=6;   // add first point for defininig limits
    Double_t x[npts]={-1,52,244,422,604,2000};
    Double_t ybit3[npts]={-1,381,359,340,321,500};
    Double_t ybit1[npts]={-1,344,290,236,186,500};
    Double_t ytot[npts]={-1,337,272,208,141,500};
    
    
    Double_t xhi=575;
    Double_t Imax=4.4;   // 4.4 nA
    Double_t Ioff=0.9;   // 0.9 nA beginning of plot
    Double_t yoff=400;
    Double_t Rmax=90;   // 90 kHz
    // scale data to rates
    for (Int_t jj=1; jj<npts; jj++) {
        x[jj] = Ioff + x[jj]*(Imax-Ioff)/xhi;
        ybit1[jj] = (yoff - ybit1[jj])*Rmax/yoff;
        ybit3[jj] = (yoff - ybit3[jj])*Rmax/yoff;
        ytot[jj] = (yoff - ytot[jj])*Rmax/yoff;
        cout <<" x=" << x[jj] << " ybit1=" << ybit1[jj] << " ybit3=" << ybit3[jj] << " ytot=" << ytot[jj] << endl;
    }
    
    TGraph *gr_bit3 = new TGraph(npts,x,ybit3);
    TGraph *gr_bit1 = new TGraph(npts,x,ybit1);
    TGraph *gr_tot = new TGraph(npts,x,ytot);

    TCanvas *c1 = new TCanvas("c1","c1 plot_triggerL1",200,10,1000,700);
    // c1->SetLogy();
    gPad->SetGridx();
    gPad->SetGridy();
    c1->SetRightMargin(0.05);
    c1->SetLeftMargin(0.15);
    c1->SetTopMargin(0.05);
    c1->SetBottomMargin(0.25);
    
    Double_t ymin=0.;
    Double_t ymax=100;
    Double_t xmin=0.9;
    Double_t xmax=5;
    
    gr_bit1->SetTitle("");
    gr_bit1->GetXaxis()->SetRangeUser(xmin,xmax);
    gr_bit1->GetYaxis()->SetRangeUser(ymin,ymax);
    gr_bit1->GetXaxis()->SetTitleSize(0.07);
    gr_bit1->GetYaxis()->SetTitleSize(0.07);
    gr_bit1->GetXaxis()->SetLabelSize(0.07);
    gr_bit1->GetYaxis()->SetLabelSize(0.07);
    gr_bit1->GetXaxis()->SetTitleOffset(1.75);
    gr_bit1->GetYaxis()->SetTitleOffset(1);
    gr_bit1->GetXaxis()->SetNdivisions(505);
    gr_bit1->GetYaxis()->SetNdivisions(505);
    gr_bit1->GetXaxis()->SetTitle("PS Rate (kHz)");
    gr_bit1->GetYaxis()->SetTitle("Trigger Rate (kHz)");
    gr_bit1->SetMarkerStyle(21);
    gr_bit1->SetMarkerColor(2);
    gr_bit1->SetMarkerSize(1.5);
    gr_bit1->Fit("pol1","","",xmin,xmax);
    TF1 *fit1 = gr_bit1->GetFunction("pol1");
    fit1->SetLineColor(1);
    fit1->SetLineWidth(2);
    gr_bit1->Draw("Ap");
    gr_bit3->SetMarkerStyle(22);
    gr_bit3->SetMarkerSize(1.5);
    gr_bit3->SetMarkerColor(4);
    gr_bit3->Fit("pol1","","",xmin,xmax);
    TF1 *fit3 = gr_bit3->GetFunction("pol1");
    fit3->SetLineColor(1);
    fit3->SetLineWidth(2);
    gr_bit3->Draw("psame");
    
    gr_tot->SetMarkerStyle(20);
    gr_tot->SetMarkerSize(1.5);
    gr_tot->SetMarkerColor(1);
    gr_tot->Fit("pol1","","",xmin,xmax);
    TF1 *fittot = gr_tot->GetFunction("pol1");
    fittot->SetLineColor(1);
    fittot->SetLineWidth(2);
    gr_tot->Draw("psame");
    
    Double_t x50=1.15;
    TLatex *tex = new TLatex(x50,-15,"50 nA");
    // tex->SetNDC();
    tex->SetTextSize(0.05);
    tex->Draw();
    tex->DrawLatex(2*x50,-15,"100 nA");
    tex->DrawLatex(3*x50,-15,"150 nA");
    tex->DrawLatex(4*x50,-15,"200 nA");
    
    TArrow *arrow = new TArrow(3.5,65,3.5,50,0.01,"|>");
    arrow->SetLineWidth(2);
    arrow->SetLineColor(1);
    arrow->Draw();
    
   TLegend *leg = new TLegend(0.2,0.7,0.6,0.93);
   leg->AddEntry(gr_tot,"Total","p");
   leg->AddEntry(gr_bit1,"FCAL + BCAL","p");
   leg->AddEntry(gr_bit3,"BCAL","p");
    leg->SetTextSize(0.07);
    leg->Draw();
    
   c1->SaveAs("plot_triggerL1_c1.pdf");
}
