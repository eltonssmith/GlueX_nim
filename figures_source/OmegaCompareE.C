void OmegaCompareE()
{
//=========Macro generated from canvas: c0/c0
//=========  (Wed Apr 29 17:08:33 2020) by ROOT version 6.14/06
   TCanvas *c0 = new TCanvas("c0", "c0",200,45,1000,700);
   gStyle->SetOptFit(1);
   c0->Range(-1.057142,0.4,5.99047,1.066667);
   c0->SetFillColor(0);
   c0->SetBorderMode(0);
   c0->SetBorderSize(2);
   c0->SetLeftMargin(0.15);
   c0->SetRightMargin(0.15);
   c0->SetBottomMargin(0.15);
   c0->SetFrameBorderMode(0);
   c0->SetFrameBorderMode(0);
   
   Double_t gr_m2_effic_Ebins_fx1001[14] = {
   0.1666667,
   0.4999997,
   0.8333327,
   1.166666,
   1.499999,
   1.833332,
   2.166665,
   2.499998,
   2.833331,
   3.166664,
   3.499997,
   3.83333,
   4.166663,
   4.499996};
   Double_t gr_m2_effic_Ebins_fy1001[14] = {
   0.682611,
   0.8232778,
   0.9118523,
   0.9389731,
   0.9575463,
   0.9586632,
   0.9598861,
   0.9604394,
   0.9625255,
   0.9591614,
   0.9509498,
   0.9426783,
   0.9306862,
   0.9407014};
   Double_t gr_m2_effic_Ebins_fex1001[14] = {
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
   0,
   0};
   Double_t gr_m2_effic_Ebins_fey1001[14] = {
   0.01599996,
   0.008564864,
   0.007855693,
   0.007624827,
   0.007620991,
   0.008062109,
   0.008601666,
   0.009114182,
   0.01030098,
   0.01181837,
   0.0133631,
   0.0163474,
   0.01990572,
   0.0241965};
   TGraphErrors *gre = new TGraphErrors(14,gr_m2_effic_Ebins_fx1001,gr_m2_effic_Ebins_fy1001,gr_m2_effic_Ebins_fex1001,gr_m2_effic_Ebins_fey1001);
   gre->SetName("gr_m2_effic_Ebins");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_m2_effic_Ebins1001 = new TH1F("Graph_gr_m2_effic_Ebins1001","",100,0,4.933329);
   Graph_gr_m2_effic_Ebins1001->SetMinimum(0.5);
   Graph_gr_m2_effic_Ebins1001->SetMaximum(1);
   Graph_gr_m2_effic_Ebins1001->SetDirectory(0);
   Graph_gr_m2_effic_Ebins1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_m2_effic_Ebins1001->SetLineColor(ci);
   Graph_gr_m2_effic_Ebins1001->GetXaxis()->SetTitle("Missing Photon E_{#gamma} (GeV)");
   Graph_gr_m2_effic_Ebins1001->GetXaxis()->SetNdivisions(305);
   Graph_gr_m2_effic_Ebins1001->GetXaxis()->SetLabelFont(42);
   Graph_gr_m2_effic_Ebins1001->GetXaxis()->SetLabelSize(0.07);
   Graph_gr_m2_effic_Ebins1001->GetXaxis()->SetTitleSize(0.07);
   Graph_gr_m2_effic_Ebins1001->GetXaxis()->SetTitleOffset(0);
   Graph_gr_m2_effic_Ebins1001->GetXaxis()->SetTitleFont(42);
   Graph_gr_m2_effic_Ebins1001->GetYaxis()->SetTitle("Efficiency");
   Graph_gr_m2_effic_Ebins1001->GetYaxis()->SetNdivisions(305);
   Graph_gr_m2_effic_Ebins1001->GetYaxis()->SetLabelFont(42);
   Graph_gr_m2_effic_Ebins1001->GetYaxis()->SetLabelSize(0.07);
   Graph_gr_m2_effic_Ebins1001->GetYaxis()->SetTitleSize(0.07);
   Graph_gr_m2_effic_Ebins1001->GetYaxis()->SetTitleOffset(0.9);
   Graph_gr_m2_effic_Ebins1001->GetYaxis()->SetTitleFont(42);
   Graph_gr_m2_effic_Ebins1001->GetZaxis()->SetLabelFont(42);
   Graph_gr_m2_effic_Ebins1001->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_m2_effic_Ebins1001->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_m2_effic_Ebins1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_m2_effic_Ebins1001);
   
   gre->Draw("ap");
   
   Double_t gr_m1_effic_Ebins_fx1002[14] = {
   0.1666667,
   0.4999997,
   0.8333327,
   1.166666,
   1.499999,
   1.833332,
   2.166665,
   2.499998,
   2.833331,
   3.166664,
   3.499997,
   3.83333,
   4.166663,
   4.499996};
   Double_t gr_m1_effic_Ebins_fy1002[14] = {
   0.667025,
   0.8037849,
   0.9378277,
   0.9440725,
   0.962287,
   0.9619801,
   0.9636657,
   0.951028,
   0.9597049,
   0.979408,
   0.9670731,
   0.9094889,
   0.8917999,
   0.9310039};
   Double_t gr_m1_effic_Ebins_fex1002[14] = {
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
   0,
   0};
   Double_t gr_m1_effic_Ebins_fey1002[14] = {
   0.01768165,
   0.00960941,
   0.009487703,
   0.008978509,
   0.008985502,
   0.009489104,
   0.0101314,
   0.01055314,
   0.01203281,
   0.0142165,
   0.01597978,
   0.01829595,
   0.02206534,
   0.02794422};
   gre = new TGraphErrors(14,gr_m1_effic_Ebins_fx1002,gr_m1_effic_Ebins_fy1002,gr_m1_effic_Ebins_fex1002,gr_m1_effic_Ebins_fey1002);
   gre->SetName("gr_m1_effic_Ebins");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_m1_effic_Ebins1002 = new TH1F("Graph_gr_m1_effic_Ebins1002","Graph",100,0,4.933329);
   Graph_gr_m1_effic_Ebins1002->SetMinimum(0.6149152);
   Graph_gr_m1_effic_Ebins1002->SetMaximum(1.028053);
   Graph_gr_m1_effic_Ebins1002->SetDirectory(0);
   Graph_gr_m1_effic_Ebins1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_m1_effic_Ebins1002->SetLineColor(ci);
   Graph_gr_m1_effic_Ebins1002->GetXaxis()->SetLabelFont(42);
   Graph_gr_m1_effic_Ebins1002->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_m1_effic_Ebins1002->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_m1_effic_Ebins1002->GetXaxis()->SetTitleFont(42);
   Graph_gr_m1_effic_Ebins1002->GetYaxis()->SetLabelFont(42);
   Graph_gr_m1_effic_Ebins1002->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_m1_effic_Ebins1002->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_m1_effic_Ebins1002->GetYaxis()->SetTitleOffset(0);
   Graph_gr_m1_effic_Ebins1002->GetYaxis()->SetTitleFont(42);
   Graph_gr_m1_effic_Ebins1002->GetZaxis()->SetLabelFont(42);
   Graph_gr_m1_effic_Ebins1002->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_m1_effic_Ebins1002->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_m1_effic_Ebins1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_m1_effic_Ebins1002);
   
   gre->Draw("p");
   
   Double_t gr_m2_effic_Ebins_fx1003[14] = {
   0.1666667,
   0.4999997,
   0.8333327,
   1.166666,
   1.499999,
   1.833332,
   2.166665,
   2.499998,
   2.833331,
   3.166664,
   3.499997,
   3.83333,
   4.166663,
   4.499996};
   Double_t gr_m2_effic_Ebins_fy1003[14] = {
   0.6205603,
   0.8272528,
   0.9209056,
   0.9491631,
   0.9575073,
   0.96157,
   0.9620797,
   0.9611956,
   0.9587028,
   0.9603923,
   0.955613,
   0.9491674,
   0.9448132,
   0.9294653};
   Double_t gr_m2_effic_Ebins_fex1003[14] = {
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
   0,
   0};
   Double_t gr_m2_effic_Ebins_fey1003[14] = {
   0.01487567,
   0.008285503,
   0.007755299,
   0.007757666,
   0.007916598,
   0.008456652,
   0.009030104,
   0.009581859,
   0.0107205,
   0.01198238,
   0.01342923,
   0.01567807,
   0.01828623,
   0.02146139};
   gre = new TGraphErrors(14,gr_m2_effic_Ebins_fx1003,gr_m2_effic_Ebins_fy1003,gr_m2_effic_Ebins_fex1003,gr_m2_effic_Ebins_fey1003);
   gre->SetName("gr_m2_effic_Ebins");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_m2_effic_Ebins1003 = new TH1F("Graph_gr_m2_effic_Ebins1003","Graph",100,0,4.933329);
   Graph_gr_m2_effic_Ebins1003->SetMinimum(0.5690156);
   Graph_gr_m2_effic_Ebins1003->SetMaximum(1.009044);
   Graph_gr_m2_effic_Ebins1003->SetDirectory(0);
   Graph_gr_m2_effic_Ebins1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_m2_effic_Ebins1003->SetLineColor(ci);
   Graph_gr_m2_effic_Ebins1003->GetXaxis()->SetLabelFont(42);
   Graph_gr_m2_effic_Ebins1003->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_m2_effic_Ebins1003->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_m2_effic_Ebins1003->GetXaxis()->SetTitleFont(42);
   Graph_gr_m2_effic_Ebins1003->GetYaxis()->SetLabelFont(42);
   Graph_gr_m2_effic_Ebins1003->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_m2_effic_Ebins1003->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_m2_effic_Ebins1003->GetYaxis()->SetTitleOffset(0);
   Graph_gr_m2_effic_Ebins1003->GetYaxis()->SetTitleFont(42);
   Graph_gr_m2_effic_Ebins1003->GetZaxis()->SetLabelFont(42);
   Graph_gr_m2_effic_Ebins1003->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_m2_effic_Ebins1003->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_m2_effic_Ebins1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_m2_effic_Ebins1003);
   
   gre->Draw("p");
   
   Double_t gr_m1_effic_Ebins_fx1004[14] = {
   0.1666667,
   0.4999997,
   0.8333327,
   1.166666,
   1.499999,
   1.833332,
   2.166665,
   2.499998,
   2.833331,
   3.166664,
   3.499997,
   3.83333,
   4.166663,
   4.499996};
   Double_t gr_m1_effic_Ebins_fy1004[14] = {
   0.6096165,
   0.8219971,
   0.9132868,
   0.9442557,
   0.9529438,
   0.960504,
   0.9613336,
   0.9625365,
   0.9802167,
   0.9687722,
   0.9479843,
   0.9420481,
   0.9347614,
   0.9324347};
   Double_t gr_m1_effic_Ebins_fex1004[14] = {
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
   0,
   0};
   Double_t gr_m1_effic_Ebins_fey1004[14] = {
   0.01641505,
   0.00950281,
   0.008961526,
   0.009024707,
   0.009221897,
   0.009899953,
   0.0105762,
   0.0112518,
   0.01291639,
   0.01419796,
   0.015578,
   0.01818552,
   0.02111833,
   0.02517729};
   gre = new TGraphErrors(14,gr_m1_effic_Ebins_fx1004,gr_m1_effic_Ebins_fy1004,gr_m1_effic_Ebins_fex1004,gr_m1_effic_Ebins_fey1004);
   gre->SetName("gr_m1_effic_Ebins");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_m1_effic_Ebins1004 = new TH1F("Graph_gr_m1_effic_Ebins1004","Graph",100,0,4.933329);
   Graph_gr_m1_effic_Ebins1004->SetMinimum(0.5532083);
   Graph_gr_m1_effic_Ebins1004->SetMaximum(1.033126);
   Graph_gr_m1_effic_Ebins1004->SetDirectory(0);
   Graph_gr_m1_effic_Ebins1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_m1_effic_Ebins1004->SetLineColor(ci);
   Graph_gr_m1_effic_Ebins1004->GetXaxis()->SetLabelFont(42);
   Graph_gr_m1_effic_Ebins1004->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_m1_effic_Ebins1004->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_m1_effic_Ebins1004->GetXaxis()->SetTitleFont(42);
   Graph_gr_m1_effic_Ebins1004->GetYaxis()->SetLabelFont(42);
   Graph_gr_m1_effic_Ebins1004->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_m1_effic_Ebins1004->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_m1_effic_Ebins1004->GetYaxis()->SetTitleOffset(0);
   Graph_gr_m1_effic_Ebins1004->GetYaxis()->SetTitleFont(42);
   Graph_gr_m1_effic_Ebins1004->GetZaxis()->SetLabelFont(42);
   Graph_gr_m1_effic_Ebins1004->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_m1_effic_Ebins1004->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_m1_effic_Ebins1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_m1_effic_Ebins1004);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.55,0.25,0.83,0.55,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gr_m1_effic_Ebins","Data (Method 1)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gr_m2_effic_Ebins","Data (Method 2)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gr_m1_effic_Ebins","MC (Method 1)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gr_m2_effic_Ebins","MC (Method 2)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.3,0.1,"");
   tex->SetLineWidth(2);
   tex->Draw();
   c0->Modified();
   c0->cd();
   c0->SetSelected(c0);
}
