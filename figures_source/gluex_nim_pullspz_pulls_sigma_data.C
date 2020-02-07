void gluex_nim_pullspz_pulls_sigma_data()
{
//=========Macro generated from canvas: cRes_Sigma2/
//=========  (Thu Feb  6 10:34:37 2020) by ROOT version 6.18/04
   TCanvas *cRes_Sigma2 = new TCanvas("cRes_Sigma2", "",10,45,700,500);
   gStyle->SetOptStat(0);
   cRes_Sigma2->Range(-0.198,-2.2,1.122,2.466667);
   cRes_Sigma2->SetFillColor(0);
   cRes_Sigma2->SetBorderMode(0);
   cRes_Sigma2->SetBorderSize(2);
   cRes_Sigma2->SetLeftMargin(0.15);
   cRes_Sigma2->SetBottomMargin(0.15);
   cRes_Sigma2->SetFrameBorderMode(0);
   cRes_Sigma2->SetFrameBorderMode(0);
   
   Double_t _fx1025[23] = {
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
   Double_t _fy1025[23] = {
   1.8331,
   1.8331,
   1.29939,
   1.287458,
   1.30262,
   1.335137,
   1.418032,
   1.450711,
   1.454908,
   1.449053,
   1.438596,
   1.43094,
   1.429054,
   1.415777,
   1.450597,
   1.418489,
   1.411552,
   1.333705,
   1.35129,
   1.411763,
   1.375192,
   1.117579,
   0.8525637};
   Double_t _fex1025[23] = {
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
   Double_t _fey1025[23] = {
   0.01778543,
   0.01778543,
   0.01150897,
   0.01165937,
   0.01342617,
   0.01563682,
   0.02241843,
   0.02808669,
   0.03324024,
   0.03742176,
   0.04311935,
   0.0477543,
   0.05451583,
   0.06077073,
   0.07581206,
   0.08149786,
   0.09522822,
   0.09550024,
   0.1225627,
   0.1684918,
   0.2238908,
   0.1553497,
   0.1087912};
   TGraphErrors *gre = new TGraphErrors(23,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("Width P_{y}-Pulls (Data)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","Width P_{y}-Pulls (Data)",100,0,0.99);
   Graph_Graph1025->SetMinimum(-1.5);
   Graph_Graph1025->SetMaximum(2);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1025->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("#sigma of P_{z}-Pull");
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1025->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   gre->Draw("ap");
   
   Double_t _fx1026[23] = {
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
   Double_t _fy1026[23] = {
   1.549374,
   1.549374,
   1.089841,
   1.076022,
   1.052197,
   1.047677,
   1.03443,
   1.021804,
   1.016187,
   0.9994844,
   0.9840038,
   0.972176,
   0.9608193,
   0.933112,
   0.9328573,
   0.9126559,
   0.9045311,
   0.8914542,
   0.8796245,
   0.8609328,
   0.821129,
   0.7393414,
   0.6164482};
   Double_t _fex1026[23] = {
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
   Double_t _fey1026[23] = {
   0.009236626,
   0.009236626,
   0.007232189,
   0.007296566,
   0.007773232,
   0.008429081,
   0.009812657,
   0.01106791,
   0.01276964,
   0.01366583,
   0.01484946,
   0.01635043,
   0.01815343,
   0.01880503,
   0.02185678,
   0.02352545,
   0.02653357,
   0.02990607,
   0.03553112,
   0.04084271,
   0.0461664,
   0.04494986,
   0.04002944};
   gre = new TGraphErrors(23,_fx1026,_fy1026,_fex1026,_fey1026);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","",100,0,0.99);
   Graph_Graph1026->SetMinimum(0.5);
   Graph_Graph1026->SetMaximum(1.2);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1026->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1026->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetTitle("#sigma of Pz-Pull(p)");
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1026->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1026->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
   gre->Draw("p");
   
   Double_t _fx1027[23] = {
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
   Double_t _fy1027[23] = {
   1.847832,
   1.847832,
   1.26367,
   1.249424,
   1.24379,
   1.259614,
   1.320722,
   1.342451,
   1.344848,
   1.337551,
   1.351372,
   1.342792,
   1.329055,
   1.309432,
   1.306582,
   1.28036,
   1.263044,
   1.220353,
   1.201941,
   1.148818,
   1.011059,
   0.9893817,
   0.9547236};
   Double_t _fex1027[23] = {
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
   Double_t _fey1027[23] = {
   0.01878058,
   0.01878058,
   0.01070816,
   0.01089161,
   0.01184286,
   0.01318559,
   0.01838489,
   0.02280966,
   0.02647454,
   0.0297223,
   0.03575193,
   0.03917198,
   0.04338431,
   0.04862019,
   0.05560914,
   0.06070553,
   0.06855997,
   0.0736081,
   0.08656904,
   0.09315631,
   0.08061555,
   0.1074489,
   0.1537087};
   gre = new TGraphErrors(23,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,0,0.99);
   Graph_Graph1027->SetMinimum(0.5);
   Graph_Graph1027->SetMaximum(1.2);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1027->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetTitle("#sigma of Pz-Pull(#gamma_{1})");
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1027->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.6,0.2,0.9,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","#pi^{-}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","p","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","#gamma_{1}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3202292,0.9242632,0.6797708,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Width P_{y}-Pulls (Data)");
   pt->Draw();
   cRes_Sigma2->Modified();
   cRes_Sigma2->cd();
   cRes_Sigma2->SetSelected(cRes_Sigma2);
}
