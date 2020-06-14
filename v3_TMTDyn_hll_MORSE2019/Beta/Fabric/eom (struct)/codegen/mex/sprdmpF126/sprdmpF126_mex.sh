MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/hadi/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for sprdmpF126" > sprdmpF126_mex.mki
echo "CC=$CC" >> sprdmpF126_mex.mki
echo "CFLAGS=$CFLAGS" >> sprdmpF126_mex.mki
echo "CLIBS=$CLIBS" >> sprdmpF126_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> sprdmpF126_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> sprdmpF126_mex.mki
echo "CXX=$CXX" >> sprdmpF126_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> sprdmpF126_mex.mki
echo "CXXLIBS=$CXXLIBS" >> sprdmpF126_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> sprdmpF126_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> sprdmpF126_mex.mki
echo "LDFLAGS=$LDFLAGS" >> sprdmpF126_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> sprdmpF126_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> sprdmpF126_mex.mki
echo "Arch=$Arch" >> sprdmpF126_mex.mki
echo "LD=$LD" >> sprdmpF126_mex.mki
echo OMPFLAGS= >> sprdmpF126_mex.mki
echo OMPLINKFLAGS= >> sprdmpF126_mex.mki
echo "EMC_COMPILER=gcc" >> sprdmpF126_mex.mki
echo "EMC_CONFIG=optim" >> sprdmpF126_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f sprdmpF126_mex.mk
