void gluex_nim_pullspx_pulls_sigma_data()
{
//=========Macro generated from canvas: cRes_Sigma0/
//=========  (Thu Feb  6 10:34:37 2020) by ROOT version 6.18/04
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
   
   Double_t _fx1013[23] = {
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
   Double_t _fy1013[23] = {
   1.719524,
   1.719524,
   1.151251,
   1.139028,
   1.129673,
   1.138956,
   1.177494,
   1.18161,
   1.171937,
   1.162596,
   1.156612,
   1.137329,
   1.135765,
   1.153238,
   1.155625,
   1.177771,
   1.149473,
   1.178277,
   1.182499,
   1.225479,
   1.196694,
   0.9332775,
   0.7500051};
   Double_t _fex1013[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1013[23] = {
   0.01399002,
   0.01399002,
   0.008428928,
   0.008551886,
   0.009234962,
   0.01030376,
   0.01376242,
   0.01618062,
   0.01880263,
   0.02017442,
   0.02297105,
   0.02518195,
   0.02825419,
   0.03406606,
   0.03972218,
   0.04833635,
   0.05300436,
   0.06835568,
   0.08351492,
   0.1166279,
   0.1462457,
   0.08977938,
   0.07414842};
   TGraphErrors *gre = new TGraphErrors(23,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("Width P_{x}-Pulls (Data)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,0,0.99);
   Graph_Graph1013->SetMinimum(-1.5);
   Graph_Graph1013->SetMaximum(2);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1013->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("#sigma of P_{x}-Pull");
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1013->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   gre->Draw("ap");
   
   Double_t _fx1014[23] = {
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
   Double_t _fy1014[23] = {
   1.743969,
   1.743969,
   1.108671,
   1.087185,
   1.060323,
   1.059164,
   1.060445,
   1.065224,
   1.059126,
   1.053546,
   1.055741,
   1.044043,
   1.048677,
   1.033399,
   1.010174,
   1.00438,
   0.9924445,
   1.000588,
   1.027864,
   1.00975,
   0.9353712,
   0.894493,
   0.7916916};
   Double_t _fex1014[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1014[23] = {
   0.01388755,
   0.01388755,
   0.007747654,
   0.007574905,
   0.008068689,
   0.008791186,
   0.01079994,
   0.01291232,
   0.01454634,
   0.01624999,
   0.01889966,
   0.02031396,
   0.02528821,
   0.0260278,
   0.02790525,
   0.03176575,
   0.03167814,
   0.04396825,
   0.05656395,
   0.06688007,
   0.07012752,
   0.08222238,
   0.08792508};
   gre = new TGraphErrors(23,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,0,0.99);
   Graph_Graph1014->SetMinimum(0.5);
   Graph_Graph1014->SetMaximum(1.2);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1014->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetTitle("#sigma of Px-Pull(p)");
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1014->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   gre->Draw("p");
   
   Double_t _fx1015[23] = {
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
   Double_t _fy1015[23] = {
   1.77843,
   1.77843,
   1.209779,
   1.195725,
   1.185985,
   1.195604,
   1.234456,
   1.253206,
   1.245534,
   1.243978,
   1.245056,
   1.240521,
   1.224585,
   1.21632,
   1.21815,
   1.189929,
   1.157849,
   1.108933,
   1.121234,
   1.05589,
   0.9177783,
   0.8582893,
   0.8220308};
   Double_t _fex1015[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1015[23] = {
   0.01630832,
   0.01630832,
   0.009553314,
   0.009605991,
   0.01041371,
   0.01144578,
   0.01536727,
   0.01905299,
   0.02136645,
   0.02401069,
   0.02832748,
   0.03186759,
   0.04000198,
   0.03972651,
   0.04731669,
   0.03897198,
   0.05367495,
   0.05521982,
   0.07170747,
   0.0721822,
   0.06191053,
   0.06977742,
   0.09863553};
   gre = new TGraphErrors(23,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,0,0.99);
   Graph_Graph1015->SetMinimum(0.5);
   Graph_Graph1015->SetMaximum(1.2);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1015->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetTitle("#sigma of Px-Pull(#gamma_{1})");
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1015->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
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
   
   TPaveText *pt = new TPaveText(0.3202292,0.9343684,0.6797708,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Width P_{x}-Pulls (Data)");
   pt->Draw();
   cRes_Sigma0->Modified();
   cRes_Sigma0->cd();
   cRes_Sigma0->SetSelected(cRes_Sigma0);
   
   cRes_Sigma0->SaveAs("gluex_nim_pullspx_pulls_sigma_data.pdf");
    
}
