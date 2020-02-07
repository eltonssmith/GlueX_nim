void gluex_nim_pullspz_pulls_mean_mc()
{
//=========Macro generated from canvas: cRes_Mean2/
//=========  (Thu Feb  6 10:34:48 2020) by ROOT version 6.18/04
   TCanvas *cRes_Mean2 = new TCanvas("cRes_Mean2", "",10,45,700,500);
   gStyle->SetOptStat(0);
   cRes_Mean2->Range(-0.198,-0.84,1.122,0.76);
   cRes_Mean2->SetFillColor(0);
   cRes_Mean2->SetBorderMode(0);
   cRes_Mean2->SetBorderSize(2);
   cRes_Mean2->SetLeftMargin(0.15);
   cRes_Mean2->SetBottomMargin(0.15);
   cRes_Mean2->SetFrameBorderMode(0);
   cRes_Mean2->SetFrameBorderMode(0);
   
   Double_t _fx1040[23] = {
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
   Double_t _fy1040[23] = {
   0.03231773,
   0.03231773,
   0.03502148,
   0.03668656,
   0.03796381,
   0.03956357,
   0.04016962,
   0.03994195,
   0.04186452,
   0.04099853,
   0.0384676,
   0.04343932,
   0.0439092,
   0.04731893,
   0.05062667,
   0.04449241,
   0.04216839,
   0.04468603,
   0.05595897,
   0.05329536,
   0.05539872,
   0.06730236,
   0.06874915};
   Double_t _fex1040[23] = {
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
   Double_t _fey1040[23] = {
   0.005302177,
   0.005302177,
   0.005527442,
   0.005598449,
   0.005706483,
   0.006039365,
   0.006955704,
   0.007557539,
   0.008216478,
   0.008643056,
   0.009123984,
   0.009525216,
   0.009737194,
   0.01018143,
   0.01076014,
   0.0110356,
   0.01146594,
   0.01149175,
   0.01296603,
   0.01305435,
   0.01406555,
   0.01664724,
   0.01855685};
   TGraphErrors *gre = new TGraphErrors(23,_fx1040,_fy1040,_fex1040,_fey1040);
   gre->SetName("");
   gre->SetTitle("Mean P_{y}-Pulls (MC)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1040 = new TH1F("Graph_Graph1040","Mean P_{y}-Pulls (MC)",100,0,0.99);
   Graph_Graph1040->SetMinimum(-0.6);
   Graph_Graph1040->SetMaximum(0.6);
   Graph_Graph1040->SetDirectory(0);
   Graph_Graph1040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1040->SetLineColor(ci);
   Graph_Graph1040->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph1040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1040->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1040->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph1040->GetYaxis()->SetTitle("#mu of P_{z}-Pull");
   Graph_Graph1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph1040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1040->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1040->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1040->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1040);
   
   gre->Draw("ap");
   
   Double_t _fx1041[23] = {
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
   Double_t _fy1041[23] = {
   -0.02866681,
   -0.02866681,
   -0.02636418,
   -0.02592182,
   -0.02689666,
   -0.02556406,
   -0.0232363,
   -0.02047506,
   -0.01668776,
   -0.01451577,
   -0.01317546,
   -0.01133,
   -0.006060173,
   -0.007199559,
   -0.0008692497,
   -0.00289173,
   0.005112826,
   -0.0006426099,
   0.004771888,
   -0.004617149,
   0.01304299,
   0.01801927,
   0.01587546};
   Double_t _fex1041[23] = {
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
   Double_t _fey1041[23] = {
   0.00464376,
   0.00464376,
   0.004841118,
   0.004922778,
   0.005248418,
   0.005511706,
   0.006173146,
   0.006817855,
   0.007457076,
   0.007986446,
   0.008507719,
   0.009258472,
   0.009971102,
   0.01063445,
   0.0114099,
   0.006264006,
   0.01345203,
   0.01451917,
   0.01581341,
   0.01710056,
   0.02076056,
   0.02347993,
   0.02740935};
   gre = new TGraphErrors(23,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,0,0.99);
   Graph_Graph1041->SetMinimum(-0.6);
   Graph_Graph1041->SetMaximum(0.6);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1041->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1041->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetTitle("#mu of Pz-Pull(p)");
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1041->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1041->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
   gre->Draw("p");
   
   Double_t _fx1042[23] = {
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
   Double_t _fy1042[23] = {
   0.02326042,
   0.02326042,
   0.02592787,
   0.02758938,
   0.03096461,
   0.03237243,
   0.03927851,
   0.04376224,
   0.04364813,
   0.0517367,
   0.06085471,
   0.05929906,
   0.06200842,
   0.05878854,
   0.04526795,
   0.04370705,
   0.04803169,
   0.04628462,
   0.04474422,
   0.06981359,
   0.07249633,
   0.1094938,
   0.05728638};
   Double_t _fex1042[23] = {
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
   Double_t _fey1042[23] = {
   0.006026233,
   0.006026233,
   0.006275748,
   0.006322208,
   0.006644274,
   0.007125999,
   0.008411937,
   0.009573498,
   0.01057217,
   0.01167864,
   0.01294393,
   0.01395922,
   0.01459021,
   0.01559044,
   0.01636066,
   0.01839398,
   0.01934882,
   0.02187735,
   0.02561361,
   0.03140188,
   0.03022109,
   0.04233201,
   0.04114698};
   gre = new TGraphErrors(23,_fx1042,_fy1042,_fex1042,_fey1042);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1042 = new TH1F("Graph_Graph1042","",100,0,0.99);
   Graph_Graph1042->SetMinimum(-0.6);
   Graph_Graph1042->SetMaximum(0.6);
   Graph_Graph1042->SetDirectory(0);
   Graph_Graph1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1042->SetLineColor(ci);
   Graph_Graph1042->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph1042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1042->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1042->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1042->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph1042->GetYaxis()->SetTitle("#mu of Pz-Pull(#gamma_{1})");
   Graph_Graph1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph1042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1042->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1042->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1042->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1042);
   
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
   
   TPaveText *pt = new TPaveText(0.3345559,0.9242632,0.6654441,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Mean P_{y}-Pulls (MC)");
   pt->Draw();
   cRes_Mean2->Modified();
   cRes_Mean2->cd();
   cRes_Mean2->SetSelected(cRes_Mean2);
}
