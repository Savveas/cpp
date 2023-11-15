#define MyClass_cxx
#include "MyClass.h"
#include <TFile.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void plots(){
    TFile f("histos.root");
    gStyle->SetPalette(kRainBow);


  //muons
  TCanvas *c_muons = new TCanvas ("muons","muons",1000,1000);
  c_muons->Divide(1,3);
  //pt
  c_muons->cd(1);
  h_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  h_mn_pt->GetYaxis()->SetTitle("Entries");
  h_mn_pt->Draw("Ehist"); 
  //eta
  c_muons->cd(2);
  h_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  h_mn_eta->GetYaxis()->SetTitle("Entries");
  h_mn_eta->Draw("Ehist");
  //phi
  c_muons->cd(3);
  h_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  h_mn_phi->GetYaxis()->SetTitle("Entries");
  h_mn_phi->Draw("Ehist");  
  //2D
  TCanvas *c_2D_muons = new TCanvas ("muons2D","muons2D",1000,1000);
  h_mn_pt_eta->Draw("colz");



  //electrons
  TCanvas *c_electrons = new TCanvas ("electrons","electrons",1000,1000);
  c_electrons->Divide(1,3); 
  //pt
  c_electrons->cd(1);
  h_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  h_en_pt->GetYaxis()->SetTitle("Entries");
  h_en_pt->Draw("Ehist");
  //eta
  c_electrons->cd(2);
  h_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  h_en_eta->GetYaxis()->SetTitle("Entries");
  h_en_eta->Draw("Ehist");
  //phi
  c_electrons->cd(3);
  h_en_phi->GetXaxis()->SetTitle("Electron Phi");
  h_en_phi->GetYaxis()->SetTitle("Entries");
  h_en_phi->Draw("Ehist");  
  //2D
  TCanvas *c_2D_electrons = new TCanvas ("electrons2D","electrons2D",1000,1000);
  h_en_pt_eta->Draw("colz");



  //2D muon-electron
  TCanvas *c_2d_phi = new TCanvas("muon-electron phi","muon-electron phi",1000,1000);
  h_mn_en_phi->Draw("colz");



  //jets
  TCanvas *c_jets = new TCanvas("jets","jets",1100,1000);
  c_jets->Divide(2,2);
  //pt
  c_jets->cd(1);
  h_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  h_jet1_pt->GetYaxis()->SetTitle("Entries");
  h_jet1_pt->Draw("Ehist");
  c_jets->cd(2);
  h_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  h_jet2_pt->GetYaxis()->SetTitle("Entries");
  h_jet2_pt->Draw("Ehist");
  c_jets->cd(3);
  h_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  h_jet3_pt->GetYaxis()->SetTitle("Entries");
  h_jet3_pt->Draw("Ehist");
  c_jets->cd(4);
  h_jet4_pt->Draw("Ehist");
  h_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  h_jet4_pt->GetYaxis()->SetTitle("Entries");
  //eta
  TCanvas *c_jets_eta= new TCanvas("jets_eta","jets_eta",1100,1000);
  c_jets_eta->Divide(2,2);
  c_jets_eta->cd(1);
  h_jet1_eta->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  h_jet1_eta->GetYaxis()->SetTitle("Entries");
  h_jet1_eta->Draw("Ehist");
  c_jets_eta->cd(2);
  h_jet2_eta->Draw("Ehist");
  h_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  h_jet2_eta->GetYaxis()->SetTitle("Entries");
  c_jets_eta->cd(3);
  h_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  h_jet3_eta->GetYaxis()->SetTitle("Entries");
  h_jet3_eta->Draw("Ehist");
  c_jets_eta->cd(4);
  h_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  h_jet4_eta->GetYaxis()->SetTitle("Entries");
  h_jet4_eta->Draw("Ehist");
  


  //MET
  TCanvas *c_MET = new TCanvas("MET","MET",1100,1000);
  c_MET->Divide(1,2);
  c_MET->cd(1);
  h_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  h_met_pt->GetYaxis()->SetTitle("Entries");
  h_met_pt->Draw("Ehist");
  


  //Mt
  c_MET->cd(2);
  h_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  h_mt->GetYaxis()->SetTitle("Entries");
  h_mt->Draw("Ehist");



  //MET-muon
  TCanvas *c_2D = new TCanvas("2D","2D",1000,1000); 
  c_2D->Divide(1,2);
  c_2D->cd(1);
  h_met_mn_pt->Draw("colz");
  c_2D->cd(2);
  h_met_en_pt->Draw("colz");



  //d_phi W and H bosons 
  TCanvas *c_w_h = new TCanvas("w_h","w_h",1000,1000);
  h_d_phi_w_h->SetStats(11111);
  h_d_phi_w_h->Draw("Ehist");



  //Higgs
  TCanvas *c_higgs = new TCanvas("higgs","higgs",1100,1000);
  c_higgs->Divide(2,2);
  //pt
  c_higgs->cd(1);
  h_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  h_h_pt->GetYaxis()->SetTitle("Entries");
  h_h_pt->Draw("Ehist");
  //phi
  c_higgs->cd(3);
  h_h_phi->GetXaxis()->SetTitle("Higgs phi");
  h_h_phi->GetYaxis()->SetTitle("Entries");
  h_h_phi->Draw("Ehist");
  //eta
  c_higgs->cd(2);
  h_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  h_h_eta->GetYaxis()->SetTitle("Entries");
  h_h_eta->Draw("Ehist");
  //mass
  c_higgs->cd(4);
  h_inv_m->GetXaxis()->SetTitle("Higgs mass");
  h_inv_m->GetYaxis()->SetTitle("Entries");
  h_inv_m->Draw("Ehist");



  //W boson
  TCanvas *c_W = new TCanvas("W","W",1100,1000);
  c_W->Divide(2,2);
  //pt
  c_W->cd(1);
  h_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  h_w_pt->GetYaxis()->SetTitle("Entries");
  h_w_pt->Draw("Ehist");
  //eta
  c_W->cd(2);
  h_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  h_w_eta->GetYaxis()->SetTitle("Entries");
  h_w_eta->Draw("Ehist");
  //phi
  c_W->cd(3);
  h_w_phi->GetXaxis()->SetTitle("W phi (rad)");
  h_w_phi->GetYaxis()->SetTitle("Entries");
  h_w_phi->Draw("Ehist");
  //mass
  c_W->cd(4);
  h_w_m->GetXaxis()->SetTitle("W mass (GeV)");
  h_w_m->GetYaxis()->SetTitle("Entries");
  h_w_m->Draw("Ehist");


  //delta R before cross-cleaning
  TCanvas *c_dR = new TCanvas("dR","dR",1100,1100);
  c_dR->Divide(1,2);
  //muon-jet
  c_dR->cd(1);
  h_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  h_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  h_dR_jet_muon->Draw("Ehist");
  //electron-jet
  c_dR->cd(2);
  h_dR_jet_electron->GetXaxis()->SetTitle("delta R between jets and electrons");
  h_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  h_dR_jet_electron->Draw("Ehist");



  //delta R after cross-cleaning
  TCanvas *c_dR_after = new TCanvas("dR_after","dR_after",1100,1100);
  c_dR_after->Divide(2,4);
  //muon-jet1
  c_dR_after->cd(1);
  h_dR_jet1_muon_after->GetXaxis()->SetTitle("delta R between jets and muons");
  h_dR_jet1_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet1_muon_after->Draw("Ehist");
  //electron-jet1
  c_dR_after->cd(2);
  h_dR_jet1_electron_after->GetXaxis()->SetTitle("delta R between jets and electrons");
  h_dR_jet1_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet1_electron_after->Draw("Ehist");
  //muon-jet2
  c_dR_after->cd(3);
  h_dR_jet2_muon_after->GetXaxis()->SetTitle("delta R between jets2 and muons");
  h_dR_jet2_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet2_muon_after->Draw("Ehist");
  //electron-jet2
  c_dR_after->cd(4);
  h_dR_jet2_electron_after->GetXaxis()->SetTitle("delta R between jets2 and electrons");
  h_dR_jet2_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet2_electron_after->Draw("Ehist");
  //muon-jet3
  c_dR_after->cd(5);
  h_dR_jet3_muon_after->GetXaxis()->SetTitle("delta R between jets3 and muons");
  h_dR_jet3_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet3_muon_after->Draw("Ehist");
  //electron-jet3
  c_dR_after->cd(6);
  h_dR_jet3_electron_after->GetXaxis()->SetTitle("delta R between jets3 and electrons");
  h_dR_jet3_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet3_electron_after->Draw("Ehist");
  //muon-jet4
  c_dR_after->cd(7);
  h_dR_jet4_muon_after->GetXaxis()->SetTitle("delta R between jets4 and muons");
  h_dR_jet4_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet4_muon_after->Draw("Ehist");
  //electron-jet2
  c_dR_after->cd(8);
  h_dR_jet4_electron_after->GetXaxis()->SetTitle("delta R between jets2 and electrons");
  h_dR_jet4_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet4_electron_after->Draw("Ehist");




}