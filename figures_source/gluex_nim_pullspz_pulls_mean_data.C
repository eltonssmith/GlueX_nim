void gluex_nim_pullspz_pulls_mean_data()
{
//=========Macro generated from canvas: cRes_Mean2/
//=========  (Thu Feb  6 10:34:37 2020) by ROOT version 6.18/04
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
   
   Double_t _fx1022[23] = {
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
   Double_t _fy1022[23] = {
   -0.1356945,
   -0.1356945,
   0.1169528,
   0.1223613,
   0.134307,
   0.1511261,
   0.1904124,
   0.2063745,
   0.2286452,
   0.2243588,
   0.2121414,
   0.2039638,
   0.2070245,
   0.195648,
   0.1951756,
   0.2073489,
   0.2064589,
   0.1875082,
   0.2158917,
   0.2805917,
   0.2366564,
   0.1378726,
   0.06547313};
   Double_t _fex1022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1022[23] = {
   0.01086439,
   0.01086439,
   0.009472708,
   0.009623165,
   0.01064503,
   0.01200827,
   0.01572299,
   0.01862023,
   0.02143896,
   0.02318817,
   0.02566858,
   0.02715937,
   0.03007463,
   0.03184223,
   0.03765137,
   0.04173025,
   0.04767239,
   0.04639132,
   0.06050161,
   0.08406355,
   0.1020772,
   0.06697479,
   0.0480455};
   TGraphErrors *gre = new TGraphErrors(23,_fx1022,_fy1022,_fex1022,_fey1022);
   gre->SetName("");
   gre->SetTitle("Mean P_{y}-Pulls (Data)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","Mean P_{y}-Pulls (Data)",100,0,0.99);
   Graph_Graph1022->SetMinimum(-0.6);
   Graph_Graph1022->SetMaximum(0.6);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1022->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetTitle("#mu of P_{z}-Pull");
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1022->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1022->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
   gre->Draw("ap");
   
   Double_t _fx1023[23] = {
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
   Double_t _fy1023[23] = {
   -0.006336813,
   -0.006336813,
   -0.0335259,
   -0.03230562,
   -0.03611041,
   -0.03752092,
   -0.04171023,
   -0.04078321,
   -0.04064064,
   -0.03629403,
   -0.03088899,
   -0.02652747,
   -0.0205501,
   -0.01688041,
   -0.01101662,
   -0.008954279,
   -0.01307567,
   -0.0139077,
   -0.01710176,
   -0.02613769,
   -0.008416706,
   -0.02556062,
   -0.01333372};
   Double_t _fex1023[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1023[23] = {
   0.00654908,
   0.00654908,
   0.006724288,
   0.006825313,
   0.00718567,
   0.007641644,
   0.00850773,
   0.009264165,
   0.0100862,
   0.01059331,
   0.01118132,
   0.01194592,
   0.01276569,
   0.007114082,
   0.01444822,
   0.01534634,
   0.01666574,
   0.01831524,
   0.02046642,
   0.02269243,
   0.02486909,
   0.02518506,
   0.02399539};
   gre = new TGraphErrors(23,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,0,0.99);
   Graph_Graph1023->SetMinimum(-0.6);
   Graph_Graph1023->SetMaximum(0.6);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1023->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetTitle("#mu of Pz-Pull(p)");
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1023->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   gre->Draw("p");
   
   Double_t _fx1024[23] = {
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
   Double_t _fy1024[23] = {
   -0.1203534,
   -0.1203534,
   0.02298735,
   0.02468183,
   0.03199954,
   0.03594939,
   0.05695516,
   0.06904618,
   0.07520727,
   0.08835784,
   0.08151031,
   0.08647133,
   0.08563396,
   0.09095254,
   0.09569637,
   0.07426096,
   0.086947,
   0.08724228,
   0.06614452,
   0.10142,
   0.0807891,
   0.09055366,
   0.1201514};
   Double_t _fex1024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1024[23] = {
   0.01116473,
   0.01116473,
   0.008871396,
   0.008937355,
   0.009625541,
   0.01038674,
   0.01312341,
   0.01503037,
   0.01669618,
   0.01826661,
   0.0207869,
   0.02242873,
   0.02414875,
   0.0255148,
   0.02791421,
   0.02956081,
   0.03265798,
   0.03459081,
   0.03795431,
   0.04190807,
   0.03854286,
   0.04813511,
   0.06864226};
   gre = new TGraphErrors(23,_fx1024,_fy1024,_fex1024,_fey1024);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","",100,0,0.99);
   Graph_Graph1024->SetMinimum(-0.6);
   Graph_Graph1024->SetMaximum(0.6);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1024->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetTitle("#mu of Pz-Pull(#gamma_{1})");
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1024->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1024->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
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
   
   TPaveText *pt = new TPaveText(0.3238109,0.9242632,0.6761891,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Mean P_{y}-Pulls (Data)");
   pt->Draw();
   cRes_Mean2->Modified();
   cRes_Mean2->cd();
   cRes_Mean2->SetSelected(cRes_Mean2);
}
