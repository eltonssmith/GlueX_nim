void fcal_deltat_resol()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Feb  7 10:38:03 2020) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,45,800,600);
   c1->Range(-0.34375,-0.65625,5.28125,3.71875);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.15);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h__12 = new TH1F("h__12","",100,0.5,5);
   h__12->SetMinimum(0);
   h__12->SetMaximum(3.5);
   h__12->SetStats(0);
   h__12->SetFillColor(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h__12->SetLineColor(ci);
   h__12->SetLineWidth(2);
   h__12->GetXaxis()->SetTitle("Momentum [GeV/c]");
   h__12->GetXaxis()->SetLabelFont(42);
   h__12->GetXaxis()->SetLabelSize(0.07);
   h__12->GetXaxis()->SetTitleSize(0.07);
   h__12->GetXaxis()->SetTitleFont(42);
   h__12->GetYaxis()->SetTitle("#Delta t_{RF} [ns]");
   h__12->GetYaxis()->SetLabelFont(42);
   h__12->GetYaxis()->SetLabelSize(0.07);
   h__12->GetYaxis()->SetTitleSize(0.07);
   h__12->GetYaxis()->SetTitleOffset(1.1);
   h__12->GetYaxis()->SetTitleFont(42);
   h__12->GetZaxis()->SetLabelFont(42);
   h__12->GetZaxis()->SetLabelSize(0.07);
   h__12->GetZaxis()->SetTitleSize(0.07);
   h__12->GetZaxis()->SetTitleFont(42);
   h__12->Draw("hist");
   
   TF1 *pion30 = new TF1("pion","[0]/(x*x)+[1]/x+[2]+[3]*x",0.5,5);
   pion30->SetFillColor(19);
   pion30->SetFillStyle(0);
   pion30->SetLineColor(2);
   pion30->SetLineWidth(3);
   pion30->GetXaxis()->SetLabelFont(42);
   pion30->GetXaxis()->SetLabelSize(0.07);
   pion30->GetXaxis()->SetTitleSize(0.07);
   pion30->GetXaxis()->SetTitleFont(42);
   pion30->GetYaxis()->SetLabelFont(42);
   pion30->GetYaxis()->SetLabelSize(0.07);
   pion30->GetYaxis()->SetTitleSize(0.07);
   pion30->GetYaxis()->SetTitleFont(42);
   pion30->SetParameter(0,0.0474);
   pion30->SetParError(0,0);
   pion30->SetParLimits(0,0,0);
   pion30->SetParameter(1,6.14e-05);
   pion30->SetParError(1,0);
   pion30->SetParLimits(1,0,0);
   pion30->SetParameter(2,0.617);
   pion30->SetParError(2,0);
   pion30->SetParLimits(2,0,0);
   pion30->SetParameter(3,0.0133);
   pion30->SetParError(3,0);
   pion30->SetParLimits(3,0,0);
   pion30->Draw("SAME");
   
   TF1 *proton31 = new TF1("proton","[0]/(x*x)+[1]/x+[2]+[3]*x",0.5,5);
   proton31->SetFillColor(19);
   proton31->SetFillStyle(0);
   proton31->SetLineColor(4);
   proton31->SetLineWidth(3);
   proton31->SetLineStyle(3);
   proton31->GetXaxis()->SetLabelFont(42);
   proton31->GetXaxis()->SetLabelSize(0.07);
   proton31->GetXaxis()->SetTitleSize(0.07);
   proton31->GetXaxis()->SetTitleFont(42);
   proton31->GetYaxis()->SetLabelFont(42);
   proton31->GetYaxis()->SetLabelSize(0.07);
   proton31->GetYaxis()->SetTitleSize(0.07);
   proton31->GetYaxis()->SetTitleFont(42);
   proton31->SetParameter(0,1);
   proton31->SetParError(0,0);
   proton31->SetParLimits(0,0,0);
   proton31->SetParameter(1,-0.5);
   proton31->SetParError(1,0);
   proton31->SetParLimits(1,0,0);
   proton31->SetParameter(2,0.725);
   proton31->SetParError(2,0);
   proton31->SetParLimits(2,0,0);
   proton31->SetParameter(3,0);
   proton31->SetParError(3,0);
   proton31->SetParLimits(3,0,0);
   proton31->Draw("SAME");
   
   TLegend *leg = new TLegend(0.65,0.70,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("pion","Pion","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry->SetTextSize(0.07);
    entry=leg->AddEntry("proton","Proton","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(3);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry->SetTextSize(0.07);
    leg->Draw();
   TLatex *   tex = new TLatex(2,3,"FCAL");
   tex->SetTextSize(0.1);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   
   c1->SaveAs("fcal_deltat_resol.pdf");
    
}
