MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/hadi/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for sprdmpF36" > sprdmpF36_mex.mki
echo "CC=$CC" >> sprdmpF36_mex.mki
echo "CFLAGS=$CFLAGS" >> sprdmpF36_mex.mki
echo "CLIBS=$CLIBS" >> sprdmpF36_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> sprdmpF36_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> sprdmpF36_mex.mki
echo "CXX=$CXX" >> sprdmpF36_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> sprdmpF36_mex.mki
echo "CXXLIBS=$CXXLIBS" >> sprdmpF36_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> sprdmpF36_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> sprdmpF36_mex.mki
echo "LDFLAGS=$LDFLAGS" >> sprdmpF36_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> sprdmpF36_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> sprdmpF36_mex.mki
echo "Arch=$Arch" >> sprdmpF36_mex.mki
echo "LD=$LD" >> sprdmpF36_mex.mki
echo OMPFLAGS= >> sprdmpF36_mex.mki
echo OMPLINKFLAGS= >> sprdmpF36_mex.mki
echo "EMC_COMPILER=gcc" >> sprdmpF36_mex.mki
echo "EMC_CONFIG=optim" >> sprdmpF36_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f sprdmpF36_mex.mk
