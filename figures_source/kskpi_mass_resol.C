void kskpi_mass_resol()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Feb 10 13:15:06 2020) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,45,800,600);
   c1->Range(-1.3125,-7.5,7.4375,42.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.15);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h__1 = new TH1F("h__1","",100,0,7);
   h__1->SetMinimum(0);
   h__1->SetMaximum(40);
   h__1->SetStats(0);
   h__1->SetFillColor(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h__1->SetLineColor(ci);
   h__1->SetLineWidth(2);
   h__1->GetXaxis()->SetTitle("K_{S} Momentum [GeV/c]");
   h__1->GetXaxis()->SetLabelFont(42);
   h__1->GetXaxis()->SetLabelSize(0.055);
   h__1->GetXaxis()->SetTitleSize(0.06);
   h__1->GetXaxis()->SetTitleFont(42);
   h__1->GetYaxis()->SetTitle("K_{S} Invariant Mass Resolution [MeV]");
   h__1->GetYaxis()->SetLabelFont(42);
   h__1->GetYaxis()->SetLabelSize(0.045);
   h__1->GetYaxis()->SetTitleSize(0.055);
   h__1->GetYaxis()->SetTitleOffset(1.1);
   h__1->GetYaxis()->SetTitleFont(42);
   h__1->GetZaxis()->SetLabelFont(42);
   h__1->GetZaxis()->SetLabelSize(0.035);
   h__1->GetZaxis()->SetTitleSize(0.035);
   h__1->GetZaxis()->SetTitleFont(42);
   h__1->Draw("hist");
   
   Double_t Graph0_fx1001[13] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75,
   6.25};
   Double_t Graph0_fy1001[13] = {
   -246.6782,
   14.1989,
   15.14866,
   15.12863,
   15.56052,
   16.01785,
   16.12976,
   16.1965,
   19.13375,
   18.74572,
   22.9287,
   22.56834,
   23.10728};
   Double_t Graph0_fex1001[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[13] = {
   -12.50945,
   0.8090591,
   0.7050182,
   0.5261177,
   0.5935057,
   0.6800645,
   0.5246623,
   0.7281283,
   0.8580364,
   0.7823737,
   1.295866,
   1.899565,
   1.655001};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0,6.85);
   Graph_Graph1001->SetMinimum(-273.8223);
   Graph_Graph1001->SetMaximum(51.90634);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("p");
   
   Double_t Graph1_fx1002[13] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75,
   6.25};
   Double_t Graph1_fy1002[13] = {
   -207.597,
   9.893269,
   9.609259,
   9.586551,
   9.007614,
   9.033723,
   8.588119,
   8.456027,
   8.04601,
   6.890316,
   6.528022,
   7.085267,
   5.583875};
   Double_t Graph1_fex1002[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[13] = {
   -68.25502,
   0.8300433,
   0.4538303,
   0.4248245,
   0.4582448,
   0.3043618,
   0.3070367,
   0.3775623,
   0.3830528,
   0.1285724,
   1.099946,
   0.4666929,
   0.4427684};
   gre = new TGraphErrors(13,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,6.85);
   Graph_Graph1002->SetMinimum(-229.429);
   Graph_Graph1002->SetMaximum(32.55534);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.25,0.75,0.55,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Reconstructed","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Kinematically fit","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
