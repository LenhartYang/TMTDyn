MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/hadi/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for sprdmpF17" > sprdmpF17_mex.mki
echo "CC=$CC" >> sprdmpF17_mex.mki
echo "CFLAGS=$CFLAGS" >> sprdmpF17_mex.mki
echo "CLIBS=$CLIBS" >> sprdmpF17_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> sprdmpF17_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> sprdmpF17_mex.mki
echo "CXX=$CXX" >> sprdmpF17_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> sprdmpF17_mex.mki
echo "CXXLIBS=$CXXLIBS" >> sprdmpF17_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> sprdmpF17_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> sprdmpF17_mex.mki
echo "LDFLAGS=$LDFLAGS" >> sprdmpF17_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> sprdmpF17_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> sprdmpF17_mex.mki
echo "Arch=$Arch" >> sprdmpF17_mex.mki
echo "LD=$LD" >> sprdmpF17_mex.mki
echo OMPFLAGS= >> sprdmpF17_mex.mki
echo OMPLINKFLAGS= >> sprdmpF17_mex.mki
echo "EMC_COMPILER=gcc" >> sprdmpF17_mex.mki
echo "EMC_CONFIG=optim" >> sprdmpF17_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f sprdmpF17_mex.mk
