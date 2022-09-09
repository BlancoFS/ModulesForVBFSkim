# ModulesForVBFSkim
Modules needed to compute some matrix element discriminant 

# Some instructions for Matrix Element computation

We are using JHUGenMELA and MoMEMta, so both frameworks need to be installed in your enviroment. The installation of MoMEMta can be not trivial, so I have written some useful instruction in the folder **MoMEMta_install**.

Once the libraries are installed, the plugins from Madgraph (**qqH_hww_ME and DY_ME** folders) that MoMEMta uses is needed to be **compiled**. To do so, just do:

```
move qqH_hww_ME and DY_ME folders to the path /afs/..../workdir/CMSSW_*_*_*/

cd /afs/..../workdir/CMSSW_*_*_*/src
cmsenv
cd ..

cmake3 -S qqH_hww_ME -B qqH_hww_ME/build -DCMAKE_INSTALL_PREFIX=/afs/..../workdir/CMSSW_*_*_*/
cmake3 --build qqH_hww_ME/build --clean-first --parallel 4

cmake3 -S DY_ME -B DY_ME/build -DCMAKE_INSTALL_PREFIX=/afs/..../workdir/CMSSW_*_*_*/
cmake3 --build DY_ME/build --clean-first --parallel 4
```



