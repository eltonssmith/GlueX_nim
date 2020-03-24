void gluex_nim_pullspy_pulls_mean_data()
{
//=========Macro generated from canvas: cRes_Mean1/
//=========  (Thu Feb  6 10:34:37 2020) by ROOT version 6.18/04
   TCanvas *cRes_Mean1 = new TCanvas("cRes_Mean1", "",10,45,700,500);
   gStyle->SetOptStat(0);
   cRes_Mean1->Range(-0.198,-0.84,1.122,0.76);
   cRes_Mean1->SetFillColor(0);
   cRes_Mean1->SetBorderMode(0);
   cRes_Mean1->SetBorderSize(2);
   cRes_Mean1->SetLeftMargin(0.15);
   cRes_Mean1->SetBottomMargin(0.15);
   cRes_Mean1->SetFrameBorderMode(0);
   cRes_Mean1->SetFrameBorderMode(0);
   
   Double_t _fx1016[23] = {
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
   Double_t _fy1016[23] = {
   -0.01607878,
   -0.01607878,
   -0.02912975,
   -0.03328,
   -0.03506852,
   -0.03862323,
   -0.0396829,
   -0.04329522,
   -0.04151722,
   -0.03589026,
   -0.03519472,
   -0.03897622,
   -0.04024419,
   -0.04374192,
   -0.0338264,
   -0.04447655,
   -0.03035648,
   -0.02567068,
   -0.02553608,
   -0.02679233,
   -0.004468131,
   0.03526875,
   0.03966025};
   Double_t _fex1016[23] = {
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
   Double_t _fey1016[23] = {
   0.008547142,
   0.008547142,
   0.007247999,
   0.007404399,
   0.007795013,
   0.007341223,
   0.009882054,
   0.01107053,
   0.01219572,
   0.01339386,
   0.01445366,
   0.01589922,
   0.01698485,
   0.0189506,
   0.02058079,
   0.02264566,
   0.02339358,
   0.02642067,
   0.0273291,
   0.03060406,
   0.03194636,
   0.02881795,
   0.02280952};
   TGraphErrors *gre = new TGraphErrors(23,_fx1016,_fy1016,_fex1016,_fey1016);
   gre->SetName("");
   gre->SetTitle("Mean P_{y}-Pulls (Data)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","",100,0,0.99);
   Graph_Graph1016->SetMinimum(-0.6);
   Graph_Graph1016->SetMaximum(0.6);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1016->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetTitle("#mu of P_{y}-Pull");
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1016->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw("ap");
   
   Double_t _fx1017[23] = {
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
   Double_t _fy1017[23] = {
   0.02239378,
   0.02239378,
   0.01372959,
   0.01170792,
   0.007967768,
   0.01407759,
   0.01411962,
   0.008942932,
   0.01839857,
   0.02069241,
   0.0230376,
   0.02257954,
   0.01911474,
   0.02551451,
   0.0320725,
   0.03965291,
   0.03255218,
   0.03090752,
   0.03504275,
   0.0309004,
   0.009911735,
   0.009348465,
   0.006862599};
   Double_t _fex1017[23] = {
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
   Double_t _fey1017[23] = {
   0.00882012,
   0.00882012,
   0.006908504,
   0.006933162,
   0.007354342,
   0.007802717,
   0.009018438,
   0.01012182,
   0.01108058,
   0.01158469,
   0.01283156,
   0.01362511,
   0.0147527,
   0.01637033,
   0.01770306,
   0.01970985,
   0.02056228,
   0.02121094,
   0.02413873,
   0.03062934,
   0.0337925,
   0.02869436,
   0.02244067};
   gre = new TGraphErrors(23,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,0,0.99);
   Graph_Graph1017->SetMinimum(-0.6);
   Graph_Graph1017->SetMaximum(0.6);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1017->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("#mu of Py-Pull(p)");
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1017->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("p");
   
   Double_t _fx1018[23] = {
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
   Double_t _fy1018[23] = {
   -0.03607077,
   -0.03607077,
   -0.05666612,
   -0.05239315,
   -0.05373649,
   -0.05083441,
   -0.05329756,
   -0.05380497,
   -0.05052165,
   -0.04130729,
   -0.03835597,
   -0.02237044,
   -0.02200109,
   -0.02554366,
   -0.03126987,
   -0.0265186,
   -0.009895979,
   -0.01094349,
   0.0003376765,
   0.01223982,
   0.003145615,
   0.007396779,
   0.03491168};
   Double_t _fex1018[23] = {
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
   Double_t _fey1018[23] = {
   0.0101371,
   0.0101371,
   0.008183861,
   0.008254021,
   0.008848374,
   0.009599832,
   0.01166234,
   0.01334603,
   0.01453592,
   0.0159201,
   0.01768225,
   0.01936152,
   0.02150088,
   0.02259715,
   0.02525855,
   0.02675002,
   0.03002477,
   0.0317717,
   0.034149,
   0.03835818,
   0.0366318,
   0.04769728,
   0.0646902};
   gre = new TGraphErrors(23,_fx1018,_fy1018,_fex1018,_fey1018);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,0,0.99);
   Graph_Graph1018->SetMinimum(-0.6);
   Graph_Graph1018->SetMaximum(0.6);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1018->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetTitle("#mu of Py-Pull(#gamma_{1})");
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1018->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.6,0.2,0.9,0.4,NULL,"brNDC");
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
   TLegendEntry *entry3=leg->AddEntry("entry3","p","lpf");
   entry3->SetFillStyle(1000);
   entry3->SetLineColor(4);
   entry3->SetLineStyle(1);
   entry3->SetLineWidth(1);
   entry3->SetMarkerColor(4);
   entry3->SetMarkerStyle(34);
   entry3->SetMarkerSize(1.5);
   entry3->SetTextFont(42);
   leg->Draw();
                                    

    TLatex *tex = new TLatex(0.75,0.8,"DATA");
    tex->SetNDC();
    tex->Draw();
                                    
   
   TPaveText *pt = new TPaveText(0.3238109,0.9242632,0.6761891,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Mean P_{y}-Pulls (Data)");
   pt->Draw();
   cRes_Mean1->Modified();
   cRes_Mean1->cd();
   cRes_Mean1->SetSelected(cRes_Mean1);
                                    

    cRes_Mean1->SaveAs("gluex_nim_pullspy_pulls_mean_data.pdf");
                                    
                                    
}
