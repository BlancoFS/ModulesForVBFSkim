//==========================================================================
// This file has been automatically generated for C++ Standalone
// MadGraph5_aMC@NLO v. 2.5.5, 2017-05-26
// By the MadGraph5_aMC@NLO Development Team
// Visit launchpad.net/madgraph5 and amcatnlo.web.cern.ch
//==========================================================================

#ifndef HelAmps_HPO_ewk_prod_NLO_H
#define HelAmps_HPO_ewk_prod_NLO_H

#include <cmath> 
#include <complex> 

using namespace std; 

namespace qqH_hww_ME_HPO_ewk_prod_NLO 
{
double Sgn(double e, double f); 

void ixxxxx(double p[4], double fmass, int nhel, int nsf, std::complex<double>
    fi[6]);

void oxxxxx(double p[4], double fmass, int nhel, int nsf, std::complex<double>
    fo[6]);

void sxxxxx(double p[4], int nss, std::complex<double> sc[3]); 

void txxxxx(double p[4], double tmass, int nhel, int nst, std::complex<double>
    fi[18]);

void vxxxxx(double p[4], double vmass, int nhel, int nsv, std::complex<double>
    v[6]);

void VVS2_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP, std::complex<double>
    & vertex);
void VVS2_4_5_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP1, std::complex<double>
    COUP2, std::complex<double> COUP3, std::complex<double> & vertex);

void FFV2_3(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> COUP, double M3, double W3, std::complex<double> V3[]);
void FFV2_3_3(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> COUP1, std::complex<double> COUP2, double M3, double
    W3, std::complex<double> V3[]);

void FFV1P0_3(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> COUP, double M3, double W3, std::complex<double> V3[]);

void VVS3_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP, std::complex<double>
    & vertex);
void VVS3_4_5_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP1, std::complex<double>
    COUP2, std::complex<double> COUP3, std::complex<double> & vertex);
void VVS3_5_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP1, std::complex<double>
    COUP2, std::complex<double> & vertex);

void FFVS2_3(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> S4[], std::complex<double> COUP, double M3, double W3,
    std::complex<double> V3[]);

void FFV3_3(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> COUP, double M3, double W3, std::complex<double> V3[]);

void FFV3_0(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> V3[], std::complex<double> COUP, std::complex<double>
    & vertex);

void VVS4_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP, std::complex<double>
    & vertex);

void FFVS2_0(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> V3[], std::complex<double> S4[], std::complex<double>
    COUP, std::complex<double> & vertex);

void FFVS1_3(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> S4[], std::complex<double> COUP, double M3, double W3,
    std::complex<double> V3[]);
void FFVS1_2_3(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> S4[], std::complex<double> COUP1, std::complex<double>
    COUP2, double M3, double W3, std::complex<double> V3[]);

void VVS5_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP, std::complex<double>
    & vertex);

void FFVS1_0(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> V3[], std::complex<double> S4[], std::complex<double>
    COUP, std::complex<double> & vertex);
void FFVS1_2_0(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> V3[], std::complex<double> S4[], std::complex<double>
    COUP1, std::complex<double> COUP2, std::complex<double> & vertex);

void VVS1_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP, std::complex<double>
    & vertex);
void VVS1_5_0(std::complex<double> V1[], std::complex<double> V2[],
    std::complex<double> S3[], std::complex<double> COUP1, std::complex<double>
    COUP2, std::complex<double> & vertex);

void FFV2_0(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> V3[], std::complex<double> COUP, std::complex<double>
    & vertex);
void FFV2_3_0(std::complex<double> F1[], std::complex<double> F2[],
    std::complex<double> V3[], std::complex<double> COUP1, std::complex<double>
    COUP2, std::complex<double> & vertex);

}  // end namespace qqH_hww_ME_HPO_ewk_prod_NLO

#endif  // HelAmps_HPO_ewk_prod_NLO_H
