void gluex_nim_pullspx_pulls_mean_mc()
{
//=========Macro generated from canvas: cRes_Mean0/
//=========  (Thu Feb  6 10:34:48 2020) by ROOT version 6.18/04
   TCanvas *cRes_Mean0 = new TCanvas("cRes_Mean0", "",10,45,700,500);
   gStyle->SetOptStat(0);
   cRes_Mean0->Range(-0.198,-0.84,1.122,0.76);
   cRes_Mean0->SetFillColor(0);
   cRes_Mean0->SetBorderMode(0);
   cRes_Mean0->SetBorderSize(2);
   cRes_Mean0->SetLeftMargin(0.15);
   cRes_Mean0->SetBottomMargin(0.15);
   cRes_Mean0->SetFrameBorderMode(0);
   cRes_Mean0->SetFrameBorderMode(0);
   
   Double_t _fx1028[23] = {
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
   Double_t _fy1028[23] = {
   -0.1033301,
   -0.1033301,
   -0.1034656,
   -0.1037803,
   -0.1065595,
   -0.110863,
   -0.1105542,
   -0.1119132,
   -0.1145348,
   -0.1104665,
   -0.1089992,
   -0.1049174,
   -0.1023582,
   -0.09393669,
   -0.09306991,
   -0.08993691,
   -0.08152836,
   -0.07186203,
   -0.06682232,
   -0.06068493,
   -0.0670377,
   -0.06419714,
   -0.04959633};
   Double_t _fex1028[23] = {
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
   Double_t _fey1028[23] = {
   0.005410134,
   0.005410134,
   0.005165753,
   0.005222214,
   0.005778147,
   0.005771237,
   0.006606696,
   0.007123115,
   0.007692933,
   0.008111974,
   0.008589781,
   0.008854058,
   0.009462659,
   0.009559213,
   0.01001558,
   0.01026059,
   0.01082227,
   0.01099613,
   0.01151454,
   0.01197368,
   0.01318373,
   0.015501,
   0.01789666};
   TGraphErrors *gre = new TGraphErrors(23,_fx1028,_fy1028,_fex1028,_fey1028);
   gre->SetName("");
   gre->SetTitle("Mean P_{x}-Pulls (MC)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","",100,0,0.99);
   Graph_Graph1028->SetMinimum(-0.6);
   Graph_Graph1028->SetMaximum(0.6);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1028->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetTitle("#mu of P_{x}-Pull");
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1028->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   gre->Draw("ap");
   
   Double_t _fx1029[23] = {
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
   Double_t _fy1029[23] = {
   -0.1229448,
   -0.1229448,
   -0.1230615,
   -0.1248248,
   -0.1251133,
   -0.128039,
   -0.1329231,
   -0.1338414,
   -0.1349653,
   -0.1339272,
   -0.132624,
   -0.1316122,
   -0.1228835,
   -0.1197257,
   -0.11662,
   -0.1147954,
   -0.1089921,
   -0.1153825,
   -0.1158446,
   -0.1044516,
   -0.1113614,
   -0.1181291,
   -0.1003279};
   Double_t _fex1029[23] = {
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
   Double_t _fey1029[23] = {
   0.005172381,
   0.005172381,
   0.005419035,
   0.00546721,
   0.005820152,
   0.006145908,
   0.007118996,
   0.007850905,
   0.008455731,
   0.009606208,
   0.009942309,
   0.01089409,
   0.01122811,
   0.01190792,
   0.01269073,
   0.01287272,
   0.0152339,
   0.01704098,
   0.01926708,
   0.02177163,
   0.0248149,
   0.03543617,
   0.03772144};
   gre = new TGraphErrors(23,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,0,0.99);
   Graph_Graph1029->SetMinimum(-0.6);
   Graph_Graph1029->SetMaximum(0.6);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1029->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("#mu of Px-Pull(p)");
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1029->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   gre->Draw("p");
   
   Double_t _fx1030[23] = {
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
   Double_t _fy1030[23] = {
   -0.1211458,
   -0.1211458,
   -0.1225675,
   -0.1203848,
   -0.1222738,
   -0.1251966,
   -0.1368256,
   -0.1417164,
   -0.1460451,
   -0.1498862,
   -0.1483849,
   -0.1502041,
   -0.1475367,
   -0.1429396,
   -0.1318751,
   -0.1440657,
   -0.1397999,
   -0.1332869,
   -0.1352375,
   -0.1478275,
   -0.1201195,
   -0.08648242,
   -0.07377868};
   Double_t _fex1030[23] = {
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
   Double_t _fey1030[23] = {
   0.005771177,
   0.005771177,
   0.006058062,
   0.006059734,
   0.006399843,
   0.006718092,
   0.008019259,
   0.00919,
   0.0101066,
   0.0111478,
   0.01230788,
   0.01336645,
   0.01418896,
   0.01572056,
   0.01576951,
   0.01791864,
   0.02039053,
   0.02243501,
   0.02630055,
   0.03473067,
   0.03036189,
   0.03534674,
   0.04175865};
   gre = new TGraphErrors(23,_fx1030,_fy1030,_fex1030,_fey1030);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","",100,0,0.99);
   Graph_Graph1030->SetMinimum(-0.6);
   Graph_Graph1030->SetMaximum(0.6);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1030->SetLineColor(ci);
   Graph_Graph1030->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1030->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1030->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1030->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->SetTitle("#mu of Px-Pull(#gamma_{1})");
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1030->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1030->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1030->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
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
   
   TPaveText *pt = new TPaveText(0.3345559,0.9343684,0.6654441,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Mean P_{x}-Pulls (MC)");
   pt->Draw();
   cRes_Mean0->Modified();
   cRes_Mean0->cd();
   cRes_Mean0->SetSelected(cRes_Mean0);
       
    cRes_Mean0->SaveAs("gluex_nim_pullspx_pulls_mean_mc.pdf");

}
