import ROOT
import numpy as np

#ROOT.PyConfig.IgnoreCommandLineOptions = True

import os.path

from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

class HWW_VBF_DNN(Module):
    
    def __init__(self):
        #self.cmssw_base = os.getenv('CMSSW_BASE')
        #self.cmssw_arch = os.getenv('SCRAM_ARCH')

        #ROOT.gSystem.AddIncludePath("-I /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/include/")                                                                                                   
        #ROOT.gSystem.AddIncludePath("-I /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/")                                                                                                         
        #ROOT.gSystem.AddIncludePath("-I /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/lib/")
        #ROOT.gSystem.AddIncludePath("-I /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/MoMEMta-1.0.0/")


        
        ROOT.gSystem.Load("/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/lib/libmomemta.so.1.0.0")
        ROOT.gSystem.Load("/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/lib/libmomemta.so.1")
        ROOT.gSystem.Load("/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/lib/libmomemta.so")
        
        ROOT.gSystem.Load("/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/JHUGenMELA/MELA/data/slc7_amd64_gcc820/libmcfm_707.so")
        ROOT.gSystem.Load("libJHUGenMELAMELA.so")
        
        
        try:
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMoMEMta.C+g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMELA_VBF.C+g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMELA_VBF_VH.C+g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMELA_QCD_VH.C+g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/mlj.C+g')
        except RuntimeError:
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMoMEMta.C++g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMELA_VBF.C++g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMELA_VBF_VH.C++g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/RecoMELA_QCD_VH.C++g')
            ROOT.gROOT.LoadMacro('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/src/LatinoAnalysis/Gardener/python/variables/mlj.C++g')
        


        self.bVetoCut = 0.2217
        self.metpt = 'event.MET_pt'
        self.metphi = 'event.MET_phi'
        self.nlepton = 'event.nLepton'
        self.njets = 'event.nCleanJet'
        self.lep1pt = 'event.Lepton_pt[0]'
        self.lep2pt = 'event.Lepton_pt[1]'
        self.lep1eta = 'event.Lepton_eta[0]'
        self.lep2eta = 'event.Lepton_eta[1]'
        self.lep1phi = 'event.Lepton_phi[0]'
        self.lep2phi = 'event.Lepton_phi[1]'
        self.jet1pt = 'event.CleanJet_pt[0]'
        self.jet2pt = 'event.CleanJet_pt[1]'
        self.jet1eta = 'event.CleanJet_eta[0]'
        self.jet2eta = 'event.CleanJet_eta[1]'
        self.jet1phi = 'event.CleanJet_phi[0]'
        self.jet2phi = 'event.CleanJet_phi[1]'
    
    def beginJob(self):
        pass
    def endJob(self):
        pass
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        
        self.inputFile = inputFile

        self.out = wrappedOutputTree        
        self.out.branch('mjj','F')
        self.out.branch('Ctot','F')
        self.out.branch('detajj','F')
        self.out.branch('drll','F')
        self.out.branch('lep1pt','F')
        self.out.branch('lep2pt','F')
        self.out.branch('lep1phi','F')
        self.out.branch('lep2phi','F')
        self.out.branch('lep1eta','F')
        self.out.branch('lep2eta','F')
        self.out.branch('jet1pt','F')
        self.out.branch('jet2pt','F')
        self.out.branch('jet1phi','F')
        self.out.branch('jet2phi','F')
        self.out.branch('jet1eta','F')
        self.out.branch('jet2eta','F')
        self.out.branch('PuppiMET_pt','F')
        self.out.branch('PuppiMET_phi','F')
        self.out.branch('mth','F')
        self.out.branch('ptll','F')
        self.out.branch('mlj_00','F')
        self.out.branch('mlj_01','F')
        self.out.branch('mlj_10','F')
        self.out.branch('mlj_11','F')
        self.out.branch('mll','F')
        self.out.branch('btagDeepFlavB','F')
        self.out.branch('btagDeepFlavB_1','F')
        self.out.branch('btagDeepB','F')
        self.out.branch('D_VBF_QCD','F')
        self.out.branch('D_VBF_VH','F')
        self.out.branch('D_QCD_VH','F')
        self.out.branch('D_VBF_DY', 'F')


    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass
    
    def analyze(self, event):
        """process event, return True (go to next module) or False (fail, go to next event)"""
        
        CleanJet = Collection(event, 'CleanJet')
        Leptons = Collection(event, 'Lepton')
        njets = CleanJet._len
        nlepton = Leptons._len
        
        D_VBF_QCD = 0.0
        D_VBF_VH = 0.0
        D_QCD_VH = 0.0
        D_VBF_DY = 0.0

        jet1eta = -999
        jet2eta = -999

        jet1pt = -999
        jet2pt = -999
        
        jet1phi = -999
        jet2phi = -999

        lep1eta = -999
        lep2eta = -999

        lep1pt = -999
        lep2pt = -999
        
        lep1phi = -999
        lep2phi = -999

        if (nlepton>=2):
            
            lep1eta = Leptons[0].eta
            lep2eta = Leptons[1].eta

            lep1pt = Leptons[0].pt
            lep2pt = Leptons[1].pt

            lep1phi = Leptons[0].phi
            lep2phi = Leptons[1].phi

        
        if (nlepton>=2 and njets>=2):
          
            
            D_VBF_DY = ROOT.RecoMoMEMta(njets, nlepton, event.MET_pt, event.MET_phi, Leptons[0].pt, Leptons[1].pt, Leptons[0].phi, Leptons[1].phi, Leptons[0].eta, Leptons[1].eta, CleanJet[0].pt, CleanJet[1].pt, CleanJet[0].phi, CleanJet[1].phi, CleanJet[0].eta, CleanJet[1].eta, Leptons[0].pdgId, Leptons[1].pdgId)
            D_VBF_QCD = ROOT.RecoMELA_VBF(njets, nlepton, event.MET_pt, event.MET_phi, Leptons[0].pt, Leptons[1].pt, Leptons[0].phi, Leptons[1].phi, Leptons[0].eta, Leptons[1].eta, CleanJet[0].pt, CleanJet[1].pt, CleanJet[0].phi, CleanJet[1].phi, CleanJet[0].eta, CleanJet[1].eta, Leptons[0].pdgId, Leptons[1].pdgId)
            D_VBF_VH = ROOT.RecoMELA_VBF_VH(njets, nlepton, event.MET_pt, event.MET_phi, Leptons[0].pt, Leptons[1].pt, Leptons[0].phi, Leptons[1].phi, Leptons[0].eta, Leptons[1].eta, CleanJet[0].pt, CleanJet[1].pt, CleanJet[0].phi, CleanJet[1].phi, CleanJet[0].eta, CleanJet[1].eta, Leptons[0].pdgId, Leptons[1].pdgId)
            D_QCD_VH = ROOT.RecoMELA_QCD_VH(njets, nlepton, event.MET_pt, event.MET_phi, Leptons[0].pt, Leptons[1].pt, Leptons[0].phi, Leptons[1].phi, Leptons[0].eta, Leptons[1].eta, CleanJet[0].pt, CleanJet[1].pt, CleanJet[0].phi, CleanJet[1].phi, CleanJet[0].eta, CleanJet[1].eta, Leptons[0].pdgId, Leptons[1].pdgId)
            


            mlj_00 = ROOT.mlj(CleanJet[0].pt, CleanJet[0].phi, CleanJet[0].eta, Leptons[0].pt,  Leptons[0].phi, Leptons[0].eta)
            mlj_01 = ROOT.mlj(CleanJet[0].pt, CleanJet[0].phi, CleanJet[0].eta, Leptons[1].pt,  Leptons[1].phi, Leptons[1].eta)
            mlj_10 = ROOT.mlj(CleanJet[1].pt, CleanJet[1].phi, CleanJet[1].eta, Leptons[0].pt,  Leptons[0].phi, Leptons[0].eta)
            mlj_11 = ROOT.mlj(CleanJet[1].pt, CleanJet[1].phi, CleanJet[1].eta, Leptons[1].pt,  Leptons[1].phi, Leptons[1].eta)

            if event.detajj!=0:
                ctot = np.log((abs(2*Leptons[0].eta-CleanJet[0].eta-CleanJet[1].eta)+abs(2*Leptons[1].eta-CleanJet[0].eta-CleanJet[1].eta))/event.detajj)
            else:
                ctot = -9999.9
            
            jet1eta = CleanJet[0].eta
            jet2eta = CleanJet[1].eta

            jet1pt = CleanJet[0].pt
            jet2pt = CleanJet[1].pt

            jet1phi = CleanJet[0].phi
            jet2phi = CleanJet[1].phi

        else:
            D_VBF_QCD = -999.9
            D_VBF_VH = -999.9
            D_QCD_VH = -999.9
            D_VBF_DY = -999.9
            
            mlj_00 = -9999.9
            mlj_01 = -9999.9
            mlj_10 = -9999.9
            mlj_11 = -9999.9
            
            ctot = -9999.9

          
        if (njets==0):
          Jet_btagDeepFlavB_CleanJet_jetIdx_0_ = 0.0
          Jet_btagDeepFlavB_CleanJet_jetIdx_1_ = 0.0
        elif (njets == 1):
          jetIdx0 = CleanJet[0].jetIdx
          Jet_btagDeepFlavB_CleanJet_jetIdx_0_ = event.Jet_btagDeepFlavB[jetIdx0]
          Jet_btagDeepFlavB_CleanJet_jetIdx_1_ = 0.0
        else:
          jetIdx0 = CleanJet[0].jetIdx
          Jet_btagDeepFlavB_CleanJet_jetIdx_0_ = event.Jet_btagDeepFlavB[jetIdx0]
        
          jetIdx1 = CleanJet[1].jetIdx
          Jet_btagDeepFlavB_CleanJet_jetIdx_1_ = event.Jet_btagDeepFlavB[jetIdx1]

        if (njets==0):
          Jet_btagDeepB_CleanJet_jetIdx_0_ = 0.0
        elif (njets == 1):
          jetIdx0 = CleanJet[0].jetIdx
          Jet_btagDeepB_CleanJet_jetIdx_0_ = event.Jet_btagDeepB[jetIdx0]
        else:
          jetIdx0 = CleanJet[0].jetIdx
          Jet_btagDeepB_CleanJet_jetIdx_0_ = event.Jet_btagDeepB[jetIdx0]

                    
        self.out.fillBranch('mjj', event.mjj)
        self.out.fillBranch('Ctot', ctot)
        self.out.fillBranch('detajj', event.detajj)
        self.out.fillBranch('drll', event.drll)
        self.out.fillBranch('jet1eta', jet1eta)
        self.out.fillBranch('jet2eta', jet2eta)
        self.out.fillBranch('jet1pt', jet1pt)
        self.out.fillBranch('jet2pt', jet2pt)
        self.out.fillBranch('jet1phi', jet1phi)
        self.out.fillBranch('jet2phi', jet2phi)
        self.out.fillBranch('lep1eta', lep1eta)
        self.out.fillBranch('lep2eta', lep2eta)
        self.out.fillBranch('lep1pt', lep1pt)
        self.out.fillBranch('lep2pt', lep2pt)
        self.out.fillBranch('lep1phi', lep1phi)
        self.out.fillBranch('lep2phi', lep2phi)
        self.out.fillBranch('PuppiMET_pt', event.PuppiMET_pt)
        self.out.fillBranch('PuppiMET_phi', event.PuppiMET_phi)
        self.out.fillBranch('mth', event.mth)
        self.out.fillBranch('ptll', event.ptll)
        self.out.fillBranch('mlj_00', mlj_00)
        self.out.fillBranch('mlj_01', mlj_01)
        self.out.fillBranch('mlj_10', mlj_10)
        self.out.fillBranch('mlj_11', mlj_11)
        self.out.fillBranch('mll', event.mll)
        self.out.fillBranch('btagDeepFlavB', Jet_btagDeepFlavB_CleanJet_jetIdx_0_)
        self.out.fillBranch('btagDeepFlavB_1', Jet_btagDeepFlavB_CleanJet_jetIdx_1_)
        self.out.fillBranch('btagDeepB', Jet_btagDeepB_CleanJet_jetIdx_0_)
        self.out.fillBranch('D_VBF_QCD', D_VBF_QCD)
        self.out.fillBranch('D_VBF_VH', D_VBF_VH)
        self.out.fillBranch('D_QCD_VH', D_QCD_VH)
        self.out.fillBranch('D_VBF_DY', D_VBF_DY)

        return True
       
