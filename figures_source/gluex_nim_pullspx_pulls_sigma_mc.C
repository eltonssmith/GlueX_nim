void gluex_nim_pullspx_pulls_sigma_mc()
{
//=========Macro generated from canvas: cRes_Sigma0/
//=========  (Thu Feb  6 10:34:48 2020) by ROOT version 6.18/04
   TCanvas *cRes_Sigma0 = new TCanvas("cRes_Sigma0", "",10,45,700,500);
   gStyle->SetOptStat(0);
   cRes_Sigma0->Range(-0.198,-2.2,1.122,2.466667);
   cRes_Sigma0->SetFillColor(0);
   cRes_Sigma0->SetBorderMode(0);
   cRes_Sigma0->SetBorderSize(2);
   cRes_Sigma0->SetLeftMargin(0.15);
   cRes_Sigma0->SetBottomMargin(0.15);
   cRes_Sigma0->SetFrameBorderMode(0);
   cRes_Sigma0->SetFrameBorderMode(0);
   
   Double_t _fx1031[23] = {
   0,
   0.001,
   0.005,
   0.01,
   0.03,
   0.05,
   0.1,
   0.15,
   0.2,
   0.25,
   0.3,
   0.35,
   0.4,
   0.45,
   0.5,
   0.55,
   0.6,
   0.65,
   0.7,
   0.75,
   0.8,
   0.85,
   0.9};
   Double_t _fy1031[23] = {
   0.9461065,
   0.9461065,
   0.942795,
   0.9428768,
   0.9460398,
   0.95699,
   0.9807885,
   0.9805996,
   0.9749419,
   0.9688751,
   0.9567487,
   0.9376188,
   0.9221359,
   0.8954309,
   0.8759549,
   0.8573213,
   0.8241338,
   0.7950958,
   0.7561144,
   0.7058731,
   0.680549,
   0.6522693,
   0.6009221};
   Double_t _fex1031[23] = {
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
   Double_t _fey1031[23] = {
   0.004791161,
   0.004791161,
   0.004916948,
   0.004990702,
   0.005340462,
   0.005740781,
   0.006897938,
   0.007819127,
   0.008680362,
   0.009573577,
   0.01016468,
   0.0109102,
   0.01196923,
   0.01234288,
   0.01222109,
   0.01430722,
   0.01485971,
   0.01553808,
   0.01602609,
   0.01639868,
   0.01919455,
   0.02397089,
   0.02922517};
   TGraphErrors *gre = new TGraphErrors(23,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("Width P_{x}-Pulls (MC)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,0,0.99);
   Graph_Graph1031->SetMinimum(0);
   Graph_Graph1031->SetMaximum(2);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1031->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1031->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetTitle("#sigma of P_{x}-Pull");
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1031->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   gre->Draw("ap");
   
   Double_t _fx1032[23] = {
   0,
   0.001,
   0.005,
   0.01,
   0.03,
   0.05,
   0.1,
   0.15,
   0.2,
   0.25,
   0.3,
   0.35,
   0.4,
   0.45,
   0.5,
   0.55,
   0.6,
   0.65,
   0.7,
   0.75,
   0.8,
   0.85,
   0.9};
   Double_t _fy1032[23] = {
   0.9440128,
   0.9440128,
   0.9454513,
   0.9442711,
   0.9495622,
   0.9625389,
   0.9893586,
   1.002399,
   1.007741,
   1.013979,
   1.008614,
   0.9992261,
   0.9905302,
   0.9764919,
   0.9645659,
   0.963846,
   0.9572169,
   0.9510441,
   0.9555396,
   0.9344115,
   0.9041636,
   0.9467299,
   0.8423846};
   Double_t _fex1032[23] = {
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
   Double_t _fey1032[23] = {
   0.004984223,
   0.004984223,
   0.005312459,
   0.005351331,
   0.005911709,
   0.006351117,
   0.00783821,
   0.009183315,
   0.01047778,
   0.01258856,
   0.01312912,
   0.01546597,
   0.01534766,
   0.01714474,
   0.0188066,
   0.02144984,
   0.02449129,
   0.0281403,
   0.03459818,
   0.03981918,
   0.04638357,
   0.07239942,
   0.07930498};
   gre = new TGraphErrors(23,_fx1032,_fy1032,_fex1032,_fey1032);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1032 = new TH1F("Graph_Graph1032","",100,0,0.99);
   Graph_Graph1032->SetMinimum(0.5);
   Graph_Graph1032->SetMaximum(1.2);
   Graph_Graph1032->SetDirectory(0);
   Graph_Graph1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1032->SetLineColor(ci);
   Graph_Graph1032->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph1032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1032->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1032->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph1032->GetYaxis()->SetTitle("#sigma of Px-Pull(p)");
   Graph_Graph1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1032->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1032->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1032->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1032);
   
   gre->Draw("p");
   
   Double_t _fx1033[23] = {
   0,
   0.001,
   0.005,
   0.01,
   0.03,
   0.05,
   0.1,
   0.15,
   0.2,
   0.25,
   0.3,
   0.35,
   0.4,
   0.45,
   0.5,
   0.55,
   0.6,
   0.65,
   0.7,
   0.75,
   0.8,
   0.85,
   0.9};
   Double_t _fy1033[23] = {
   1.013847,
   1.013847,
   1.015997,
   1.016156,
   1.025592,
   1.038285,
   1.0773,
   1.103609,
   1.114731,
   1.122714,
   1.126399,
   1.127062,
   1.117028,
   1.119689,
   1.105098,
   1.087562,
   1.089589,
   1.088181,
   1.085091,
   1.102834,
   0.990444,
   0.9802465,
   0.9108335};
   Double_t _fex1033[23] = {
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
   Double_t _fey1033[23] = {
   0.00595564,
   0.00595564,
   0.006164521,
   0.006215644,
   0.006716638,
   0.007216397,
   0.009343951,
   0.01142881,
   0.0129911,
   0.0153332,
   0.01784819,
   0.01963427,
   0.02191502,
   0.02568844,
   0.02758145,
   0.02983031,
   0.03606475,
   0.04193782,
   0.05096794,
   0.0661859,
   0.0609662,
   0.08119372,
   0.09827672};
   gre = new TGraphErrors(23,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,0,0.99);
   Graph_Graph1033->SetMinimum(0.5);
   Graph_Graph1033->SetMaximum(1.2);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1033->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1033->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetTitle("#sigma of Px-Pull(#gamma_{1})");
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1033->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.8,0.4,0.9,NULL,"brNDC");
   leg->SetNColumns(3);
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("entry","#pi^{-}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   TLegendEntry *entry2=leg->AddEntry("entry2","p","lpf");
   entry2->SetFillStyle(1000);
   entry2->SetLineColor(8);
   entry2->SetLineStyle(1);
   entry2->SetLineWidth(1);
   entry2->SetMarkerColor(8);
   entry2->SetMarkerStyle(22);
   entry2->SetMarkerSize(1.5);
   entry2->SetTextFont(42);
   TLegendEntry *entry3=leg->AddEntry("entry3","#gamma","lpf");
   entry3->SetFillStyle(1000);
   entry3->SetLineColor(4);
   entry3->SetLineStyle(1);
   entry3->SetLineWidth(1);
   entry3->SetMarkerColor(4);
   entry3->SetMarkerStyle(34);
   entry3->SetMarkerSize(1.5);
   entry3->SetTextFont(42);
   leg->Draw();
    
    
    TLatex *tex = new TLatex(0.75,0.8,"MC");
    tex->SetNDC();
    tex->Draw();
   
   TPaveText *pt = new TPaveText(0.3309742,0.9343684,0.6690258,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Width P_{x}-Pulls (MC)");
   pt->Draw();
   cRes_Sigma0->Modified();
   cRes_Sigma0->cd();
   cRes_Sigma0->SetSelected(cRes_Sigma0);
   
   cRes_Sigma0->SaveAs("gluex_nim_pullspx_pulls_sigma_mc.pdf");
    
}
