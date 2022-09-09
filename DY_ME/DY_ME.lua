-- Load the library containing the matrix element
load_modules('/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/DY_ME/build/libme_DY_ME.so')

Z = declare_input("Z")
jet1 = declare_input("jet1")
jet2 = declare_input("jet2")


parameters = {
    energy = 13000.,
}

inputs = {
    Z.reco_p4,
    jet1.reco_p4,
    jet2.reco_p4,
    }

-- Build the partonic initial state
BuildInitialState.boost = {
    do_transverse_boost = true,
    particles = inputs,
}

-- Call matrix element on fully defined partonic event
MatrixElement.DY = {
    pdf = "CT10nlo",
    pdf_scale = 91.,
    matrix_element = "DY_ME_sm_P1_Sigma_sm_gg_zuux",
    matrix_element_parameters = {
        card = "/afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/DY_ME/Cards/param_card.dat"
    },
    initialState = "boost::partons",
    particles = {
        inputs = inputs,
        ids = {
            {
                pdg_id = 23,
                me_index = 1,
            },
            {
                pdg_id = 1,
                me_index = 2,
            },
            {
                pdg_id = -1,
                me_index = 3,
            },
        }
    },
}

-- Define quantity to be returned to MoMEMta
integrand("DY::output")











