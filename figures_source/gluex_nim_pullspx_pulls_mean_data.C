void gluex_nim_pullspx_pulls_mean_data()
{
//=========Macro generated from canvas: cRes_Mean0/
//=========  (Thu Feb  6 10:34:37 2020) by ROOT version 6.18/04
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
   
   Double_t _fx1010[23] = {
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
   Double_t _fy1010[23] = {
   -0.1583527,
   -0.1583527,
   -0.1882216,
   -0.1901188,
   -0.2006453,
   -0.2080359,
   -0.232824,
   -0.2332893,
   -0.2400577,
   -0.2348093,
   -0.2492499,
   -0.2393887,
   -0.2521685,
   -0.2674083,
   -0.2743903,
   -0.2810662,
   -0.2825448,
   -0.3039482,
   -0.2813152,
   -0.3569337,
   -0.3516759,
   -0.2162261,
   -0.1640322};
   Double_t _fex1010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1010[23] = {
   0.009208333,
   0.009208333,
   0.007752594,
   0.007905716,
   0.008513376,
   0.009227932,
   0.01147243,
   0.01292386,
   0.01404095,
   0.01507546,
   0.01711077,
   0.01795856,
   0.01991868,
   0.0235563,
   0.02752804,
   0.03170528,
   0.03551227,
   0.04541919,
   0.0516908,
   0.07856438,
   0.09938259,
   0.05363883,
   0.04728407};
   TGraphErrors *gre = new TGraphErrors(23,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle("Mean P_{x}-Pulls (Data)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,0,0.99);
   Graph_Graph1010->SetMinimum(-0.6);
   Graph_Graph1010->SetMaximum(0.6);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);
   Graph_Graph1010->SetTitleSize(0.1);
    
   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetTitle("#mu of P_{x}-Pull");
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("ap");
    
   Double_t _fx1011[23] = {
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
   Double_t _fy1011[23] = {
   -0.1252259,
   -0.1252259,
   -0.1708444,
   -0.1676647,
   -0.1651571,
   -0.1689809,
   -0.1801784,
   -0.1886879,
   -0.1889999,
   -0.1948028,
   -0.1880485,
   -0.1941686,
   -0.2010361,
   -0.1895066,
   -0.1726509,
   -0.1836007,
   -0.1866518,
   -0.2020763,
   -0.2471369,
   -0.2464815,
   -0.2175133,
   -0.2029717,
   -0.1964963};
   Double_t _fex1011[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1011[23] = {
   0.008914847,
   0.008914847,
   0.007255407,
   0.007233684,
   0.007465943,
   0.008213016,
   0.00957028,
   0.01100084,
   0.01171784,
   0.01295269,
   0.0140676,
   0.01477493,
   0.0178006,
   0.01811107,
   0.01860045,
   0.02108827,
   0.0233074,
   0.0279928,
   0.03727408,
   0.04321449,
   0.04445261,
   0.05056649,
   0.05858128};
   gre = new TGraphErrors(23,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,0,0.99);
   Graph_Graph1011->SetMinimum(-0.6);
   Graph_Graph1011->SetMaximum(0.6);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1011->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("#mu of Px-Pull(p)");
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1011->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   gre->Draw("p");
   
   Double_t _fx1012[23] = {
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
   Double_t _fy1012[23] = {
   -0.180338,
   -0.180338,
   -0.190476,
   -0.1902979,
   -0.1974622,
   -0.206982,
   -0.2311647,
   -0.2472034,
   -0.2604508,
   -0.2530965,
   -0.2530103,
   -0.2554554,
   -0.2404586,
   -0.2422489,
   -0.2394641,
   -0.2422962,
   -0.2318133,
   -0.2324459,
   -0.2372651,
   -0.2095411,
   -0.178932,
   -0.1802387,
   -0.1645017};
   Double_t _fex1012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1012[23] = {
   0.01054975,
   0.01054975,
   0.008510658,
   0.008607991,
   0.009172948,
   0.009967601,
   0.01241799,
   0.0146375,
   0.01613248,
   0.01781479,
   0.01985251,
   0.02194412,
   0.02397876,
   0.02563758,
   0.02908962,
   0.03066097,
   0.03200864,
   0.03465883,
   0.04087198,
   0.04228109,
   0.03733351,
   0.04315153,
   0.05771622};
   gre = new TGraphErrors(23,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,0,0.99);
   Graph_Graph1012->SetMinimum(-0.6);
   Graph_Graph1012->SetMaximum(0.6);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetTitle("Min Prob(#chi^{2},NDF)");
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1012->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetTitle("#mu of Px-Pull(#gamma_{1})");
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1012->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
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
    
    
   TPaveText *pt = new TPaveText(0.3238109,0.9343684,0.6761891,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Mean P_{x}-Pulls (Data)");
   pt->Draw();
   cRes_Mean0->Modified();
   cRes_Mean0->cd();
   cRes_Mean0->SetSelected(cRes_Mean0);
    
    cRes_Mean0->SaveAs("gluex_nim_pullspx_pulls_mean_data.pdf");
}
