void rate_vs_nthread_src()
{
//=========Macro generated from canvas: c1/
//=========  (Fri Feb 21 12:45:34 2020) by ROOT version6.08/06
   TCanvas *c1 = new TCanvas("c1", "",20,43,700,500);
   c1->Range(-6.900001,-36.67547,62.1,330.0792);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.2);

    
   TH2D *axes__1 = new TH2D("axes__1","Event Processing Rates",100,0,55.2,100,0,293.4037);
   axes__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   // axes__1->SetLineColor(ci);
   // c1->SetFrameFillColor(ci);
    
    
    axes__1->SetTitle("");
    axes__1->GetXaxis()->SetTitle("Number of threads");
   axes__1->GetXaxis()->SetLabelFont(42);
   axes__1->GetXaxis()->SetLabelSize(0.07);
   axes__1->GetXaxis()->SetTitleSize(0.07);
   axes__1->GetXaxis()->SetTitleFont(42);
   axes__1->GetYaxis()->SetTitle("Event Processing Rate (Hz)");
   axes__1->GetYaxis()->SetLabelFont(42);
   axes__1->GetYaxis()->SetLabelSize(0.07);
   axes__1->GetYaxis()->SetTitleSize(0.07);
   axes__1->GetYaxis()->SetTitleOffset(1);
    axes__1->GetYaxis()->SetTitleFont(42);
   axes__1->GetZaxis()->SetLabelFont(42);
   axes__1->GetZaxis()->SetLabelSize(0.07);
   axes__1->GetZaxis()->SetTitleSize(0.07);
   axes__1->GetZaxis()->SetTitleFont(42);
   axes__1->Draw("");
   
   Double_t Graph0_fx1001[14] = {
   1,
   2,
   4,
   8,
   12,
   16,
   20,
   24,
   28,
   32,
   36,
   40,
   44,
   48};
   Double_t Graph0_fy1001[14] = {
   7.602882,
   17.23694,
   32.47793,
   58.20558,
   83.55136,
   109.0937,
   133.8908,
   158.6664,
   161.189,
   166.0085,
   168.0925,
   168.7694,
   173.8844,
   177.8204};
   Double_t Graph0_fex1001[14] = {
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1001[14] = {
   0.3274917,
   0.1864445,
   0.2716429,
   0.3560314,
   0.4377485,
   0.5225636,
   0.5785813,
   0.6559234,
   0.6424786,
   0.6550752,
   0.7428969,
   0.6548717,
   0.6894588,
   0.8183366};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   // gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0,52.7);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(195.7751);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *fun1002 = new TF1("fun","1.0/([0]+[1]/(x-(1-[2])*(x-[3])*(x>[3])))",0,52.7);
   fun1002->SetFillColor(19);
   fun1002->SetFillStyle(0);
   fun1002->SetLineColor(2);
   fun1002->SetLineWidth(2);
   fun1002->SetChisquare(209.7876);
   fun1002->SetNDF(11);
   fun1002->GetXaxis()->SetLabelFont(42);
   fun1002->GetXaxis()->SetLabelSize(0.035);
   fun1002->GetXaxis()->SetTitleSize(0.035);
   fun1002->GetXaxis()->SetTitleFont(42);
   fun1002->GetYaxis()->SetLabelFont(42);
   fun1002->GetYaxis()->SetLabelSize(0.035);
   fun1002->GetYaxis()->SetTitleSize(0.035);
   fun1002->GetYaxis()->SetTitleFont(42);
   fun1002->SetParameter(0,0.00116938);
   fun1002->SetParError(0,3.947607e-05);
   fun1002->SetParLimits(0,0,0);
   fun1002->SetParameter(1,0.1252133);
   fun1002->SetParError(1,0.0007180034);
   fun1002->SetParLimits(1,0,0);
   fun1002->SetParameter(2,0.1690177);
   fun1002->SetParError(2,0.00719661);
   fun1002->SetParLimits(2,0,0);
   fun1002->SetParameter(3,24);
   fun1002->SetParError(3,0);
   fun1002->SetParLimits(3,24,24);
   gre->GetListOfFunctions()->Add(fun1002);
   gre->Draw("p");
   TMarker *marker = new TMarker(24,164.9444,21);

   ci = TColor::GetColor("#cc6600");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(2);
   marker->Draw();
   marker = new TMarker(48,191.1275,21);

   ci = TColor::GetColor("#cc6600");
   marker->SetMarkerColor(ci);
   marker->SetMarkerStyle(21);
   marker->SetMarkerSize(2);
   marker->Draw();
   TPave *pave = new TPave(0.552,171.1522,19.872,288.5137,4,"br");
   // pave->Draw();
   TLatex *   tex = new TLatex(1.104,259.1733,"R = #frac{1}{T_{serial} + #frac{1}{N_{#varepsilon}}T_{para}}");
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   /*tex->Draw();
      tex = new TLatex(1.104,200.4925,"N_{#varepsilon} = N_{thr} - (1-#alpha)(N_{thr}-N_{core})(N_{thr}>N_{core})");
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1.104,180.9323,"#alpha = HT equivalent of full core");
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(33.12,122.2516,"T_{serial}: 1.17 ms/event");
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(33.12,102.6913,"T_{para}: 125.21 ms/event");
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(33.12,78.24099,"#alpha: 0.17");
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(35.88,34.23043,"Amdahl p: 0.99");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(41.0688,14.67019,"s: 108.08 (=0.82kHz)");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(30.36,249.3932,"#frac{2#times12 thr.}{1#times24 thr.} = 1.053");

   ci = TColor::GetColor("#993300");
   // tex->SetTextColor(ci);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(30.36,190.7124,"#frac{4#times12 thr.}{1#times48 thr.} = 1.076");

   ci = TColor::GetColor("#993300");
   // tex->SetTextColor(ci);
   tex->SetLineWidth(2);
   tex->Draw();
   pave = new TPave(35.88,273.8435,55.2,293.4037,4,"br");

   ci = TColor::GetColor("#ffff00");
   // pave->SetFillColor(ci);
   pave->Draw();
      tex = new TLatex(39.744,278.7335,"Intel(R) Xeon(R) CPU E5-2670 v3 @ 2.30GHz");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(62.052,325.2954,"June 6, 2017 DL");
   tex->SetTextAlign(33);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(62.052,311.2631,"git revision #1145623");
   tex->SetTextAlign(31);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(60.864,302.3334,"farm140117");
   tex->SetTextAlign(31);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(27.6,299.7821,"hd_rawdata_031034_010.evio");
   tex->SetTextAlign(32);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.276,299.7821,"100k events");
   tex->SetTextAlign(12);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(58.488,146.7019,"danarest,monitoring_hists,janarate");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.035);
   tex->SetTextAngle(270);
   tex->SetLineWidth(2);
   tex->Draw();*/
   
   TPaveText *pt = new TPaveText(0.3719742,0.9343728,0.6280258,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->AddText("Event Processing Rates");
   // AText = pt->AddText("Event Processing Rates");
    pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
    
    c1->SaveAs("rate_vs_nthread.pdf");
}
