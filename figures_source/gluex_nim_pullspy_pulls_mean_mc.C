void gluex_nim_pullspy_pulls_mean_mc()
{
//=========Macro generated from canvas: cRes_Mean1/
//=========  (Thu Feb  6 10:34:48 2020) by ROOT version 6.18/04
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
   
   Double_t _fx1034[23] = {
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
   Double_t _fy1034[23] = {
   0.009137574,
   0.009137574,
   0.008119521,
   0.008309121,
   0.007869861,
   0.006042636,
   0.005678917,
   0.00536636,
   0.004742955,
   -0.0008510985,
   -0.0004181659,
   0.001181001,
   -0.001175556,
   -0.004787344,
   -0.008670557,
   -0.008197089,
   -0.01017999,
   -0.01146036,
   -0.007363224,
   -0.009668982,
   -0.0122955,
   -0.03392822,
   -0.02083204};
   Double_t _fex1034[23] = {
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
   Double_t _fey1034[23] = {
   0.004957711,
   0.004957711,
   0.005083587,
   0.005128908,
   0.005351219,
   0.005620305,
   0.006410673,
   0.00690897,
   0.00743435,
   0.008018143,
   0.008404818,
   0.008810605,
   0.009228698,
   0.009396516,
   0.009541821,
   0.01031459,
   0.01099719,
   0.01150632,
   0.01251076,
   0.01291706,
   0.01467888,
   0.01604291,
   0.01893286};
   TGraphErrors *gre = new TGraphErrors(23,_fx1034,_fy1034,_fex1034,_fey1034);
   gre->SetName("");
   gre->SetTitle("Mean P_{y}-Pulls (MC)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1034 = new TH1F("Graph_Graph1034","",100,0,0.99);
   Graph_Graph1034->SetMinimum(-0.6);
   Graph_Graph1034->SetMaximum(0.6);
   Graph_Graph1034->SetDirectory(0);
   Graph_Graph1034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1034->SetLineColor(ci);
   Graph_Graph1034->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph1034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1034->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1034->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1034->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph1034->GetYaxis()->SetTitle("#mu of P_{y}-Pull");
   Graph_Graph1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1034->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1034->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1034->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1034);
   
   gre->Draw("ap");
   
   Double_t _fx1035[23] = {
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
   Double_t _fy1035[23] = {
   0.001357377,
   0.001357377,
   0.0008109341,
   0.0007258314,
   0.0009246172,
   0.001151079,
   0.002000394,
   0.005089347,
   0.008282116,
   0.0071801,
   0.01052773,
   0.002684469,
   -0.002455609,
   -0.001913914,
   0.01038403,
   0.00735753,
   0.006962241,
   -0.0009381527,
   -0.0008448611,
   -0.001558027,
   -0.0009529314,
   0.004924075,
   -0.02257678};
   Double_t _fex1035[23] = {
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
   Double_t _fey1035[23] = {
   0.005045285,
   0.005045285,
   0.005332183,
   0.005401559,
   0.005719935,
   0.006007913,
   0.006828049,
   0.007460988,
   0.008014128,
   0.008822256,
   0.009440854,
   0.009957518,
   0.01064188,
   0.01174577,
   0.01241867,
   0.01350772,
   0.01539548,
   0.0166778,
   0.01866135,
   0.02013728,
   0.02399071,
   0.0345379,
   0.04922986};
   gre = new TGraphErrors(23,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,0,0.99);
   Graph_Graph1035->SetMinimum(-0.6);
   Graph_Graph1035->SetMaximum(0.6);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1035->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1035->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetTitle("#mu of Py-Pull(p)");
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1035->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1035->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   gre->Draw("p");
   
   Double_t _fx1036[23] = {
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
   Double_t _fy1036[23] = {
   0.005310811,
   0.005310811,
   0.005389303,
   0.004025398,
   0.004458553,
   0.004723765,
   0.00813101,
   0.006990133,
   0.007036625,
   0.008999441,
   0.007724382,
   0.01190812,
   0.01104788,
   0.01332568,
   0.001973516,
   -0.003397703,
   -0.004799275,
   -0.008611912,
   -0.004820358,
   -0.0159693,
   -0.02751765,
   -0.04776585,
   -0.001682478};
   Double_t _fex1036[23] = {
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
   Double_t _fey1036[23] = {
   0.005637278,
   0.005637278,
   0.005866849,
   0.00593653,
   0.006221439,
   0.006588799,
   0.007725013,
   0.008733484,
   0.009507009,
   0.01033727,
   0.01112477,
   0.01199251,
   0.01263411,
   0.01353295,
   0.014737,
   0.01558479,
   0.01658309,
   0.01855559,
   0.02081622,
   0.02430397,
   0.02368069,
   0.03475444,
   0.0373172};
   gre = new TGraphErrors(23,_fx1036,_fy1036,_fex1036,_fey1036);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1036 = new TH1F("Graph_Graph1036","",100,0,0.99);
   Graph_Graph1036->SetMinimum(-0.6);
   Graph_Graph1036->SetMaximum(0.6);
   Graph_Graph1036->SetDirectory(0);
   Graph_Graph1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1036->SetLineColor(ci);
   Graph_Graph1036->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph1036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1036->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1036->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1036->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph1036->GetYaxis()->SetTitle("#mu of Py-Pull(#gamma_{1})");
   Graph_Graph1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1036->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1036->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1036->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1036);
   
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
   
   TPaveText *pt = new TPaveText(0.3345559,0.9242632,0.6654441,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Mean P_{y}-Pulls (MC)");
   pt->Draw();
   cRes_Mean1->Modified();
   cRes_Mean1->cd();
   cRes_Mean1->SetSelected(cRes_Mean1);
   
   cRes_Mean1->SaveAs("gluex_nim_pullspy_pulls_mean_mc.pdf");
    
}
