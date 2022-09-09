# Instructions for MoMEMta installation

Instructions to install the MoMEMta framework to perform the matrix element method with madgraph5 MEs.

Software needed:

```
cmake (>=3.2)
LHAPDF (>=6)
BOOST (>= 1.54)
ROOT (>=5.34.09)
```

Some libraries needed to be installed locally in your CMSSW enviroment. This is what it's needed:

## Cmake

Check that the default version of cmake is (>=3.2). Usually this is not the case so please do:

```
alias cmake=cmake3
```


## Install LHAPDF

```
wget https://lhapdf.hepforge.org/downloads/?f=LHAPDF-6.2.0.tar.gz -O LHAPDF-6.2.0.tar.gz
tar -xf LHAPDF-6.2.0.tar.gz
cd LHAPDF-6.2.0/
./configure --prefix=/afs/cern.ch/.../workdir/CMSSW_*_*_*/
make
make install
```


## install BOOST

```
wget -O boost_1_56_0.tar.gz http://sourceforge.net/projects/boost/files/boost/1.56.0/boost_1_56_0.tar.gz/download
tar xzvf boost_1_56_0.tar.gz
cd boost_1_56_0/
./bootstrap.sh --prefix=/afs/cern.ch/.../workdir/CMSSW_*_*_*/
./b2 
./b2 install
```


# MoMEMta

We can start the installation of MoMEMta.

```
cd CMSSW_*_*_*/src
cmsenv

git clone https://github.com/MoMEMta/MoMEMta.git

cd MoMEMta
mkdir build
```

Now, there is an incompatibility that came out during the installation with the c++ flags as they must be changed to c++17 instead of c++11. Open the **CMakeLists.txt** file and add this command in the **line 64**:

```
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
```

Select a gcc compiler compatible with your CMSSW arquitecture by:

```
source /cvmfs/cms.cern.ch/slc7_amd64_gccXXX/external/gcc/8.2.0/etc/profile.d/init.sh

In my case: source /cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/gcc/8.2.0/etc/profile.d/init.sh
```

**Additional warning**

It's possible that in the installation cmake find other LHAPDF and BOOST libraries than the ones installed locally. It must choose the ones installed locally, if not it will not work later because it miss some depences.

Be awere of this and, if it's your case, open again the **CMakeLists.txt** file and add:

```
SET(LHAPDF_ROOT /afs/cern.ch/.../workdir/CMSSW_*_*_*/)
```

Finally, install MoMEMta:

```
cd build
cmake -DCMAKE_CXX_VERSION=c++17 -DBOOST_ROOT=/afs/cern.ch/.../workdir/CMSSW_*_*_*/ -DTESTS=OFF -DEXAMPLES=OFF -DPYTHON_BINDINGS=ON -DPROFILING=ON -B ./ -DCMAKE_INSTALL_PREFIX=/afs/cern.ch/.../workdir/CMSSW_*_*_*/ -DLHAPDF_ROOT=/afs/cern.ch/.../workdir/CMSSW_*_*_*/ ..
make 
make install
```


Finally, to make the MoMEMta libraries accesible:


```
cd /afs/cern.ch/.../workdir/CMSSW_*_*_*/
cp -r include/momemta ./src/
scram b -j 8
```

Once MoMEMta is installed correctly, you should see this message during the compilation:

```
Finding a value for MOMEMTA_BASE:

	Checks [OK] for /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10

Finding a value for LIBDIR:

	Checks [OK] for /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/lib

Finding a value for INCLUDE:

	Checks [OK] for /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/include


* Library check [OK] for libmomemta     


-------------------------------

Runtime path settings for ROOT_INCLUDE_PATH:

	Checks [OK] for /afs/cern.ch/work/s/sblancof/public/CMSSW_10_6_10/include


Setting up momemta version 0.2.0
```





