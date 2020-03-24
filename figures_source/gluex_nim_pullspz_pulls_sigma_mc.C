void gluex_nim_pullspz_pulls_sigma_mc()
{
//=========Macro generated from canvas: cRes_Sigma2/
//=========  (Thu Feb  6 10:34:48 2020) by ROOT version 6.18/04
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
   
   Double_t _fx1043[23] = {
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
   Double_t _fy1043[23] = {
   0.9726175,
   0.9726175,
   0.9715861,
   0.9724621,
   0.9769981,
   0.9866191,
   1.021048,
   1.027848,
   1.025738,
   1.019284,
   1.005811,
   0.9883905,
   0.9696,
   0.9380294,
   0.915396,
   0.8888917,
   0.8578705,
   0.829809,
   0.798947,
   0.7472923,
   0.7070331,
   0.6723404,
   0.6012174};
   Double_t _fex1043[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1043[23] = {
   0.005171937,
   0.005171937,
   0.005492101,
   0.005535687,
   0.005685544,
   0.00612275,
   0.007693168,
   0.008800856,
   0.009944341,
   0.01096259,
   0.01182095,
   0.01251237,
   0.01351595,
   0.01391384,
   0.0146665,
   0.01572269,
   0.01653923,
   0.01760088,
   0.01924037,
   0.0193653,
   0.02150838,
   0.02531355,
   0.0286307};
   TGraphErrors *gre = new TGraphErrors(23,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("Width P_{y}-Pulls (MC)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,0,0.99);
   Graph_Graph1043->SetMinimum(-1.5);
   Graph_Graph1043->SetMaximum(2);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1043->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1043->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("#sigma of P_{z}-Pull");
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1043->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   gre->Draw("ap");
   
   Double_t _fx1044[23] = {
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
   Double_t _fy1044[23] = {
   0.9037381,
   0.9037381,
   0.9048905,
   0.905753,
   0.9137393,
   0.9215505,
   0.9402058,
   0.9461005,
   0.953057,
   0.9517085,
   0.9480772,
   0.9510819,
   0.9483064,
   0.9398239,
   0.9298508,
   0.9255317,
   0.9173534,
   0.9038252,
   0.8894582,
   0.855101,
   0.849586,
   0.8162787,
   0.7586502};
   Double_t _fex1044[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1044[23] = {
   0.004369776,
   0.004369776,
   0.004599161,
   0.004617316,
   0.005077856,
   0.005473437,
   0.006513433,
   0.007698048,
   0.008813928,
   0.009837037,
   0.0109415,
   0.01252671,
   0.01398817,
   0.01536433,
   0.01749549,
   0.01878876,
   0.02171054,
   0.02405433,
   0.02763967,
   0.03010044,
   0.03955146,
   0.0467002,
   0.05697086};
   gre = new TGraphErrors(23,_fx1044,_fy1044,_fex1044,_fey1044);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1044 = new TH1F("Graph_Graph1044","",100,0,0.99);
   Graph_Graph1044->SetMinimum(0.5);
   Graph_Graph1044->SetMaximum(1.2);
   Graph_Graph1044->SetDirectory(0);
   Graph_Graph1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1044->SetLineColor(ci);
   Graph_Graph1044->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph1044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1044->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1044->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1044->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph1044->GetYaxis()->SetTitle("#sigma of Pz-Pull(p)");
   Graph_Graph1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph1044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1044->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1044->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1044->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1044);
   
   gre->Draw("p");
   
   Double_t _fx1045[23] = {
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
   Double_t _fy1045[23] = {
   1.044816,
   1.044816,
   1.049055,
   1.047581,
   1.055953,
   1.075085,
   1.119296,
   1.149527,
   1.161056,
   1.175078,
   1.177358,
   1.173028,
   1.160542,
   1.153962,
   1.14463,
   1.134167,
   1.125762,
   1.116019,
   1.123985,
   1.14281,
   1.024989,
   1.037115,
   0.9184846};
   Double_t _fex1045[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1045[23] = {
   0.006299141,
   0.006299141,
   0.006670513,
   0.006734524,
   0.007234038,
   0.008027541,
   0.01034048,
   0.01260959,
   0.01473546,
   0.01789302,
   0.01939318,
   0.02259197,
   0.02412681,
   0.02761711,
   0.02952351,
   0.03294017,
   0.03733445,
   0.04498643,
   0.05577501,
   0.0722065,
   0.06644362,
   0.0905511,
   0.1014321};
   gre = new TGraphErrors(23,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,0,0.99);
   Graph_Graph1045->SetMinimum(0.5);
   Graph_Graph1045->SetMaximum(1.2);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1045->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1045->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetTitle("#sigma of Pz-Pull(#gamma_{1})");
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1045->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1045->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
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
    
    
    TLatex *tex = new TLatex(0.75,0.8,"MC");
    tex->SetNDC();
    tex->Draw();
   
   TPaveText *pt = new TPaveText(0.3309742,0.9242632,0.6690258,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Width P_{y}-Pulls (MC)");
   pt->Draw();
   cRes_Sigma2->Modified();
   cRes_Sigma2->cd();
   cRes_Sigma2->SetSelected(cRes_Sigma2);
   
   cRes_Sigma2->SaveAs("gluex_nim_pullspz_pulls_sigma_mc.pdf");
    
}
