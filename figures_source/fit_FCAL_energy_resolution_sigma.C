void fit_FCAL_energy_resolution_sigma()
{
//=========Macro generated from canvas: canvas_FCAL_energy_resolution/FCAL_energy_resolution
//=========  (Tue Dec 17 16:08:38 2019) by ROOT version 6.18/00
   TCanvas *canvas_FCAL_energy_resolution = new TCanvas("canvas_FCAL_energy_resolution", "FCAL_energy_resolution",10,65,900,600);
   gStyle->SetOptStat(0);
   canvas_FCAL_energy_resolution->Range(-0.975,-1.420947,5.525,8.052034);
   canvas_FCAL_energy_resolution->SetFillColor(0);
   canvas_FCAL_energy_resolution->SetBorderMode(0);
   canvas_FCAL_energy_resolution->SetBorderSize(0);
   canvas_FCAL_energy_resolution->SetTickx(1);
   canvas_FCAL_energy_resolution->SetTicky(1);
   canvas_FCAL_energy_resolution->SetLeftMargin(0.15);
   canvas_FCAL_energy_resolution->SetRightMargin(0.05);
   canvas_FCAL_energy_resolution->SetTopMargin(0.05);
   canvas_FCAL_energy_resolution->SetBottomMargin(0.15);
   canvas_FCAL_energy_resolution->SetFrameLineStyle(0);
   canvas_FCAL_energy_resolution->SetFrameLineWidth(3);
   canvas_FCAL_energy_resolution->SetFrameBorderMode(0);
   canvas_FCAL_energy_resolution->SetFrameBorderSize(0);
   canvas_FCAL_energy_resolution->SetFrameLineStyle(0);
   canvas_FCAL_energy_resolution->SetFrameLineWidth(3);
   canvas_FCAL_energy_resolution->SetFrameBorderMode(0);
   canvas_FCAL_energy_resolution->SetFrameBorderSize(0);
   
   TH1D *SigmaE_data_RMetaFCAL_EnSymmMean__27 = new TH1D("SigmaE_data_RMetaFCAL_EnSymmMean__27","b)",100,0,10);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(18,5.809432);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(19,5.968018);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(20,6.212809);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(21,6.889441);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(22,6.422565);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(23,6.406872);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(24,6.268763);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(25,6.305681);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(26,5.910491);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(27,6.171628);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(28,5.852391);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(29,5.949587);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(30,5.80608);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(31,5.90588);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(32,5.871332);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(33,5.664346);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(34,5.690588);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(35,5.64813);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(36,5.636715);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(37,5.866902);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(38,5.572379);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(39,5.548295);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(40,5.55025);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(41,5.758621);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(42,5.453705);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(43,5.465833);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(44,5.646064);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(45,5.669413);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(46,5.482347);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(47,5.682264);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(48,5.793048);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(49,5.261774);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinContent(51,5.690829);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(18,0.3109601);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(19,0.1898359);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(20,0.1671723);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(21,0.1644579);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(22,0.1400614);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(23,0.1247068);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(24,0.1154249);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(25,0.1128263);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(26,0.1084188);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(27,0.09932484);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(28,0.1020365);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(29,0.09806678);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(30,0.09685713);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(31,0.1000451);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(32,0.0972164);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(33,0.08773919);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(34,0.08854599);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(35,0.09721217);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(36,0.1019178);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(37,0.1141056);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(38,0.1197409);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(39,0.1225678);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(40,0.1377969);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(41,0.1383051);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(42,0.154301);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(43,0.1554005);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(44,0.170715);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(45,0.1978169);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(46,0.1893014);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(47,0.1612353);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(48,0.2641724);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(49,0.2178006);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetBinError(51,0.5634634);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetMaximum(7.578385);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetEntries(33);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetStats(0);
   
    TF1 *f_res14 = new TF1("f_res","sqrt([0]*[0]/x + [1]*[1])",1.5,5.5, TF1::EAddToList::kNo);
   f_res14->SetFillColor(19);
   f_res14->SetFillStyle(0);
   f_res14->SetMarkerStyle(20);
   f_res14->SetMarkerSize(1.2);
   f_res14->SetLineWidth(2);
   f_res14->SetLineColor(1);
    f_res14->SetChisquare(55.91829);
   f_res14->SetNDF(30);
   f_res14->GetXaxis()->SetNdivisions(508);
   f_res14->GetXaxis()->SetLabelFont(132);
   f_res14->GetXaxis()->SetLabelSize(0.07);
   f_res14->GetXaxis()->SetTitleSize(0.08);
   f_res14->GetXaxis()->SetTitleOffset(0.8);
   f_res14->GetXaxis()->SetTitleFont(132);
   f_res14->GetYaxis()->SetNdivisions(508);
   f_res14->GetYaxis()->SetLabelFont(132);
   f_res14->GetYaxis()->SetLabelSize(0.07);
   f_res14->GetYaxis()->SetTitleSize(0.08);
   f_res14->GetYaxis()->SetTitleOffset(0.9);
   f_res14->GetYaxis()->SetTitleFont(132);
   f_res14->SetParameter(0,6.174605);
   f_res14->SetParError(0,0.276459);
   f_res14->SetParLimits(0,0,0);
   f_res14->SetParameter(1,4.66982);
   f_res14->SetParError(1,0.1214563);
   f_res14->SetParLimits(1,0,0);
   f_res14->SetParent(SigmaE_data_RMetaFCAL_EnSymmMean__27);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetListOfFunctions()->Add(f_res14);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetMarkerStyle(20);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->SetMarkerSize(1.2);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetTitle("E_{#gamma}  (GeV)");
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetRange(1,52);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->CenterTitle(true);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetNdivisions(508);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetLabelFont(132);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetLabelSize(0.07);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetTitleSize(0.08);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetTitleOffset(0.8);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetTitleFont(132);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetTitle("#sigma_{#gamma}/E_{#gamma}   (%)");
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->CenterTitle(true);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetNdivisions(508);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetLabelFont(132);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetLabelSize(0.07);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetTitleSize(0.08);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetTitleOffset(0.9);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetTitleFont(132);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetZaxis()->SetNdivisions(508);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetZaxis()->SetLabelFont(132);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetZaxis()->SetLabelSize(0.07);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetZaxis()->SetTitleSize(0.08);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetZaxis()->SetTitleOffset(1.1);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetZaxis()->SetTitleFont(132);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetXaxis()->SetRangeUser(0,6);
   SigmaE_data_RMetaFCAL_EnSymmMean__27->GetYaxis()->SetRangeUser(0,12);
    SigmaE_data_RMetaFCAL_EnSymmMean__27->Draw("");
   
   TH1D *SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28 = new TH1D("SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28","",100,0,10);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(18,6.423372);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(19,6.711709);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(20,6.805569);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(21,6.256446);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(22,6.174442);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(23,6.02478);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(24,5.909901);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(25,6.077103);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(26,5.782156);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(27,5.775098);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(28,5.715612);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(29,5.645232);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(30,5.821596);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(31,5.528407);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(32,5.647017);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(33,5.48344);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(34,5.698929);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(35,5.515826);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(36,5.201164);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(37,5.129718);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(38,4.735531);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(39,5.014905);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(40,5.287643);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(41,5.321382);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(42,5.357727);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(45,4.792458);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinContent(48,5.139877);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(18,0.2552336);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(19,0.1931846);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(20,0.1513182);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(21,0.1216996);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(22,0.1121364);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(23,0.1037928);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(24,0.09516497);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(25,0.0899624);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(26,0.07327581);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(27,0.07983367);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(28,0.07527456);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(29,0.07655068);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(30,0.08298168);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(31,0.07992175);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(32,0.08986214);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(33,0.0733824);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(34,0.09430525);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(35,0.09129132);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(36,0.1156543);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(37,0.1120965);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(38,0.09152409);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(39,0.1104218);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(40,0.1682737);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(41,0.1834448);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(42,0.1539558);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(45,0.1339369);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetBinError(48,0.4392922);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetEntries(54);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetStats(0);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetLineColor(2);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetMarkerColor(2);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetMarkerStyle(25);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->SetMarkerSize(1.2);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetTitle("E_{#gamma}  (GeV)");
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetRange(1,49);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetNdivisions(508);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetLabelFont(132);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetLabelSize(0.07);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetTitleSize(0.08);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetTitleOffset(0.8);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetXaxis()->SetTitleFont(132);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->SetTitle("#sigma_{#gamma}/E_{#gamma}   (%)");
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->CenterTitle(true);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->SetNdivisions(508);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->SetLabelFont(132);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->SetLabelSize(0.07);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->SetTitleSize(0.08);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->SetTitleOffset(0.9);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetYaxis()->SetTitleFont(132);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetZaxis()->SetNdivisions(508);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetZaxis()->SetLabelFont(132);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetZaxis()->SetLabelSize(0.07);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetZaxis()->SetTitleSize(0.08);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetZaxis()->SetTitleOffset(1.1);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->GetZaxis()->SetTitleFont(132);
   SigmaE_sim_E5p0_3p0_RMetaFCAL_EnSymmMean__28->Draw("same");
   
   TPaveText *pt = new TPaveText(0.18,0.18,0.5,0.5,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("#frac{#sigma_{#gamma}}{E_{#gamma}} = #frac{6.2%}{#sqrt{E}} #oplus 4.7%");
   pt_LaTex->SetTextColor(1);
   pt_LaTex->SetTextFont(132);
   pt_LaTex->SetTextSize(0.06);
   pt->Draw();
   
   pt = new TPaveText(0,0.90125,0.06788419,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(132);
   pt_LaTex = pt->AddText("b)");
   pt->Draw();
   canvas_FCAL_energy_resolution->Modified();
   canvas_FCAL_energy_resolution->cd();
   canvas_FCAL_energy_resolution->SetSelected(canvas_FCAL_energy_resolution);
   canvas_FCAL_energy_resolution->SaveAs("fit_FCAL_energy_resolution_sigma.pdf");
    
}
