void tof_deltat_resol()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Feb  7 10:30:34 2020) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,45,800,600);
   c1->Range(-0.34375,-0.09375,5.28125,0.53125);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.15);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h__7 = new TH1F("h__7","",100,0.5,5);
   h__7->SetMinimum(0);
   h__7->SetMaximum(0.5);
   h__7->SetStats(0);
   h__7->SetFillColor(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h__7->SetLineColor(ci);
   h__7->SetLineWidth(2);
   h__7->GetXaxis()->SetTitle("Momentum [GeV/c]");
   h__7->GetXaxis()->SetLabelFont(42);
   h__7->GetXaxis()->SetLabelSize(0.07);
   h__7->GetXaxis()->SetTitleSize(0.07);
   h__7->GetXaxis()->SetTitleFont(42);
   h__7->GetYaxis()->SetTitle("#Delta t_{RF} [ns]");
   h__7->GetYaxis()->SetLabelFont(42);
   h__7->GetYaxis()->SetLabelSize(0.07);
   h__7->GetYaxis()->SetNdivisions(505);
   h__7->GetYaxis()->SetTitleSize(0.07);
    h__7->GetYaxis()->SetTitleOffset(1.1);
   h__7->GetYaxis()->SetTitleFont(42);
   h__7->GetZaxis()->SetLabelFont(42);
   h__7->GetZaxis()->SetLabelSize(0.07);
   h__7->GetZaxis()->SetTitleSize(0.07);
   h__7->GetZaxis()->SetTitleFont(42);
   h__7->Draw("hist");
   
   TF1 *pion19 = new TF1("pion","[0]/(x*x)+[1]/x+[2]+[3]*x",0.5,5);
   pion19->SetFillColor(19);
   pion19->SetFillStyle(0);
   pion19->SetLineColor(2);
   pion19->SetLineWidth(3);
   pion19->GetXaxis()->SetLabelFont(42);
   pion19->GetXaxis()->SetLabelSize(0.07);
   pion19->GetXaxis()->SetTitleSize(0.07);
   pion19->GetXaxis()->SetTitleFont(42);
   pion19->GetYaxis()->SetLabelFont(42);
   pion19->GetYaxis()->SetLabelSize(0.07);
   pion19->GetYaxis()->SetTitleSize(0.07);
   pion19->GetYaxis()->SetTitleFont(42);
   pion19->SetParameter(0,-8.85e-05);
   pion19->SetParError(0,0);
   pion19->SetParLimits(0,0,0);
   pion19->SetParameter(1,0.05);
   pion19->SetParError(1,0);
   pion19->SetParLimits(1,0,0);
   pion19->SetParameter(2,0.099);
   pion19->SetParError(2,0);
   pion19->SetParLimits(2,0,0);
   pion19->SetParameter(3,0.00345);
   pion19->SetParError(3,0);
   pion19->SetParLimits(3,0,0);
   pion19->Draw("SAME");
   
   TF1 *kaon20 = new TF1("kaon","[0]/(x*x)+[1]/x+[2]+[3]*x",0.5,5);
   kaon20->SetFillColor(19);
   kaon20->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   kaon20->SetLineColor(ci);
   kaon20->SetLineWidth(3);
   kaon20->SetLineStyle(2);
   kaon20->GetXaxis()->SetLabelFont(42);
   kaon20->GetXaxis()->SetLabelSize(0.07);
   kaon20->GetXaxis()->SetTitleSize(0.07);
   kaon20->GetXaxis()->SetTitleFont(42);
   kaon20->GetYaxis()->SetLabelFont(42);
   kaon20->GetYaxis()->SetLabelSize(0.07);
   kaon20->GetYaxis()->SetTitleSize(0.07);
   kaon20->GetYaxis()->SetTitleFont(42);
   kaon20->SetParameter(0,0.182);
   kaon20->SetParError(0,0);
   kaon20->SetParLimits(0,0,0);
   kaon20->SetParameter(1,-0.179);
   kaon20->SetParError(1,0);
   kaon20->SetParLimits(1,0,0);
   kaon20->SetParameter(2,0.263);
   kaon20->SetParError(2,0);
   kaon20->SetParLimits(2,0,0);
   kaon20->SetParameter(3,-0.017);
   kaon20->SetParError(3,0);
   kaon20->SetParLimits(3,0,0);
   kaon20->Draw("SAME");
   
   TF1 *proton21 = new TF1("proton","[0]/(x*x)+[1]/x+[2]+[3]*x",0.5,5);
   proton21->SetFillColor(19);
   proton21->SetFillStyle(0);
   proton21->SetLineColor(4);
   proton21->SetLineWidth(3);
   proton21->SetLineStyle(3);
   proton21->GetXaxis()->SetLabelFont(42);
   proton21->GetXaxis()->SetLabelSize(0.07);
   proton21->GetXaxis()->SetTitleSize(0.07);
   proton21->GetXaxis()->SetTitleFont(42);
   proton21->GetYaxis()->SetLabelFont(42);
   proton21->GetYaxis()->SetLabelSize(0.07);
   proton21->GetYaxis()->SetTitleSize(0.07);
   proton21->GetYaxis()->SetTitleFont(42);
   proton21->SetParameter(0,0.2);
   proton21->SetParError(0,0);
   proton21->SetParLimits(0,0,0);
   proton21->SetParameter(1,0.033);
   proton21->SetParError(1,0);
   proton21->SetParLimits(1,0,0);
   proton21->SetParameter(2,0.0466);
   proton21->SetParError(2,0);
   proton21->SetParLimits(2,0,0);
   proton21->SetParameter(3,0.0107);
   proton21->SetParError(3,0);
   proton21->SetParLimits(3,0,0);
   proton21->Draw("SAME");
   
   TLegend *leg = new TLegend(0.65,0.7,0.95,0.95,NULL,"brNDC");
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
    entry=leg->AddEntry("kaon","Kaon","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
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
   TLatex *   tex = new TLatex(2,0.42,"TOF");
   tex->SetTextSize(0.1);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   
   c1->SaveAs("tof_deltat_resol.pdf");
    
}
