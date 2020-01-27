void rate_vs_nthreads_src()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Jan 22 08:01:38 2020) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "",0,44,1400,800);
   c1->Range(-3.625,-17.5,32.625,157.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH2D *axes__1 = new TH2D("axes__1","Rate vs. Nthreads",100,0,29,100,0,140);
   axes__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   axes__1->SetLineColor(ci);
   axes__1->GetXaxis()->SetTitle("Nthreads");
   axes__1->GetXaxis()->SetLabelFont(42);
   axes__1->GetXaxis()->SetLabelSize(0.035);
   axes__1->GetXaxis()->SetTitleSize(0.035);
   axes__1->GetXaxis()->SetTitleFont(42);
   axes__1->GetYaxis()->SetTitle("Rate (Hz)");
   axes__1->GetYaxis()->SetLabelFont(42);
   axes__1->GetYaxis()->SetLabelSize(0.035);
   axes__1->GetYaxis()->SetTitleSize(0.035);
   axes__1->GetYaxis()->SetTitleOffset(0);
   axes__1->GetYaxis()->SetTitleFont(42);
   axes__1->GetZaxis()->SetLabelFont(42);
   axes__1->GetZaxis()->SetLabelSize(0.035);
   axes__1->GetZaxis()->SetTitleSize(0.035);
   axes__1->GetZaxis()->SetTitleFont(42);
   axes__1->Draw("");
   
   Double_t Graph0_fx1001[27] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   28};
   Double_t Graph0_fy1001[27] = {
   4.444444,
   7.052632,
   12.41379,
   17.69231,
   20.2449,
   22.88136,
   26.23188,
   31.79747,
   32.92135,
   37.47475,
   42.32727,
   46.94118,
   48.23256,
   53.46763,
   57.46309,
   60.91824,
   60.30769,
   66.40223,
   71.62963,
   70.93467,
   79.5311,
   82.96804,
   87.1441,
   89.33891,
   89.92,
   88.72308,
   98.35125};
   Double_t Graph0_fex1001[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1001[27] = {
   2.266231,
   3.394635,
   4.590224,
   6.102349,
   5.933408,
   7.23711,
   7.678589,
   7.895488,
   7.044361,
   7.967539,
   8.97077,
   9.387363,
   9.523949,
   10.61172,
   10.92655,
   10.4219,
   10.8655,
   11.06079,
   12.20679,
   11.80711,
   12.79168,
   11.3979,
   11.44271,
   13.2165,
   13.31802,
   14.20077,
   13.45237};
   TGraphErrors *gre = new TGraphErrors(27,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,0,30.7);
   Graph_Graph01001->SetMinimum(1.960392);
   Graph_Graph01001->SetMaximum(122.7662);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *rf1002 = new TF1("rf","1.0/([0]+[1]/x)",0,28, TF1::EAddToList::kNo);
   rf1002->SetFillColor(19);
   rf1002->SetFillStyle(0);
   rf1002->SetLineColor(2);
   rf1002->SetLineWidth(2);
   rf1002->SetChisquare(0.883947);
   rf1002->SetNDF(25);
   rf1002->GetXaxis()->SetLabelFont(42);
   rf1002->GetXaxis()->SetLabelSize(0.035);
   rf1002->GetXaxis()->SetTitleSize(0.035);
   rf1002->GetXaxis()->SetTitleFont(42);
   rf1002->GetYaxis()->SetLabelFont(42);
   rf1002->GetYaxis()->SetLabelSize(0.035);
   rf1002->GetYaxis()->SetTitleSize(0.035);
   rf1002->GetYaxis()->SetTitleOffset(0);
   rf1002->GetYaxis()->SetTitleFont(42);
   rf1002->SetParameter(0,0.00112455);
   rf1002->SetParError(0,0.001451772);
   rf1002->SetParLimits(0,0,0);
   rf1002->SetParameter(1,0.2487112);
   rf1002->SetParError(1,0.02767952);
   rf1002->SetParLimits(1,0,0);
   rf1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(rf1002);
   gre->Draw("pe1");
   
   TF1 *rf1003 = new TF1("rf","1.0/([0]+[1]/x)",1,28, TF1::EAddToList::kDefault);
   rf1003->SetFillColor(19);
   rf1003->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   rf1003->SetLineColor(ci);
   rf1003->SetLineWidth(10);
   rf1003->SetChisquare(0.883947);
   rf1003->SetNDF(25);
   rf1003->GetXaxis()->SetLabelFont(42);
   rf1003->GetXaxis()->SetLabelSize(0.035);
   rf1003->GetXaxis()->SetTitleSize(0.035);
   rf1003->GetXaxis()->SetTitleFont(42);
   rf1003->GetYaxis()->SetLabelFont(42);
   rf1003->GetYaxis()->SetLabelSize(0.035);
   rf1003->GetYaxis()->SetTitleSize(0.035);
   rf1003->GetYaxis()->SetTitleOffset(0);
   rf1003->GetYaxis()->SetTitleFont(42);
   rf1003->SetParameter(0,0.00112455);
   rf1003->SetParError(0,0.001451772);
   rf1003->SetParLimits(0,0,0);
   rf1003->SetParameter(1,0.2487112);
   rf1003->SetParError(1,0.02767952);
   rf1003->SetParLimits(1,0,0);
   rf1003->Draw("same");
   TLatex *   tex = new TLatex(20,35,"T_{serial} = 1.1ms");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20,21,"T_{parallel} = 248.7ms");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20,133,"Multi-threading efficiency: 88.8%");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20,120.4,"#left(eff = #frac{T_{para}}{N*T_{serial} + T_{para}}#right)");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(0,889.2446,28,889.2446);

   ci = TColor::GetColor("#ff00ff");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   TPave *pave = new TPave(0.11,0.68,0.42,0.89,4,"brNDC");

   ci = TColor::GetColor("#cccccc");
   pave->SetFillColor(ci);
   pave->Draw();
      tex = new TLatex(5,126,"R = #frac{1}{T_{serial} + #frac{1}{N}T_{parallel}}");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.714286,106.4,"N = 28 threads");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(32.59978,155.2174,"2018-10-19 DL");
   tex->SetTextAlign(33);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(32.59978,148.5217,"halld_recon-recon-ver03.2");
   tex->SetTextAlign(31);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(31.97565,144.2609,"PSC RM 28-core");
   tex->SetTextAlign(31);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(14.5,143.0435,"Haswell E5-2695 v3 @ 2.30GHz");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.145,143.0435,"hd_rawdata_042120_010.evio");
   tex->SetTextAlign(12);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(30.72739,70,"offmon launch");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.035);
   tex->SetTextAngle(270);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.3723319,0.94,0.6276681,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate vs. Nthreads");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
