//-----------------------------------------------------------------
// Sketch of Hall D beamline
// script based on SiPM_testing_comparison
//
//-----------------------------------------------------------------

void Draw_beamline()
{
    gStyle->SetPadLeftMargin(0.06);
    gStyle->SetPadRightMargin(0.025);
    gStyle->SetPadBottomMargin(0.15);
    
    const Int_t tagger_npts=19;
    float tagger_zpts1[tagger_npts]={65,145,145,199,199,260,335,353,353,353,353,444,586,616,520,520,262,262,65};
    float tagger_xpts1[tagger_npts]={235,235,259,259,235,235,293,275,275,275,275,275,308,245,224,182,182,205,205};
    float Dzwall[tagger_npts]={0,8,8,-8,-8,6,0,-8,-38,-30,0,0,-5,-12,-8,-8,8,8,0};
    float Dxwall[tagger_npts]={8,8,8,8,8,8,12,3,27,32,8,8,8,-6,-6,-8,-8,-8,-8};
    
    float xbeam1= 218;
    
    float xoffset = xbeam1;    // distances from beamline.
    float zoffset = 300;
    float zscale=9904./861;
    float xscale=zscale;
    
    // invert xpts
    for (Int_t jj=0;jj<tagger_npts;jj++) {
        tagger_xpts1[jj] = xoffset - tagger_xpts1[jj];
        tagger_zpts1[jj] = tagger_zpts1[jj] - zoffset;
    }
    
    // add wall thickness to outline
    float tagger_zpts[tagger_npts*2+1];
    float tagger_xpts[tagger_npts*2+1];

    for (Int_t jj=0; jj<tagger_npts; jj++) {
        tagger_xpts[jj] = tagger_xpts1[jj];
        tagger_xpts[jj+tagger_npts] = tagger_xpts1[tagger_npts-jj-1] + Dxwall[tagger_npts-jj-1];
        tagger_zpts[jj] = tagger_zpts1[jj];
        tagger_zpts[jj+tagger_npts] = tagger_zpts1[tagger_npts-jj-1] + Dzwall[tagger_npts-jj-1];
    }
    tagger_xpts[2*tagger_npts] = tagger_xpts[0];
    tagger_zpts[2*tagger_npts] = tagger_zpts[0];
    
    
    for (Int_t jj=0; jj<tagger_npts*2+1; jj++) {
        tagger_xpts[jj] *= xscale;
        tagger_zpts[jj] *= zscale;
        cout << " jj=" << jj << " xpts=" << tagger_xpts[jj] << " zpts=" << tagger_zpts[jj] << endl;
    }
    
    
      // float zmin = 0;
      // float zmax=3200;
      float zmin = -3000;
      float zmax=14000;
      float xmin= -1500;
      float xmax=1500;
      float fudge=240./181.;
      // float fudge = 1.;
      float scale = fudge*(zmax-zmin)/(xmax-xmin);
       printf ("Scale factor =%f\n",scale);
      
      TCanvas *c1 = new TCanvas("c1","Draw_beamline",200,10,500*scale,500);

      TH2D *boundaries = new TH2D("boundaries", "",zmax-zmin, zmin, zmax, xmax-xmin, xmin, xmax);
       boundaries->SetStats(0);
       boundaries->SetXTitle("Z (cm)");
    boundaries->GetYaxis()->SetLabelSize(0.07);
    boundaries->GetYaxis()->SetTitleSize(0.07);
    boundaries->GetYaxis()->SetTitleOffset(0.4);
    boundaries->GetXaxis()->SetLabelSize(0.07);
    boundaries->GetXaxis()->SetTitleSize(0.07);
    boundaries->GetXaxis()->SetTitleOffset(0.8);
    boundaries->GetXaxis()->SetNdivisions(510);
    
    boundaries->SetYTitle("X (cm)");
       boundaries->Draw();
       
    float ztag = (355-zoffset)*xscale;

    float xbeam = (xoffset-xbeam1)*xscale;
       TLine *beamline = new TLine (zmin,xbeam,ztag,xbeam);
       beamline->SetLineWidth(2);
       beamline->SetLineStyle(1);
       beamline->Draw();
    
       TLine *beamline2 = new TLine (ztag,xbeam,zmax,xbeam);
       beamline2->SetLineWidth(2);
       beamline2->SetLineStyle(4);
       beamline2->Draw();
    
#define yc yc1
#define zc zc1
    
      TPolyLine *tagger = new TPolyLine(tagger_npts*2+1, tagger_zpts, tagger_xpts);
      tagger->SetLineWidth(2.0);
      tagger->SetLineColor(kBlack);
      tagger->Draw("l");
      tagger->SetFillColor(kBlack);    //
      // tagger->SetFillColor(590);     // light blue fill
      tagger->SetFillStyle(3012);       // concrete
      // tagger->SetFillStyle(3545);      // steel
    tagger->Draw("f");
    
    float goniz = (300-zoffset)*zscale;
    
    TMarker *goniometer = new TMarker(goniz,xbeam,2);
    goniometer->SetMarkerColor(2);
    goniometer->SetMarkerSize(2);
    goniometer->Draw();
    
    TMarker *taggerMid = new TMarker(ztag,xbeam,2);
    taggerMid->SetMarkerColor(2);
    taggerMid->SetMarkerSize(2);
    // taggerMid->Draw();
    
    float zdump=3361 + (300 - zoffset)*zscale;   // correct for original offset
    float xdump=1429 + (xoffset - 400)*xscale;
    
    TLine *ebeam = new TLine(ztag,xbeam,zdump,xdump);
    ebeam->SetLineWidth(2);
    ebeam->SetLineStyle(1);
    ebeam->Draw();
    
    
    Int_t Npoints=5;
    float xc1[]={1943,1707,1140,1395,1943};
    float zc1[]={2456,3497,3248,2207,2456};
     // modify relative to original offsets
    for (Int_t jj=0;jj<Npoints;jj++) {
        xc1[jj] = (xoffset - 400)*xscale + xc1[jj];
        // zc1[jj] = zc1[jj]  + (300 - zoffset)*zscale;
        cout << " jj=" << jj << " xc1=" << xc1[jj] << " zc1=" << zc1[jj] << endl;
    }
    
    TPolyLine *dump1 = new TPolyLine(Npoints, zc1, xc1);
    dump1->SetLineWidth(2.0);
    dump1->SetLineColor(kBlack);
    dump1->Draw("l");
    // dump1->SetFillStyle(3545);
    dump1->SetFillStyle(3005);
    dump1->SetFillColor(kBlack);
    dump1->Draw("f");
    
       
     Npoints=7;
     float zc2[]={934+8,1018,1018,1050,1050,934+8,934+8};
     float xc2[]={245,245,275,275,191,191,245};
    
        // invert and scale
       for (Int_t jj=0;jj<Npoints;jj++) {
           xc2[jj] = xoffset - xc2[jj];
           zc2[jj] = zc2[jj] - zoffset;
           xc2[jj] *= xscale;
           zc2[jj] *= zscale;
           cout << " jj=" << jj << " xc2=" << xc2[jj] << " zc2=" << zc2[jj] << endl;
       }
    
     TPolyLine *collhut = new TPolyLine(Npoints, zc2, xc2);
     collhut->SetLineWidth(2.0);
     collhut->SetLineColor(kBlack);
     collhut->Draw("l");
    
     
        Npoints=5;
        float zc3[]={1050,1320,1320,1050,1050};
        float xc3[]={309,309,147,147,309};
       
           // invert and scale
          for (Int_t jj=0;jj<Npoints;jj++) {
              xc3[jj] = xoffset - xc3[jj];
              zc3[jj] = zc3[jj] - zoffset;
              xc3[jj] *= xscale*0.92;  // correct dimensions
              zc3[jj] *= zscale;
              cout << " jj=" << jj << " xc3=" << xc3[jj] << " zc3=" << zc3[jj] << endl;
          }
    zc3[1] = zc3[0] + (zc3[1]-zc3[0])*0.97;   // correct dimensions
    zc3[2] = zc3[0] + (zc3[2]-zc3[0])*0.97;   // correct dimensions
    
        TPolyLine *halld = new TPolyLine(Npoints, zc3, xc3);
        halld->SetLineWidth(4.0);
        halld->SetLineColor(kBlack);
        halld->Draw("l");
    
         Npoints=5;
        float radius=3;
        float Dwall=8+4;
        float zc4[]={520-Dwall,934+12,934+12,520-Dwall,520-Dwall};
         float xc4[]={xbeam1-radius,xbeam1-radius,xbeam1+radius,xbeam1+radius,xbeam1-radius};
        
    
    cout << endl;
    
            // invert and scale
           for (Int_t jj=0;jj<Npoints;jj++) {
               xc4[jj] = xoffset - xc4[jj];
               zc4[jj] = zc4[jj] - zoffset;
               xc4[jj] *= xscale;
               zc4[jj] *= zscale;
               cout << " jj=" << jj << " xc4=" << xc4[jj] << " zc4=" << zc4[jj] << endl;
           }
        
         TPolyLine *pipe = new TPolyLine(Npoints, zc4, xc4);
         pipe->SetLineWidth(1.0);
         pipe->SetLineColor(kBlack);
         pipe->Draw("l");
    
    
         Npoints=5;
         float zcol=7525;
         float Dzcol=20*4;    // enlarge for visibility
         float Dxcol=20*4;
         float zc5[]={zcol-Dzcol/2,zcol+Dzcol/2,zcol+Dzcol/2,zcol-Dzcol/2,zcol-Dzcol/2};
         float xc5[]={0,0,Dxcol,Dxcol,0};
        
         TPolyLine *collimator = new TPolyLine(Npoints, zc5, xc5);
         collimator->SetLineWidth(1.0);
         collimator->SetLineColor(kRed);
         collimator->Draw("l");
    
     float zc6[]={zcol-Dzcol/2,zcol+Dzcol/2,zcol+Dzcol/2,zcol-Dzcol/2,zcol-Dzcol/2};
     float xc6[]={0,0,-Dxcol,-Dxcol,0};
    
     TPolyLine *collimator2 = new TPolyLine(Npoints, zc6, xc6);
     collimator2->SetLineWidth(1.0);
     collimator2->SetLineColor(kRed);
     collimator2->Draw("l");
    
      Npoints=5;
      float zTpol=8307;
      float DzTpol=20*4;
      float DxTpol=20*4;
      float zc7[]={zTpol-DzTpol/2,zTpol+DzTpol/2,zTpol+DzTpol/2,zTpol-DzTpol/2,zTpol-DzTpol/2};
      float xc7[]={-DxTpol/2,-DxTpol/2,DxTpol/2,DxTpol/2,-DxTpol/2};
     
      TPolyLine *Tpol = new TPolyLine(Npoints, zc7, xc7);
      Tpol->SetLineWidth(1.0);
      Tpol->SetLineColor(kRed);
      Tpol->Draw("l");
    
       Npoints=5;
       float zPS=8766.9;
       float DzPS=45*4;
       float DxPS=45*4;
       float zc8[]={zPS-DzPS/2,zPS+DzPS/2,zPS+DzPS/2,zPS-DzPS/2,zPS-DzPS/2};
       float xc8[]={-DxPS/2,-DxPS/2,DxPS/2,DxPS/2,-DxPS/2};
      
       TPolyLine *PS = new TPolyLine(Npoints, zc8, xc8);
       PS->SetLineWidth(1.0);
       PS->SetLineColor(kRed);
       PS->Draw("l");
       
          Npoints=5;
          float Dzsolenoid=479.6;
          float Dxsolenoid=376.;
          float zsolenoid=Dzsolenoid/2-50.8+9904.1;
          float zc9[]={zsolenoid-Dzsolenoid/2,zsolenoid+Dzsolenoid/2,zsolenoid+Dzsolenoid/2,zsolenoid-Dzsolenoid/2,zsolenoid-Dzsolenoid/2};
          float xc9[]={-Dxsolenoid/2,-Dxsolenoid/2,Dxsolenoid/2,Dxsolenoid/2,-Dxsolenoid/2};
         
          TPolyLine *solenoid = new TPolyLine(Npoints, zc9, xc9);
          solenoid->SetLineWidth(1.0);
          solenoid->SetLineColor(kRed);
          solenoid->Draw("l");
    
          float ztarget = 65. + 9904.1;
    
          TMarker *target = new TMarker(ztarget,xbeam,2);
          target->SetMarkerColor(2);
          target->SetMarkerSize(2);
          target->Draw();
          
             Npoints=5;
             float Dzgdump=200;
             float Dxgdump=100;
             float zgdump=11644+Dzgdump/2;
             float zc10[]={zgdump-Dzgdump/2,zgdump+Dzgdump/2,zgdump+Dzgdump/2,zgdump-Dzgdump/2,zgdump-Dzgdump/2};
             float xc10[]={-Dxgdump/2,-Dxgdump/2,Dxgdump/2,Dxgdump/2,-Dxgdump/2};
            
             TPolyLine *gdump = new TPolyLine(Npoints, zc10, xc10);
             gdump->SetLineWidth(1.0);
             gdump->SetLineColor(kBlack);
    gdump->Draw("l");
    // dump1->SetFillStyle(3545);
    gdump->SetFillStyle(3005);
    gdump->SetFillColor(kBlack);
    gdump->Draw("f");
    
             Npoints=5;
             float Dzcolwall=146;
             float Dxcolwall=622;
             float zcolwall=8542;
             float zc10a[]={zcolwall-Dzcolwall/2,zcolwall+Dzcolwall/2,zcolwall+Dzcolwall/2,zcolwall-Dzcolwall/2,zcolwall-Dzcolwall/2};
             float xc10a[]={-Dxcolwall/2,-Dxcolwall/2,Dxcolwall/2,Dxcolwall/2,-Dxcolwall/2};
            
             TPolyLine *colwall = new TPolyLine(Npoints, zc10a, xc10a);
             colwall->SetLineWidth(1.0);
             colwall->SetLineColor(kBlack);
    colwall->Draw("l");
    // dump1->SetFillStyle(3545);
    colwall->SetFillStyle(3005);
    colwall->SetFillColor(kBlack);
    colwall->Draw("f");
    
       Npoints=5;
       float Dztdipole=659;
       float Dxtdipole=112;
       // float ztdipole=Dztdipole/2+633;
       float ztdipole=ztag;
       float zc11[]={ztdipole-Dztdipole/2,ztdipole+Dztdipole/2,ztdipole+Dztdipole/2,ztdipole-Dztdipole/2,ztdipole-Dztdipole/2};
       float xc11[]={-Dxtdipole/2,-Dxtdipole/2,Dxtdipole/2,Dxtdipole/2,-Dxtdipole/2};
    
    // rotate magnet by 6.5 deg.
    float tangle=-6.5*3.14159/180.;
        cout << endl;
        for (Int_t kk=0; kk<Npoints-1; kk++) {
            cout << " kk=" << kk << " xc11=" << xc11[kk] << " zc11=" << zc11[kk] << endl;
            double xx = (zc11[kk]-ztag)*cos(tangle) - xc11[kk]*sin(tangle);
        	double yy = (zc11[kk]-ztag)*sin(tangle) + xc11[kk]*cos(tangle);
        	zc11[kk] = xx + ztag;
        	xc11[kk] = yy;
        	cout << " kk=" << kk << " xc11=" << xc11[kk] << " zc11=" << zc11[kk] << endl;
        }
        zc11[4] = zc11[0];
        xc11[4] = xc11[0];
    
    
       TPolyLine *tdipole = new TPolyLine(Npoints, zc11, xc11);
       tdipole->SetLineWidth(2.0);
       tdipole->SetLineColor(kRed);
       tdipole->Draw("l");
    
    TLine *plane = new TLine(363,-62,1178,-163);
    plane->SetLineWidth(3.0);
    plane->SetLineColor(kRed);
    plane->Draw("l");
    
    float Dzdash = 125;
    float Dxdash = 100;
    TLine *arrow = new TLine(-214,510,-55,123);
    arrow->SetLineWidth(2);
    arrow->SetLineColor(kBlack);
    arrow->Draw();
    TLine *dash = new TLine(-214,510,-214-Dzdash,510);
    dash->SetLineWidth(2);
    dash->SetLineColor(kBlack);
    dash->Draw();
    
    TString string;
    string.Form("radiator");
    TLatex *t3 = new TLatex(-214-11*Dzdash,510-Dxdash,string);
    t3->SetTextSize(0.07);
    t3->Draw();
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(374,846,634,123);
    dash->DrawLine(374,846,374-Dzdash,846);
    string.Form("tagging magnet");
    t3->DrawLatex(374-20*Dzdash,846-Dxdash,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(7333,485,7525,156);
    dash->DrawLine(7333,485,7333-Dzdash,485);
    string.Form("collimator");
    t3->DrawLatex(7333-13*Dzdash,485-Dxdash,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(7955,813,8306,115);
    dash->DrawLine(7955,813,7955-Dzdash,813);
    string.Form("triple polarimeter");
    t3->DrawLatex(7955-22*Dzdash,813-Dxdash,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(8429,1183,8759,174);
    dash->DrawLine(8429,1183,8429-Dzdash,1183);
    string.Form("pair spectrometer");
    t3->DrawLatex(8429-22.5*Dzdash,1183-Dxdash,string);
    
    string.Form("solenoid");
    // t3->DrawLatex(9324,-425,string);
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(11791,561,10400,89);
    dash->DrawLine(11791,561,11791+Dzdash,561);
    t3->DrawLatex(11791+2*Dzdash,561-Dxdash,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(10320,898,9958,123);
    dash->DrawLine(10320,898,10320+Dzdash,898);
    string.Form("target center");
    t3->DrawLatex(10320+2*Dzdash,898-Dxdash/2,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(3606,-845,2950,-660);
    dash->DrawLine(3606,-845,3606+Dzdash,-845);
    string.Form("electron dump");
    t3->DrawLatex(3606+2*Dzdash,-845-Dxdash,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(11929,-597,11748,0);
    dash->DrawLine(11929,-597,11929+Dzdash,-597);
    string.Form("photon");
    t3->DrawLatex(11929+2*Dzdash,-597-Dxdash,string);
    string.Form("dump");
    t3->DrawLatex(11929+5*Dzdash,-597-4*Dxdash,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(3968,696,4132,0);
    dash->DrawLine(3968,696,3968-Dzdash,696);
    string.Form("photon beam");
    t3->DrawLatex(3368-12*Dzdash,696-Dxdash,string);
    
    Dzdash = 125;
    Dxdash = 100;
    arrow->DrawLine(-2490,-719,-1845,0);
    dash->DrawLine(-2490,-719,-2490+Dzdash,-719);
    string.Form("electron beam");
    t3->DrawLatex(-2490+2*Dzdash,-719-Dxdash,string);
    
    string.Form("tagger building");
    t3->DrawLatex(-500,-1248,string);
    
    string.Form("Hall D");
    t3->DrawLatex(9618,-1248,string);
    
    /*t3->DrawLatex(zfilter-2,toffset,"filter");
    t3->DrawLatex(zdiffuser-2,toffset,"diffuser");
    t3->DrawLatex(zsipm,toffset,"SiPM A0");*/
    
      c1->SaveAs("Draw_beamline.pdf");
      c1->SaveAs("Draw_beamline.png");

}
