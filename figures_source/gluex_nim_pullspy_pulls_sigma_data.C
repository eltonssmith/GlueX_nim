void gluex_nim_pullspy_pulls_sigma_data()
{
//=========Macro generated from canvas: cRes_Sigma1/
//=========  (Thu Feb  6 10:34:37 2020) by ROOT version 6.18/04
   TCanvas *cRes_Sigma1 = new TCanvas("cRes_Sigma1", "",10,45,700,500);
   gStyle->SetOptStat(0);
   cRes_Sigma1->Range(-0.198,-2.2,1.122,2.466667);
   cRes_Sigma1->SetFillColor(0);
   cRes_Sigma1->SetBorderMode(0);
   cRes_Sigma1->SetBorderSize(2);
   cRes_Sigma1->SetLeftMargin(0.15);
   cRes_Sigma1->SetBottomMargin(0.15);
   cRes_Sigma1->SetFrameBorderMode(0);
   cRes_Sigma1->SetFrameBorderMode(0);
   
   Double_t _fx1019[23] = {
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
   Double_t _fy1019[23] = {
   1.679595,
   1.679595,
   1.130605,
   1.122619,
   1.107509,
   1.111746,
   1.134399,
   1.139439,
   1.139069,
   1.142113,
   1.135607,
   1.137832,
   1.126316,
   1.132413,
   1.126943,
   1.116404,
   1.082189,
   1.068602,
   1.028898,
   1.015125,
   0.9403517,
   0.7865231,
   0.5933918};
   Double_t _fex1019[23] = {
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
   Double_t _fey1019[23] = {
   0.0131747,
   0.0131747,
   0.008018204,
   0.008262951,
   0.008755774,
   0.009436048,
   0.01223384,
   0.01419847,
   0.0166738,
   0.01929862,
   0.02201384,
   0.02474839,
   0.02719967,
   0.03228444,
   0.03668837,
   0.04335054,
   0.04286021,
   0.05188033,
   0.0546017,
   0.065719,
   0.06684698,
   0.0535979,
   0.03418186};
   TGraphErrors *gre = new TGraphErrors(23,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("Width P_{y}-Pulls (Data)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,0,0.99);
   Graph_Graph1019->SetMinimum(0);
   Graph_Graph1019->SetMaximum(2);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1019->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("#sigma of P_{y}-Pull");
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1019->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   gre->Draw("ap");
   
   Double_t _fx1020[23] = {
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
   Double_t _fy1020[23] = {
   1.75011,
   1.75011,
   1.095343,
   1.073992,
   1.052806,
   1.051607,
   1.055421,
   1.061334,
   1.059112,
   1.042229,
   1.04459,
   1.033308,
   1.029536,
   1.037322,
   1.023922,
   1.029816,
   1.000503,
   0.9688893,
   0.961324,
   1.001864,
   0.962644,
   0.7937603,
   0.6090675};
   Double_t _fex1020[23] = {
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
   Double_t _fey1020[23] = {
   0.01409307,
   0.01409307,
   0.007585255,
   0.007545759,
   0.008097143,
   0.008852259,
   0.01082825,
   0.01285444,
   0.01490598,
   0.01590687,
   0.0183643,
   0.02024324,
   0.0225505,
   0.0265217,
   0.02929861,
   0.03364527,
   0.0365492,
   0.03864317,
   0.0445398,
   0.06514128,
   0.07448931,
   0.05491345,
   0.03650831};
   gre = new TGraphErrors(23,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,0,0.99);
   Graph_Graph1020->SetMinimum(0.5);
   Graph_Graph1020->SetMaximum(1.2);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1020->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetTitle("#sigma of Py-Pull(p)");
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1020->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
   gre->Draw("p");
   
   Double_t _fx1021[23] = {
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
   Double_t _fy1021[23] = {
   1.778469,
   1.778469,
   1.209298,
   1.19453,
   1.189305,
   1.197518,
   1.23623,
   1.256436,
   1.254564,
   1.253847,
   1.260803,
   1.260757,
   1.268114,
   1.24528,
   1.250098,
   1.233547,
   1.224161,
   1.182074,
   1.151985,
   1.131734,
   1.005014,
   1.020352,
   0.9953035};
   Double_t _fex1021[23] = {
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
   Double_t _fey1021[23] = {
   0.0166066,
   0.0166066,
   0.009483144,
   0.009609407,
   0.01046176,
   0.01169766,
   0.01549713,
   0.01896652,
   0.02169117,
   0.02499625,
   0.02908841,
   0.03393437,
   0.03960172,
   0.04243608,
   0.04855323,
   0.05596136,
   0.06345087,
   0.06779455,
   0.07654085,
   0.09066241,
   0.08229188,
   0.1244277,
   0.1743862};
   gre = new TGraphErrors(23,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,0,0.99);
   Graph_Graph1021->SetMinimum(0.5);
   Graph_Graph1021->SetMaximum(1.2);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1021->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetTitle("#sigma of Py-Pull(#gamma_{1})");
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1021->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
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
    
    
    TLatex *tex = new TLatex(0.75,0.8,"DATA");
    tex->SetNDC();
    tex->Draw();
   
   TPaveText *pt = new TPaveText(0.3202292,0.9242632,0.6797708,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Width P_{y}-Pulls (Data)");
   pt->Draw();
   cRes_Sigma1->Modified();
   cRes_Sigma1->cd();
   cRes_Sigma1->SetSelected(cRes_Sigma1);
   
   cRes_Sigma1->SaveAs("gluex_nim_pullspy_pulls_sigma_data.pdf");
    
}
