/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sprdmpF129_info.c
 *
 * Code generation for function '_coder_sprdmpF129_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF129.h"
#include "_coder_sprdmpF129_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("sprdmpF129"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (8.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF129.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737612.35043981485));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[35] = {
    "789ced5d4b6ce3d615e5a433c10c8ab402dae6d3b4e94c5a0c5224b0644996eda001f4b7645b96646924d9f9d8944449b4f99148ea631549bcec228be9a6ab2e"
    "6699044d917693411314ecaecb1468ba683783164137ddb6eb4a22e9f1e3e88d3426458bd4bdc0e099bae23b4f772ecfbbefbe0f892bc9d4158220be35f8f7c9",
    "fb04e1690caf08e2194211975a3e45a0a2d75f51cb9fe9ae35b9465c45eebba2e2fd5abdaef09c44f524e582a1396aa7cd96296170c1912c75564d9567698ee4"
    "a4fc499322044ae4990e551d696a3443e56996dae6cf5d24e8c1051b3fa73abb18aa867f471a54e538d76609a1213e6c2e73fe8250ed331419f3fbaf4e699f3d",
    "8c7d5c3afd9bb1b7dd0d9ea5dc0db24abb73648d72a7621b21f184abb813c38ff2a97cf4847347f82aa5fd1da624d2ddf12e796e26b6b7dd71b22cd01537c5b3"
    "6eb12954d9667cd9bbbec4ea7e8fd6107d7b9f9ef2f77c17f37b6ea8e5bdf31f3e7837382abfec2a65b0a894444c2de34a29ab9f3fe82be5bd96529eaadf3bdd",
    "52cb7da5ccbca75e47d57a4aeab5563fa59437ebeae7acfab97a7d2805357b1caae545ff7fafe9ae89b3ef299a26df1d79b559784febae1fe2299a2adf2e33d4"
    "43bc0f0de285b078a8fecde47669e0c26d5170337c8564dca9507e3b1476ef7a3dcb6b65b7c4f34c99efb92996713374d9cd92124396dd7c53748f2cf4889f1e",
    "62da35ad9fea4b4d6e10d7d5bf4e3ff82af0b79075788a2c0a5e0f53dfb47ef72c06cfa5d3171b052a90cbe65676f3d97629bab55fe07377220fdb91998033a9"
    "1d04e6daaafaedfafc3631ed9ad6df9ed25d6ba2f5332ee4d3db41a57cf98cd74f31f54f6bb71f61f05d3a7d65d01f0b4bf4209811389259a2c5709b66a42437",
    "0867a841777c69bc7fdf20de2e160fd53f81df0cffbd3ab297fb55cd606ebdc13447b2b01ff8ecbf7fff0afa8119e159d50fa43bad48a896e8ace5b3fe934a8c"
    "e5bcf17d26e19c7ee053ccfdd3da711353bf4ba737dc0fdcaa319216f41216fbdd692a6896df3d87c173e9f43afe170726238558fdd2787f0efd642cef6b86ba",
    "04beffeded7720eeb73bdf7b76ebcb1d69739d17ea0d311727ebe178b21305be5f9ce79840f81e37de98d65ecfe8ae09ddf7343d2d724aa02a0d33929797d731"
    "ea1f492c1eaa7fc278a046f7a86a931fb8871bb1d425e477884f8a2f405c6f779edff01d9fe45a759a89e423c7bbad703d7f7c27063cbfb03c8fc39bd65ed775",
    "d7c4d9f7140d2dd6e8c1a0a661d77c7d148b87ea8df0ba6221c51380cf9d816794cfbf87c173e9f49d16156b762ae27aa9ebe3f98c985bf6eded13cee173bbe4"
    "5d1ff2f9ad1a2d88528d467fc721a69da6fa9f7c685abefe250c9e4ba71f18e3606084831a2f303cdf3ce03b945063f8ee4165b82ec0783caf175c7b34316b9d",
    "c1fe043c4d7fb1fc9eea468fb19cf57181fcc5d7d7208f33affdc1b4f1bdb815ebc5a2fd7e66b3e7f5a7bc9e4836b4ec8939a73f7880b97f5a3b9e62ea77e9f4"
    "b37bae6f3dfe0b070d8a695282b57eba61da78e0aaee9a38fb9ea21946bbc3f292e71568ae4af5929c74d68e7b06db119cd00e4d6f6c9cb0c45ae817f7611ed7",
    "fefd41eea449b32baddde2325daefa93fbd94c6ad94979fd7b98fb17f8b91d88c73179fc49fd49a5418e66c6218f3fbed404f23ed6e0411edf9cfa1f60ee8738"
    "7ffcef9dce4f93a6c5f993f2f0831fce92bdcbeb07e634efaff90f33f8c3add8c8eabcbf7cffb91b90e7b13bff0b2d4ff38816fd21369059e532e5926fab2086",
    "81ff81ff5141e77dade57f9a03fe9fc4ff346739ff7f0efc6f7ffeaf937bab695f71a7b55a0e49911532eda7fcd90de7f03fccfb8e2f3541fcefc1a169bcfea4"
    "f97ba3784fba9ee79e41bc20160fd5db28df0779fa19e2419ede9cfa6dc8e77d4ae0c5368bfe0e5c3e7d26fb70e5b782a332f8b665fc5e6b33ccb084f59ae3e2",
    "76b1490ab536e71e5ac9eab8fdf47790b7b73fcf4b012fbb1b2d6e34f67d7cbf23a5d8786a597210cf7f8ab91ff6d59ef7bb87ebef7f81a96f5a7bbd82c173e9"
    "f4baf52f64b3c99c84698e144e72a31e2fdee62a12cd7366cd1b7f7b42bb347d4dc53d68905c75d01198b57ef3cd09f89ade68bc8035a43ab36b61fff0fb8f04",
    "c8ebd8bd7fc86623d271e6c8b35adedfd9da29e7c9b5744a8c3ba77f9031f7c3738d0aea87aba6f5173fc6e0b9747a7d7fd1e1e96a4810c89338434a12c5d15c"
    "7df4bdcb5adf6f743c599880a7e90dfbd118c30d5dc842ff39fd5f19fa05bbf70bfdcd842f72a75962b3e5743554aa25523d36eda0f3788c3ecf794cfd2e9dde",
    "f8b841c9101dd4189e940ece4610d6eef3da8773790ce2397f9f379ccb334b3c3897c79cfa8df27e1653bf4ba737cefb1c2fed903b69213978b4eb5adac8e273"
    "1b8aa6cd034c3a679916399223ec3b0f10c1e2a17a43eb778636b23ecf03f3bd33c4b3eadc8656a89d66fd2725bf6757f0b623cbd47a87dd219cc3ebf0fca282",
    "fadb4f4c3ba701ce55c6e1a17a3857f949f11459143c3857d99cfa219e1f5f6a828be74f31f54d6bb71731782e9d7e6c1e67a9c6f0bc6201bbe673d2583c546f"
    "b41f7855b1987b64b141276021ff7f0ceb7feccfffe5462053e218a99ae3d9589b4bf8cab1f0a683d6edcf615e76fed6ff9cee9896bfc7bd3fcca5d3eb789f12",
    "047eaa798b59edcf9ab3b85f1c348faaba15b657395f4ffd239b5d42dcffc7ad3dc8e3db9df77b5cb6db4f35d9f0462b1a17d7229bad0eef71501e5fc6dc3fad"
    "1de7edbd8e38bf98d60fbf81f93dda3affe7cf7fa8bd7f91d854cad39265ebfdc596307a69a85df3fc612c1eaabf689e70b8da7f6823eb793ff8a73bb721deb7",
    "3beffb3762b58627903c4ac77c492993e5b84e24eaa07c0f3cbfa8a0fe76dbb4fcce0f30782e9dfe913c7f9467499a8be9e3fda6c1f6185ddf6f977c0f62406b"
    "f33d7ff80facdbb43dff3329b6ca1e0b54aa19294a6b7cbb5adb6bd30e3aa7079ee3f1ed47fd2e605a3c3ff97d2bc33daa2265d7783e81c543f5c6f6ef6a56b2",
    "f29c86e0f537603da6edf9bc5b4c8a71e6b810f7d6841cd3394a6f72fd6c04f87cb1f8fc0dd88fa50aecc742db3d85ffc07eac19e2c17e2c73ea87bc0e2aa8bf"
    "bd02f3b706f160fe7656788a2c0a1eccdf9a533ff03d2aa8bf2d9996c7ff3e06cfa5d38f5fa7a9cdd65e5e9c6f747cb833014fd39bb54e53f319ebfc45feec5f",
    "ff8679db79e5fb69f767adb5b7739e822f1d1292be1857dadc0d70bb0102f87ed1f8fe2ea6be69edf4530c9e4ba71f773e1b7af05092cb30648552bf3f2ff3b8"
    "b241fcb726e06b7a53ce731a6b50cbcfdf2f7ff308c603f3da3f4c3b1ee0c9eda332496e44aabeb523b1e4a552fbcd13078d0764ccfdf05ca382fae16b30cf3b",
    "251eccf39a85a7c8a2e0c13caf39f5cb98fb81df51717a1ee8a2fc0f79a0f1ed873c903578900732a77e1973bf5df76d1d62da6beef99b35d3e27cdc3e3197aa"
    "a9f0e2a8b46b9c1fc2e2a17a2379c2818d2ec30f607fd60cf1ac8af39bf9ded16a5aca0456d3643e779417364e2a9c83d6e7c3f38bcaacce617b0183e7d2e9c7",
    "c7f31acbdb775e3735014fd39b15cf6b3e63615e27f0ab8f80efedcef76bc2b648662ba9bd6279af540e8703fe5a9d02be5f38bebf8ba90fe67515910de22f5e"
    "7e10e675678907f3bae6d42f63ee87e71a9559e5fde7659c70d17c108c13c6b71fc609d6e0c138c19cfa65ccfd90f74705f1c307d6e5fd459a1b9590f77fccfa",
    "609abb043f8073d966896715bf936422bcdf3d4ed08554a4cd84c35c7435b3e3a0381f9e5f54e633efafb13ce4fda75ec7a3fa8c85799d20c4f3f6e77bcf4a22"
    "b016e916bd9e70b7cb789a8c3f5aef3b289e07be4705f2fee3db07797f4520ef6f0f3cc8fb9b53bf8cb91f9e6b54e633ef6fde38e1a2f92018278c6f3f8c13ac",
    "c183718239f5cb98fbed9af7c7c5f3d3fa218e07b5f7b478ce7ff8653f382ae5ae526624a50cb24af9e5bb4a79b765d93c015986fd0193c69d031b5dc2b85396"
    "619ec0fefd41ab5caed6fccd723a9fc909597e796383d9f63ba83f80e71715d4df6e9a16ffc37bda7178a81eded3fea4788a2c0a1ebca7dd9cfa81f75141fdcd",
    "3327791f2dba87f9e169f33e9acf5818e7fff21faf03dfdb9def8f5636b2f56ab6905c8fef2caf17cad9957a2de3a0f37e80ef51c1f1bdd1f7b9bc8cc173e9f4"
    "93e78795efcdcbbcb0d1f8ffce047c4d3f83f923abfb837fc27b1beddf1f6c15968f797fbf4656bbdde2aed79f5a8fdfd98b39a73f80e7797ca909ea7f2ba6f5",
    "0ff0be2f45e07d5f33c31bc9a2e0c1fbbecca91ffa83f1a526a8ff251c971fbae8bc00e487c6b71ff243d6e0417ec89cfa65ccfd765d1784f38b69fd10b7ee46"
    "5b17f4fcf90f83ef0747a5fc73a5fcf43dd3fa879b9876b8747a5dff205062836c5239ba4f451a54e558b4eb382137014fd31bed1f1e3198ea5116ce1bffe537",
    "1fc238c1eefd4460c3c3ac6656b39942a220168a81fad66e4b72d03e02789ec7979ae0d60f19f5bfe775d784ee7b9a5ed70f70a450a7b94ae3d8aefc6f729e68"
    "9af7049fd9ccda3cd1e9775edffd2bf0ff8cf0ace2ff935e37b94ec66bf5154f251de37347f1f66a17e60de6ee79b6747c40bc1654ca97d5f2b669fb03ae61da",
    "e1523535861fbd28deaefb0322583c546f64ddc1c846d6c707708ed00cf12c3b27aeb59aceb798e8ca71b891cf6ee4a456345a893b87efe1f94505f607c0fe80"
    "c7fd8e29e27cd81f30433cd81f604efdc0fba8cceafcb81731782e9d7efcfcaf16dddb777f407a029ea6376bfe57f3190bf9fee3e20bc0f776e7fb7223902971",
    "8c54cdf16caccd257ce558787303f87ed1f8fe2ea63e383f4e11d920fee29d3305e7c7cd120fce8f33a77e19733f3cd7a8cceafcb87919275c343f04e384f1ed"
    "8771823578304e30a77e58ff33bed46456fb8a6f61f05c3abd7edc208a9420154886ae0e4d1112eaeaf7ec3a4f90c7e2a17ac371c42386b37c5cf054a40be302",
    "bbf7075eef717f3d1a0f27ebdbbddc7e3f514eacef4ab01e68019fe7819c064d5bf7735d774d9c7d4fd1d0a2d8240591b2ebba9f04160fd55f2c9f38b4cd30a3"
    "a8596989b5ce0f82d7df780778ddeebcde2d26c538735c887b6b428ee91ca537b97ed641fbc180d7c7979aa0bc1e827540eae7b00e687ca909ac03b2060fd601",
    "9953bf8cb97f5a3b1e60ea77e9f4b3e8076ed1e2505f1748c65a3f94f72c5bdf3ffc893502d6f7e3d60d0cfe708f6c64fd7edefbc0eff6e7f7955e8a891f77aa"
    "47c940a9b75915bc7e2e1780f5fd0bf0fc0ec5bc759e10d7e3f0503dc4f54f8aa7c8a2e0415c6f4efd32e67edbc4f565becd55458be3faac69fdc10f31782e9d",
    "fe91fe20391cd1504284195886302feebfaabb7ed81e45536990a3054466ade7c9e8ae09ddf734bdf1fee0bcc12ccdf37ff0ec0dc8f3dbbd1f8873db9970a8b8"
    "d3a7d95efaa85965d3d2ce8983f2fc32e67ee8075041fb813ba6e57726c5e10303b064eff278dee8f8308ac543f586c687231b59be3ee7fe73c0efb6e777a1e5",
    "691ed1a23fc40632ab5ca65cf26d154407bddf51c6dc0ffc8e0aea87054bf97df87277e0f7c7f3bbfa3a772bf9fd73e077fbf37b9ddc5b4dfb8a3badd572488a"
    "ac90693fe5cfc27afcb3fa166a9dceb973fb7178c0eb8a00af9b85a7c8a2e001af9b533ff0faf8521374fde50ee463a6c4837c8c59788a2c0a1ee463cca9ffcf",
    "98fba7b52389a9dfa5d3cf60ffecad0e298c8e523e680a7c55f7bb0e31ed3697e72ba6cdbfbe84c173e9f403e31c0c8c7250e30586e79b077c87126a0cdf3da8"
    "0cad7279e7aec917c4d3eadf9f80a7e92fd80f286ef518cb59bf2e47fee2eb6bd03fd8bd7f10b762bd58b4dfcf6cf6bcfe94d713c986963d0ed84ffb7fb4bcfe",
    "d6", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 92232U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sprdmpF129_info.c) */
