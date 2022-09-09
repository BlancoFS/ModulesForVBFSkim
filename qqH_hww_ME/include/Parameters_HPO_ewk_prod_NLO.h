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

#pragma once

#include <complex> 
#include <memory> 

#include <momemta/MEParameters.h> 

namespace SLHA 
{
class Reader;}

  namespace qqH_hww_ME_HPO_ewk_prod_NLO 
  {

  class Parameters_HPO_ewk_prod_NLO: public momemta::MEParameters
  {

    public:

      Parameters_HPO_ewk_prod_NLO(const SLHA::Reader& card); 

      // *
      // * Cache parameters. This is implementation dependent
      // 
      virtual void cacheParameters(); 
      virtual void cacheCouplings(); 

      virtual void updateParameters(); 
      virtual void updateCouplings(); 

      // Define "zero"
      double zero, ZERO; 
      // Model parameters independent of aS
      double mdl_WH, mdl_WW, mdl_WZ, mdl_WT, mdl_gWuL, mdl_gZdR, mdl_gZuR,
          mdl_gZdL, mdl_gZuL, mdl_gWtau, mdl_gWmu, mdl_gWe, mdl_gZv,
          mdl_gZtauR, mdl_gZmuR, mdl_gZeR, mdl_gZtauL, mdl_gZmuL, mdl_gZeL,
          mdl_cabi, aS, mdl_vF, aEWM1, mdl_MH, mdl_MW, mdl_MZ, mdl_MTA, mdl_MT,
          mdl_MB, MU_R, mdl_eZASM, mdl_eAASM, mdl_phiWuL, mdl_eWuL, mdl_eZdR,
          mdl_eZdL, mdl_eZuR, mdl_eZuL, mdl_phiWtau, mdl_phiWmu, mdl_phiWe,
          mdl_eWtau, mdl_eWmu, mdl_eWe, mdl_eZv, mdl_eZtauR, mdl_eZmuR,
          mdl_eZeR, mdl_eZtauL, mdl_eZmuL, mdl_eZeL, mdl_eWWCP, mdl_eZZCP,
          mdl_lZACP, mdl_lAACP, mdl_eWW, mdl_eZZ, mdl_kZA, mdl_kAA, mdl_kWW,
          mdl_kZZ, mdl_noise, mdl_sqrt__2, mdl_sin__cabi, mdl_cos__phiWe,
          mdl_sin__phiWe, mdl_cos__phiWmu, mdl_sin__phiWmu, mdl_cos__phiWtau,
          mdl_sin__phiWtau, mdl_cos__cabi, mdl_cos__phiWuL, mdl_sin__phiWuL,
          mdl_MW__exp__2, mdl_MZ__exp__2, mdl_gWuL__exp__2, mdl_vF__exp__2,
          mdl_MB__exp__2, mdl_MT__exp__2, mdl_gZuL__exp__2, mdl_gZuR__exp__2,
          mdl_gZdL__exp__2, mdl_gZdR__exp__2, mdl_aEW, mdl_sqrt__aEW, mdl_ee,
          mdl_ee__exp__2;
      std::complex<double> mdl_complexi; 
      // Model parameters dependent on aS
      double mdl_sqrt__aS, G, mdl_G__exp__2, mdl_G__exp__3, mdl_G__exp__4; 
      // Model couplings independent of aS
      std::complex<double> GC_10, GC_11, GC_118, GC_119, GC_12, GC_129, GC_130,
          GC_131, GC_132, GC_133, GC_134, GC_19, GC_20, GC_22, GC_23, GC_24,
          GC_25, GC_26, GC_27, GC_31, GC_32, GC_39, GC_40, GC_42, GC_7, GC_8,
          GC_9, GC_1, GC_2;
      // Model couplings dependent on aS

  }; 

  }

