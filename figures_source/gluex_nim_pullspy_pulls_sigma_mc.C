void gluex_nim_pullspy_pulls_sigma_mc()
{
//=========Macro generated from canvas: cRes_Sigma1/
//=========  (Thu Feb  6 10:34:48 2020) by ROOT version 6.18/04
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
   
   Double_t _fx1037[23] = {
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
   Double_t _fy1037[23] = {
   0.9421384,
   0.9421384,
   0.9395374,
   0.9383809,
   0.9428864,
   0.951025,
   0.9734229,
   0.9743996,
   0.9723149,
   0.9717344,
   0.9585695,
   0.9453117,
   0.9271776,
   0.8994695,
   0.8759761,
   0.8567964,
   0.8384109,
   0.813392,
   0.7955357,
   0.7515249,
   0.7266713,
   0.6794313,
   0.6255622};
   Double_t _fex1037[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1037[23] = {
   0.004731716,
   0.004731716,
   0.00495664,
   0.004954794,
   0.00524936,
   0.005641146,
   0.006878098,
   0.007706866,
   0.00863101,
   0.009735047,
   0.01049943,
   0.01126399,
   0.01198214,
   0.01186866,
   0.0132708,
   0.01429024,
   0.01562909,
   0.0168203,
   0.01944632,
   0.01983562,
   0.02330344,
   0.02411373,
   0.03264976};
   TGraphErrors *gre = new TGraphErrors(23,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("Width P_{y}-Pulls (MC)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","Width P_{y}-Pulls (MC)",100,0,0.99);
   Graph_Graph1037->SetMinimum(-1.5);
   Graph_Graph1037->SetMaximum(2);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1037->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("#sigma of P_{y}-Pull");
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1037->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   gre->Draw("ap");
   
   Double_t _fx1038[23] = {
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
   Double_t _fy1038[23] = {
   0.9394765,
   0.9394765,
   0.9434786,
   0.9441835,
   0.9522952,
   0.9597822,
   0.9838446,
   0.9930861,
   0.996876,
   1.001213,
   0.9983943,
   0.9902874,
   0.9893631,
   0.9898006,
   0.9792019,
   0.975796,
   0.9862428,
   0.9746246,
   0.9623205,
   0.9311591,
   0.9274827,
   1.009273,
   1.017362};
   Double_t _fex1038[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1038[23] = {
   0.004929044,
   0.004929044,
   0.005301027,
   0.005416046,
   0.005877243,
   0.006322225,
   0.007701451,
   0.008830399,
   0.01005452,
   0.01139497,
   0.01285088,
   0.01381722,
   0.01556169,
   0.01794859,
   0.01969932,
   0.02236136,
   0.02703164,
   0.02971773,
   0.0351939,
   0.03824823,
   0.0498709,
   0.08653121,
   0.1382116};
   gre = new TGraphErrors(23,_fx1038,_fy1038,_fex1038,_fey1038);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","",100,0,0.99);
   Graph_Graph1038->SetMinimum(0.5);
   Graph_Graph1038->SetMaximum(1.2);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph1038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1038->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1038->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph1038->GetYaxis()->SetTitle("#sigma of Py-Pull(p)");
   Graph_Graph1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1038->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1038->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1038->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1038);
   
   gre->Draw("p");
   
   Double_t _fx1039[23] = {
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
   Double_t _fy1039[23] = {
   1.009055,
   1.009055,
   1.012129,
   1.010781,
   1.018555,
   1.030793,
   1.069525,
   1.091294,
   1.09618,
   1.100236,
   1.098857,
   1.097559,
   1.079899,
   1.072348,
   1.070082,
   1.049034,
   1.028721,
   1.006515,
   1.019008,
   1.024085,
   0.9835262,
   0.9585899,
   0.8853152};
   Double_t _fex1039[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fey1039[23] = {
   0.005725452,
   0.005725452,
   0.006056522,
   0.006124929,
   0.006589347,
   0.0071766,
   0.009131098,
   0.01101081,
   0.01262417,
   0.01438036,
   0.01613883,
   0.01828448,
   0.01987338,
   0.02206625,
   0.02500713,
   0.02707389,
   0.02888583,
   0.03293543,
   0.04114769,
   0.05226553,
   0.05992264,
   0.07542548,
   0.09301797};
   gre = new TGraphErrors(23,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,0,0.99);
   Graph_Graph1039->SetMinimum(0.5);
   Graph_Graph1039->SetMaximum(1.2);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetTitle("Prob(#chi^{2},NDF) #geq ...");
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1039->GetXaxis()->SetTickLength(0.05);
   Graph_Graph1039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetTitle("#sigma of Py-Pull(#gamma_{1})");
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1039->GetYaxis()->SetTickLength(0.05);
   Graph_Graph1039->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
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
   
   TPaveText *pt = new TPaveText(0.3309742,0.9242632,0.6690258,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Width P_{y}-Pulls (MC)");
   pt->Draw();
   cRes_Sigma1->Modified();
   cRes_Sigma1->cd();
   cRes_Sigma1->SetSelected(cRes_Sigma1);
}
