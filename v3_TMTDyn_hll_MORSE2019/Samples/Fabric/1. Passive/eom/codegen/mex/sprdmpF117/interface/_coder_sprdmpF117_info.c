/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sprdmpF117_info.c
 *
 * Code generation for function '_coder_sprdmpF117_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF117.h"
#include "_coder_sprdmpF117_info.h"

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
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("sprdmpF117"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (8.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF117.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737612.32380787039));
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
  const char * data[34] = {
    "789ced5d4b6ce3c619e6a6bbc12e8ab402d2e6d1b4e96e5a2cb64860c9b22cd94103e86dc9b62cc9d24ab2f3b049899268f32191d4c34ad1f8d8430ee9a5e8a1"
    "871c93a029d25eb2688242bdf5d8024d0fed65d122e8a5875e5af4584924bd1eae66c535295a94fe1f588ca99f9c6ff8ef3fdfccfcf320712599ba4210c4d706",
    "ff3e7e8720eed4875704f114a1884b4d9f2050d1ebafa8e90f75d79a5c23ae22cf5d51f17ea15e97055ea6bbb272c1323cbdd3e2285a1c5cf024479f65531138"
    "862779397fd2a009919604b64d57469a2ac3d27986a3b7857317096670c1c5cfa9ce2e86aae1df913a5d3eceb53842ac4b0f8acb9ebf2054fb0ca58f79ffab06",
    "edb387b18f4ba77f3df6a6bb2e70b4bb4e5618778eacd2ee546c23249df0657762f8533e958f9ef0ee8850a1b5bfc3b44cbadbde25cfcdc4f6b63b4e52225376"
    "d302e7961a62856bc49797034b9cee7dfe8729ef9306dfe769ccfbdc50d39f9ffff1df3f0e8ed29b6a1a2c2ae9a17a4dc4d434aea47f9495f454fdfd745f4da3",
    "ea7d25f55acd87a095b4afe5cbabfa2d15afaba42e5149336f07353b1caae945ff5fafe9ae89b3fb144d43e88cbcd92abc2775d70ff0144d4568512cfd00ef03"
    "9378212c1eaa7f3db95d1ab86e4b12ddac502659772a94df0e85ddbb5ecff21ae5960581a584ae9be65837cb506e8e945992720b0dc93db2d043fe7988299751",
    "ffd4a79adc20aeab7f9dbefb85ff2f21fbf0145914bc2e263fa37ef70c06cfa5d317eb05da9fcbe65677f3d95629bab55f107277230fca91998033a91c04e6da"
    "aefc9d5a7f1b987219f5b72774d79a68ed8b0bf9f57650495f3ae3f5534cfe46edf65d0cbe4ba72f0fda617189197462449e64971829dc625839c90fba31f4a0",
    "19be34debf67126f178b87ea1fc36f86ff5e1ed9cbfdb26630b7de609a23d9d80e7cfa9fbf7e01edc094f0ec6a07d2ed6624544db4d7f259df4939c6f1def83e"
    "9b989f76e013ccf346edb889c9dfa5d39b6e076e555959ebf41236fbdd692a6895df3d8bc173e9f43afe97062623c558edd2787f06fd642cef6b86ba04beffd5",
    "edb7a0dfef74bef7ecd696dbf2e6ba20d6ea522e4ed6c2f1643b0a7cbf38f59840f81e37de306aafa774d784ee3e4dcf48bcd251958791c8cb8beb98f58f2416"
    "0fd53f667fa0ca74e94a4318b8871bb1d425c477888f8bcf43bfdee93cbfb1727c926bd61836928f1cef36c3b5fcf1dd18f0fcc2f23c0ecfa8bdaeebae89b3fb",
    "140d235599c1a0a6eed4787d148b87eacdf0ba6221c51380cfe703cf2c9f7f1383e7d2e9db4d3ad66897a5f55267451032526e79656f9f981f3e774adcf5019f"
    "dfaa32a2245719f43d0e31e5b4d4fffa8796c5eb5fc4e0b974fa81310e064638a80a222b088d03a14d8b5556e81c9487eb01ccf7e7f5822b8f2656ad2fd89f80",
    "a7e92f16df53dde81196b3bf5fd0fffccb6b10c799d5f6c068ff5eda8a7563d15e2fb3d9f5fa525e4f241b5af6c4e6a73db88f79dea81d4f31f9bb74fae9d5eb"
    "5b8fbee1a04eb30d5ab4d74f372c1b0f5cd55d1367f7299a616f77985ef2bc02c357e86e9297cfcaf1bec97204279443d39b1b272c7136fac53d98c7757e7b90",
    "3b6930dc6a73b7b8cc50155f723f9b492dcf535cff7dccf30b5c6f07e2999b38fea4f6a45c274733e310c71f9f6a02711f7bf0208e6f4dfef731cf433f7ffcfb"
    "1af3d3a465fdfc4971f8c18b7364f7f2da81198dfb6bfec30efe702b36b23beedfbff7ec0d88f3389dffc5a6a771c448be10e7cf04f80c555ad92a4861e07fe0",
    "7f54d0795f7bf99fe181ff27f13fc3dbceff9f01ff3b9fff6be45e20bd52dc6906a8901c5925d33eda97dd981ffe8779dff1a92688ffdd3fb48cd71f377e6f16"
    "ef71d7f3bc6f122f88c543f50e8af7419c7e8a7810a7b7267f07f2798f1605a9c5a1ef818ba74f651f6eff8de0280dbe691bbf575b2c3b4c61bde6b87ebbd420",
    "c56a8b770fad6477bffdf4d710b7773ecfcb7e2fb71b2d6ed4f757845e5b4e71f1d4b23c473cff09e679d8577bdeef1eacbfff09263fa3f6ba83c173e9f4baf5"
    "2f64a3c19e84199e144f72a3162fdee2cb3223f056cd1b7f7d42b9347d55c53da8937c65d01058b57ef3f509f89ade6c7f016b487566d7c6f6e1371f8a10d771",
    "7afb90cd46e4e3cc912740edef6ced5079722d9d92e2f3d33ef431cf43bd4605f5c38065edc5f730782e9d5edf5eb405a6121245f224ce92b24cf30c5f1bdd77"
    "59ebfbcd8e270b13f034bd693f1a63b8a10bd9e83fa7ffa5a05d707abbd0db4cac44ee364a5c964a5742a56a22d5e5d273741e8fd9fa9cc7e4efd2e9cd8f1b94",
    "08d141951548f9e06c0461ef3eaf7d3897c724defceff3867379a68907e7f25893bf59decf62f277e9f4e6799f17e41d72272d260755bba6858d6c3eb7a168d9"
    "3cc0a4739619892779c2b9f300112c1eaa37b57e676823fbe33c30df3b453cbbce6d68865a69ce7752f27976456f2bb24cafb7b91d627e781dea2f2aa8bf7ddf",
    "b2731ae05c651c1eaa8773951f174f9145c1837395adc91ffaf3e3534d70fdf9534c7e46edf60206cfa5d38f8de32c555941502ce0d4784e1a8b87eacdb6032f"
    "2b16738f2c3668046ce4ff8f60fd8ff3f99faafb33259e952b39818bb5f8c40a150b6fced1bafd198ccbcedefa9fd31dcbe2f7dfc0e0b9747a1defd3a228189a",
    "b798d6feac19ebf74b83e2d115b7c2f62ae7eba97f64b34be8f7ff6e6b0fe2f84ee7fd2e9fedf4520d2ebcd18cc6a5b5c866b32d78e6288edfc73c6fd48eb3f6"
    "3d479c5f18f5c3af60de475be7ffdcf91fb5ef39129b4a7a5ab26dbdbfd414471f0b756a9c3f8cc543f5178d130e57fb0f6d643fef077f7ff736f4f79dcefbbe",
    "8d58b5eef1278fd2b195a49cc9f27c3b129da3780fd45f54507fbb6d597ce7db183c974eff509c3f2a7024c3c7f4fdfd86c9f2985ddfef94780f62407be33dbf"
    "fd17acdb743cffb329aec21d8b74aa1129ca6b42ab52dd6b3173744e0fd4e3f1e547fdce6f597f7ef2f756867b5425daa9fdf904160fd59bdbbfab59c9ce731a",
    "82d75f83f5988ee7f34e3129c5d9e342dc5b15736cfb28bdc9f7b211e0f3c5e2f3d7603f962ab01f0b2db701ff81fd5853c483fd58d6e40f711d54507fbb03f3"
    "b726f160fe765a788a2c0a1eccdf5a933ff03d2aa8bf2d5916c7ff1606cfa5d38f5fa7a9cdd65e5e3fdfecf87067029ea6b76a9da6e633f6f94bffd37ffc13e6",
    "6d6795ef8deecf5a6b6de73c859574484caec4f8d2e6ae9fdff513c0f78bc6f7ef61f2336aa71f60f05c3afdb8f3d9d08387927c8625cbb47affaccce3f64de2"
    "bf31015fd35b729ed35883da7efe3ef5d523180fcc6afb60743c2090db4714496e442a2b6b4752c94ba7f61b2773341ee8639e877a8d0aea87afc03caf413c98",
    "e7b50a4f9145c183795e6bf2ef639e077e4765dee34017e57f88038d2f3fc481ecc183389035f9f731cf3b75dfd621a6bcd69ebf59b5ac9f8fdb27e652356541"
    "1aa54eede787b078a8de4c9c7060a3cbf003d89f35453cbbfaf98d7cf728909633fe409acce78ef2e2c649999fa3f5f9507f5199d6396ccf63f05c3afdf8febc",
    "c6f2ce9dd74d4dc0d3f456f5e7359fb131aee3ffd987c0f74ee7fb35715b22b3e5d45e91da2b51e1b0df57add1c0f70bc7f7ef61f283795d45fa26f1172f3e08"
    "f3bad3c483795d6bf2ef639e877a8dcab4e2feb3324eb8683c08c609e3cb0fe3047bf0609c604dfe7dccf310f74705f5c39a6d717f89e14729c4fd1fb13e98e1",
    "2fc10fe05cb669e2d9c5ef249908ef778e134c211569b1e1301f0d6476e6a89f0ff51795d98cfb6b2c0f717fc3eb78549fb131ae1384febcf3f9deb39af0af45"
    "3a45af27dce9b09e06eb8bd67a73d49f07be4705e2fee3cb07717f4520eeef0c3c88fb5b937f1ff33cd46b546633ee6fdd38e1a2f12018278c2f3f8c13ecc183",
    "718235f9f731cf3b35ee8febcf1bf5431c0f6adf69f1202fa97ea725f8b6927aba4ada9795f426afa48468db3c0149c1fe8049e3ce818d2e61dcd9efc33c81f3"
    "db83264555aabe0695ce6772625658ded860b77d73d41e40fd4505f5b79b96f5ffe13bed383c540fdf697f5c3c4516050fbed36e4dfec0fba8a0fee69991b88f",
    "d6bb87f961a3711fcd676cece7fff46faf02df3b9def8f5637b2b54ab6905c8fef2caf17a8ec6aad9a99a3f37e80ef51c1f1bdd9efb9bc84c173e9f493e78795"
    "fb66655ed86cffffee047c4d3f85f923bbdb83bfc3771b9ddf1e6c15968f055faf4a563a9de2aed7975a8fdfdd8bcd4f7b00f5797caa09ea7fab96b50ff0bd2f",
    "45e07b5f53c31bc9a2e0c1f7beacc91fda83f1a926a8ff25e62e3e74d17901880f8d2f3fc487ecc183f89035f9f731cf3b755d10ce2f8cfa216edd8db62ee8b9"
    "f33fde7f27384a3d3f52d2cc3b96b50f3731e570e9f4baf641a4a53ad9a0734c8f8ed4e9f2b1e4d471426e029ea637db3e3c6430d5a36c9c37fed32f3f807182",
    "d3db09ff86870d6402d94c2151900a457f6d6bb729cfd13e02a8cfe3534d70eb87ccfadf73ba6b42779fa6d7b5033c29d618be5c3f762aff5b1c2732f29de033"
    "9bd91b273a7dfad5dd3f03ff4f09cf2efe3fe97692eb64bc5a5bf594d3312177146f053a306f3073f5d9d6f101f14a50495f52d3db96ed0fb88629874bd55459",
    "61f4a178a7ee0f8860f150bd997507231bd9df3f807384a68867db3971cd403adf64a3abc7e17a3ebb91939bd168393e3f7c0ff51715d81f00fb031ef51e06fa"
    "f9b03f608a78b03fc09afc81f75199d6f9712f60f05c3afdf8f95fad77efdcfd01e909789adeaaf95fcd676ce4fb8f8acf03df3b9defa9ba3f53e259b99213b8",
    "588b4fac50b1f0e606f0fda2f1fd7b98fce0fc3845fa26f117ef9c29383f6e9a78707e9c35f9f731cf43bd46655ae7c7cdca38e1a2f12118278c2f3f8c13ecc1"
    "83718235f9c3fa9ff1a926d3da577c0b83e7d2e9f5e30649a245b940b24c65688a905853ef73ea3c411e8b87ea4df7231e329cede38227221d181738bd3df07a",
    "8f7bebd1783859dbeee6f67b092ab1be2bc37aa005accf03390d5ab6eee7baee9a38bb4fd13092d420458976eaba9f04160fd55f2c9e38b4cd30a2a8596989b3"
    "cf0f82d75f7b0b78dde9bcde2926a5387b5c887bab628e6d1fa537f95e768ef68301af8f4f3541793d04eb80d4df611dd0f854135807640f1eac03b226ff3ee6",
    "79a3763cc0e4efd2e9a7d10edc62a4a1be2692acbd7ed8dfb36d7dfff015ab04acefc7ad1b18fce11ed9c8fefdbcf780df9dcfefabdd141b3f6e578e92fe5277"
    "b3227a7d7cce0febfb17a0fe0ec5ba759ed0afc7e1a17ae8d73f2e9e228b8207fd7a6bf2ef639e774cbf9e125a7c45b2b95f9fb5ac3df80e06cfa5d33fd41e24",
    "87231a5a8cb003cb10d6f5fbafeaae1f9447d194ebe468019155eb7932ba6b42779fa637df1e9c3798ad71fe779fb901717ea7b703717e3b130e15777a0cd74d"
    "1f352a5c5ade3999a3387f1ff33cb403a8a0edc05dcbe23b93fae103037064f7f278deecf8308ac543f5a6c687231bd9be3ee7deb3c0ef8ee777b1e9691c3192",
    "2fc4f933013e439556b60ad21c7ddfb18f791ef81d15d40f0bb6f2fbf0e3eec0ef8fe677f573ee76f2fb67c0efcee7f71ab91748af14779a012a244756c9b48f"
    "f665613dfe597e0bb54ee7dcb9fd383ce0754580d7adc2536451f080d7adc91f787d7caa09bafe7207e23106f1201e63159e228b8207f1186bf2ff03e679a376",
    "2431f9bb74fa29ec9fbdd526c5d151ca070d51a8e8deeb10536e6b79be6cd9fceb8b183c974e3f30cec1c0280755416405a17120b469b1ca0a9d83f2d02a9777"
    "ee5aff82785afefb13f034fd05db01c5ad1e6139fbd7e5f43ffff21ab40f4e6f1fa4ad583716edf5329b5daf2fe5f544b2a165cf1ceca7fd3fc6cafb37",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 92224U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sprdmpF117_info.c) */
