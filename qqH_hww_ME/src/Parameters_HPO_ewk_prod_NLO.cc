// 
// *  This file was automatically generated by MoMEMta-MaGMEE,
// *  A MadGraph Matrix Element Exporter plugin for MoMEMta.
// *
// *  It is subject to MoMEMta-MaGMEE's license and copyright:
// *
// *  Copyright (C) 2016  Universite catholique de Louvain (UCL), Belgium
// *
// *  This program is free software: you can redistribute it and/or modify
// *  it under the terms of the GNU General Public License as published by
// *  the Free Software Foundation, either version 3 of the License, or
// *  (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// *  GNU General Public License for more details.
// *
// *  You should have received a copy of the GNU General Public License
// *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
// 

#include <Parameters_HPO_ewk_prod_NLO.h> 

#include <momemta/SLHAReader.h> 

namespace qqH_hww_ME_HPO_ewk_prod_NLO 
{

using namespace std; 

// Constructor
Parameters_HPO_ewk_prod_NLO::Parameters_HPO_ewk_prod_NLO(const SLHA::Reader&
  card)
{
// Prepare a vector for indices (for reading indexed entries)
vector<int> indices(2, 0); 

m_card_parameters["mdl_WH"] = card.get_block_entry("decay", 25, 4.070000e-03); 
m_card_parameters["mdl_WW"] = card.get_block_entry("decay", 24, 2.085000e+00); 
m_card_parameters["mdl_WZ"] = card.get_block_entry("decay", 23, 2.495200e+00); 
m_card_parameters["mdl_WT"] = card.get_block_entry("decay", 6, 1.508336e+00); 
m_card_parameters["mdl_gWuL"] = card.get_block_entry("wzpole", 19,
    1.000000e+00);
m_card_parameters["mdl_gZdR"] = card.get_block_entry("wzpole", 16,
    7.735000e-02);
m_card_parameters["mdl_gZuR"] = card.get_block_entry("wzpole", 15,
    -1.547000e-01);
m_card_parameters["mdl_gZdL"] = card.get_block_entry("wzpole", 12,
    -4.243000e-01);
m_card_parameters["mdl_gZuL"] = card.get_block_entry("wzpole", 11,
    3.467000e-01);
m_card_parameters["mdl_gWtau"] = card.get_block_entry("wzpole", 10,
    1.025000e+00);
m_card_parameters["mdl_gWmu"] = card.get_block_entry("wzpole", 9,
    9.910000e-01);
m_card_parameters["mdl_gWe"] = card.get_block_entry("wzpole", 8, 9.940000e-01); 
m_card_parameters["mdl_gZv"] = card.get_block_entry("wzpole", 7, 5.000000e-01); 
m_card_parameters["mdl_gZtauR"] = card.get_block_entry("wzpole", 6,
    2.327000e-01);
m_card_parameters["mdl_gZmuR"] = card.get_block_entry("wzpole", 5,
    2.320000e-01);
m_card_parameters["mdl_gZeR"] = card.get_block_entry("wzpole", 4,
    2.315000e-01);
m_card_parameters["mdl_gZtauL"] = card.get_block_entry("wzpole", 3,
    -2.693000e-01);
m_card_parameters["mdl_gZmuL"] = card.get_block_entry("wzpole", 2,
    -2.690000e-01);
m_card_parameters["mdl_gZeL"] = card.get_block_entry("wzpole", 1,
    -2.696000e-01);
m_card_parameters["mdl_cabi"] = card.get_block_entry("sminputs", 4,
    2.274000e-01);
m_card_parameters["aS"] = card.get_block_entry("sminputs", 3, 1.190000e-01); 
m_card_parameters["mdl_vF"] = card.get_block_entry("sminputs", 2,
    2.462200e+02);
m_card_parameters["aEWM1"] = card.get_block_entry("sminputs", 1, 1.289410e+02); 
m_card_parameters["mdl_MH"] = card.get_block_entry("mass", 25, 1.250000e+02); 
m_card_parameters["mdl_MW"] = card.get_block_entry("mass", 24, 8.038500e+01); 
m_card_parameters["mdl_MZ"] = card.get_block_entry("mass", 23, 9.118760e+01); 
m_card_parameters["mdl_MTA"] = card.get_block_entry("mass", 15, 1.777000e+00); 
m_card_parameters["mdl_MT"] = card.get_block_entry("mass", 6, 1.720000e+02); 
m_card_parameters["mdl_MB"] = card.get_block_entry("mass", 5, 4.700000e+00); 
m_card_parameters["MU_R"] = card.get_block_entry("loop", 1, 9.118800e+01); 
m_card_parameters["mdl_eZASM"] = card.get_block_entry("hposm", 2,
    6.900000e-03);
m_card_parameters["mdl_eAASM"] = card.get_block_entry("hposm", 1,
    3.800000e-03);
m_card_parameters["mdl_phiWuL"] = card.get_block_entry("hpoquark", 56,
    0.000000e+00);
m_card_parameters["mdl_eWuL"] = card.get_block_entry("hpoquark", 55,
    0.000000e+00);
m_card_parameters["mdl_eZdR"] = card.get_block_entry("hpoquark", 54,
    0.000000e+00);
m_card_parameters["mdl_eZdL"] = card.get_block_entry("hpoquark", 53,
    0.000000e+00);
m_card_parameters["mdl_eZuR"] = card.get_block_entry("hpoquark", 52,
    0.000000e+00);
m_card_parameters["mdl_eZuL"] = card.get_block_entry("hpoquark", 51,
    0.000000e+00);
m_card_parameters["mdl_phiWtau"] = card.get_block_entry("hpo4f", 23,
    0.000000e+00);
m_card_parameters["mdl_phiWmu"] = card.get_block_entry("hpo4f", 22,
    0.000000e+00);
m_card_parameters["mdl_phiWe"] = card.get_block_entry("hpo4f", 21,
    0.000000e+00);
m_card_parameters["mdl_eWtau"] = card.get_block_entry("hpo4f", 20,
    0.000000e+00);
m_card_parameters["mdl_eWmu"] = card.get_block_entry("hpo4f", 19,
    0.000000e+00);
m_card_parameters["mdl_eWe"] = card.get_block_entry("hpo4f", 18, 0.000000e+00); 
m_card_parameters["mdl_eZv"] = card.get_block_entry("hpo4f", 17, 0.000000e+00); 
m_card_parameters["mdl_eZtauR"] = card.get_block_entry("hpo4f", 16,
    0.000000e+00);
m_card_parameters["mdl_eZmuR"] = card.get_block_entry("hpo4f", 15,
    0.000000e+00);
m_card_parameters["mdl_eZeR"] = card.get_block_entry("hpo4f", 14,
    0.000000e+00);
m_card_parameters["mdl_eZtauL"] = card.get_block_entry("hpo4f", 13,
    0.000000e+00);
m_card_parameters["mdl_eZmuL"] = card.get_block_entry("hpo4f", 12,
    0.000000e+00);
m_card_parameters["mdl_eZeL"] = card.get_block_entry("hpo4f", 11,
    0.000000e+00);
m_card_parameters["mdl_eWWCP"] = card.get_block_entry("hpo4f", 10,
    0.000000e+00);
m_card_parameters["mdl_eZZCP"] = card.get_block_entry("hpo4f", 9,
    0.000000e+00);
m_card_parameters["mdl_lZACP"] = card.get_block_entry("hpo4f", 8,
    0.000000e+00);
m_card_parameters["mdl_lAACP"] = card.get_block_entry("hpo4f", 7,
    0.000000e+00);
m_card_parameters["mdl_eWW"] = card.get_block_entry("hpo4f", 6, 0.000000e+00); 
m_card_parameters["mdl_eZZ"] = card.get_block_entry("hpo4f", 5, 0.000000e+00); 
m_card_parameters["mdl_kZA"] = card.get_block_entry("hpo4f", 4, 1.000000e+00); 
m_card_parameters["mdl_kAA"] = card.get_block_entry("hpo4f", 3, 1.000000e+00); 
m_card_parameters["mdl_kWW"] = card.get_block_entry("hpo4f", 2, 1.000000e+00); 
m_card_parameters["mdl_kZZ"] = card.get_block_entry("hpo4f", 1, 1.000000e+00); 

this->cacheParameters(); 
this->cacheCouplings(); 
}

void Parameters_HPO_ewk_prod_NLO::cacheParameters()
{
// Define "zero"
zero = 0; 
ZERO = 0; 
mdl_WH = m_card_parameters["mdl_WH"]; 
mdl_WW = m_card_parameters["mdl_WW"]; 
mdl_WZ = m_card_parameters["mdl_WZ"]; 
mdl_WT = m_card_parameters["mdl_WT"]; 
mdl_gWuL = m_card_parameters["mdl_gWuL"]; 
mdl_gZdR = m_card_parameters["mdl_gZdR"]; 
mdl_gZuR = m_card_parameters["mdl_gZuR"]; 
mdl_gZdL = m_card_parameters["mdl_gZdL"]; 
mdl_gZuL = m_card_parameters["mdl_gZuL"]; 
mdl_gWtau = m_card_parameters["mdl_gWtau"]; 
mdl_gWmu = m_card_parameters["mdl_gWmu"]; 
mdl_gWe = m_card_parameters["mdl_gWe"]; 
mdl_gZv = m_card_parameters["mdl_gZv"]; 
mdl_gZtauR = m_card_parameters["mdl_gZtauR"]; 
mdl_gZmuR = m_card_parameters["mdl_gZmuR"]; 
mdl_gZeR = m_card_parameters["mdl_gZeR"]; 
mdl_gZtauL = m_card_parameters["mdl_gZtauL"]; 
mdl_gZmuL = m_card_parameters["mdl_gZmuL"]; 
mdl_gZeL = m_card_parameters["mdl_gZeL"]; 
mdl_cabi = m_card_parameters["mdl_cabi"]; 
aS = m_card_parameters["aS"]; 
mdl_vF = m_card_parameters["mdl_vF"]; 
aEWM1 = m_card_parameters["aEWM1"]; 
mdl_MH = m_card_parameters["mdl_MH"]; 
mdl_MW = m_card_parameters["mdl_MW"]; 
mdl_MZ = m_card_parameters["mdl_MZ"]; 
mdl_MTA = m_card_parameters["mdl_MTA"]; 
mdl_MT = m_card_parameters["mdl_MT"]; 
mdl_MB = m_card_parameters["mdl_MB"]; 
MU_R = m_card_parameters["MU_R"]; 
mdl_eZASM = m_card_parameters["mdl_eZASM"]; 
mdl_eAASM = m_card_parameters["mdl_eAASM"]; 
mdl_phiWuL = m_card_parameters["mdl_phiWuL"]; 
mdl_eWuL = m_card_parameters["mdl_eWuL"]; 
mdl_eZdR = m_card_parameters["mdl_eZdR"]; 
mdl_eZdL = m_card_parameters["mdl_eZdL"]; 
mdl_eZuR = m_card_parameters["mdl_eZuR"]; 
mdl_eZuL = m_card_parameters["mdl_eZuL"]; 
mdl_phiWtau = m_card_parameters["mdl_phiWtau"]; 
mdl_phiWmu = m_card_parameters["mdl_phiWmu"]; 
mdl_phiWe = m_card_parameters["mdl_phiWe"]; 
mdl_eWtau = m_card_parameters["mdl_eWtau"]; 
mdl_eWmu = m_card_parameters["mdl_eWmu"]; 
mdl_eWe = m_card_parameters["mdl_eWe"]; 
mdl_eZv = m_card_parameters["mdl_eZv"]; 
mdl_eZtauR = m_card_parameters["mdl_eZtauR"]; 
mdl_eZmuR = m_card_parameters["mdl_eZmuR"]; 
mdl_eZeR = m_card_parameters["mdl_eZeR"]; 
mdl_eZtauL = m_card_parameters["mdl_eZtauL"]; 
mdl_eZmuL = m_card_parameters["mdl_eZmuL"]; 
mdl_eZeL = m_card_parameters["mdl_eZeL"]; 
mdl_eWWCP = m_card_parameters["mdl_eWWCP"]; 
mdl_eZZCP = m_card_parameters["mdl_eZZCP"]; 
mdl_lZACP = m_card_parameters["mdl_lZACP"]; 
mdl_lAACP = m_card_parameters["mdl_lAACP"]; 
mdl_eWW = m_card_parameters["mdl_eWW"]; 
mdl_eZZ = m_card_parameters["mdl_eZZ"]; 
mdl_kZA = m_card_parameters["mdl_kZA"]; 
mdl_kAA = m_card_parameters["mdl_kAA"]; 
mdl_kWW = m_card_parameters["mdl_kWW"]; 
mdl_kZZ = m_card_parameters["mdl_kZZ"]; mdl_noise = 9.96300008259327e-11; 
mdl_complexi = std::complex<double> (0., 1.); 
mdl_sqrt__2 = sqrt(2.); 
mdl_sin__cabi = sin(mdl_cabi); 
mdl_cos__phiWe = cos(mdl_phiWe); 
mdl_sin__phiWe = sin(mdl_phiWe); 
mdl_cos__phiWmu = cos(mdl_phiWmu); 
mdl_sin__phiWmu = sin(mdl_phiWmu); 
mdl_cos__phiWtau = cos(mdl_phiWtau); 
mdl_sin__phiWtau = sin(mdl_phiWtau); 
mdl_cos__cabi = cos(mdl_cabi); 
mdl_cos__phiWuL = cos(mdl_phiWuL); 
mdl_sin__phiWuL = sin(mdl_phiWuL); 
mdl_MW__exp__2 = ((mdl_MW) * (mdl_MW)); 
mdl_MZ__exp__2 = ((mdl_MZ) * (mdl_MZ)); 
mdl_gWuL__exp__2 = ((mdl_gWuL) * (mdl_gWuL)); 
mdl_vF__exp__2 = ((mdl_vF) * (mdl_vF)); 
mdl_MB__exp__2 = ((mdl_MB) * (mdl_MB)); 
mdl_MT__exp__2 = ((mdl_MT) * (mdl_MT)); 
mdl_gZuL__exp__2 = ((mdl_gZuL) * (mdl_gZuL)); 
mdl_gZuR__exp__2 = ((mdl_gZuR) * (mdl_gZuR)); 
mdl_gZdL__exp__2 = ((mdl_gZdL) * (mdl_gZdL)); 
mdl_gZdR__exp__2 = ((mdl_gZdR) * (mdl_gZdR)); 
mdl_aEW = 1./aEWM1; 
mdl_sqrt__aEW = sqrt(mdl_aEW); 
mdl_ee = 2. * mdl_sqrt__aEW * sqrt(M_PI); 
mdl_ee__exp__2 = ((mdl_ee) * (mdl_ee)); 
}

void Parameters_HPO_ewk_prod_NLO::cacheCouplings()
{
GC_10 = (2. * mdl_eWWCP * mdl_complexi)/mdl_vF; 
GC_11 = (2. * mdl_eZdL * mdl_complexi)/mdl_vF; 
GC_118 = -((mdl_complexi * mdl_gWuL * mdl_MW * mdl_sqrt__2 *
    mdl_sin__cabi)/mdl_vF);
GC_119 = (mdl_complexi * mdl_gWuL * mdl_MW * mdl_sqrt__2 *
    mdl_sin__cabi)/mdl_vF;
GC_12 = (2. * mdl_eZdR * mdl_complexi)/mdl_vF; 
GC_129 = (2. * mdl_eWuL * mdl_complexi * mdl_cos__cabi *
    mdl_cos__phiWuL)/mdl_vF - (2. * mdl_eWuL * mdl_cos__cabi *
    mdl_sin__phiWuL)/mdl_vF;
GC_130 = (2. * mdl_eWuL * mdl_complexi * mdl_cos__cabi *
    mdl_cos__phiWuL)/mdl_vF + (2. * mdl_eWuL * mdl_cos__cabi *
    mdl_sin__phiWuL)/mdl_vF;
GC_131 = (-2. * mdl_eWuL * mdl_complexi * mdl_cos__phiWuL *
    mdl_sin__cabi)/mdl_vF - (2. * mdl_eWuL * mdl_sin__cabi *
    mdl_sin__phiWuL)/mdl_vF;
GC_132 = (2. * mdl_eWuL * mdl_complexi * mdl_cos__phiWuL *
    mdl_sin__cabi)/mdl_vF - (2. * mdl_eWuL * mdl_sin__cabi *
    mdl_sin__phiWuL)/mdl_vF;
GC_133 = (-2. * mdl_eWuL * mdl_complexi * mdl_cos__phiWuL *
    mdl_sin__cabi)/mdl_vF + (2. * mdl_eWuL * mdl_sin__cabi *
    mdl_sin__phiWuL)/mdl_vF;
GC_134 = (2. * mdl_eWuL * mdl_complexi * mdl_cos__phiWuL *
    mdl_sin__cabi)/mdl_vF + (2. * mdl_eWuL * mdl_sin__cabi *
    mdl_sin__phiWuL)/mdl_vF;
GC_19 = (2. * mdl_eZuL * mdl_complexi)/mdl_vF; 
GC_20 = (2. * mdl_eZuR * mdl_complexi)/mdl_vF; 
GC_22 = (-2. * mdl_eZZ * mdl_complexi)/mdl_vF; 
GC_23 = -((mdl_eZZCP * mdl_complexi)/mdl_vF); 
GC_24 = (-2. * mdl_eAASM * mdl_complexi * mdl_kAA)/mdl_vF; 
GC_25 = (-2. * mdl_eZASM * mdl_complexi * mdl_kZA)/mdl_vF; 
GC_26 = -((mdl_eAASM * mdl_complexi * mdl_lAACP)/mdl_vF); 
GC_27 = (-2. * mdl_eZASM * mdl_complexi * mdl_lZACP)/mdl_vF; 
GC_31 = (2. * mdl_complexi * mdl_gZdL * mdl_MZ)/mdl_vF; 
GC_32 = (2. * mdl_complexi * mdl_gZdR * mdl_MZ)/mdl_vF; 
GC_39 = (2. * mdl_complexi * mdl_gZuL * mdl_MZ)/mdl_vF; 
GC_40 = (2. * mdl_complexi * mdl_gZuR * mdl_MZ)/mdl_vF; 
GC_42 = (mdl_complexi * mdl_gWuL * mdl_MW * mdl_cos__cabi *
    mdl_sqrt__2)/mdl_vF;
GC_7 = (2. * mdl_complexi * mdl_kWW * mdl_MW__exp__2)/mdl_vF + (2. *
    mdl_complexi * mdl_MW__exp__2 * mdl_noise)/mdl_vF;
GC_8 = (2. * mdl_complexi * mdl_kZZ * mdl_MZ__exp__2)/mdl_vF + (2. *
    mdl_complexi * mdl_MZ__exp__2 * mdl_noise)/mdl_vF;
GC_9 = (-2. * mdl_eWW * mdl_complexi)/mdl_vF; 
GC_1 = -(mdl_ee * mdl_complexi)/3.; 
GC_2 = (2. * mdl_ee * mdl_complexi)/3.; 
}

void Parameters_HPO_ewk_prod_NLO::updateParameters()
{
mdl_sqrt__aS = sqrt(aS); 
G = 2. * mdl_sqrt__aS * sqrt(M_PI); 
mdl_G__exp__2 = ((G) * (G)); 
mdl_G__exp__3 = ((G) * (G) * (G)); 
mdl_G__exp__4 = ((G) * (G) * (G) * (G)); 
}

void Parameters_HPO_ewk_prod_NLO::updateCouplings()
{

}

}

