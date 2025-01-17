/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sprdmpF109_info.c
 *
 * Code generation for function '_coder_sprdmpF109_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF109.h"
#include "_coder_sprdmpF109_info.h"

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
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("sprdmpF109"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (8.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF109.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737612.32458333333));
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
    "789ced5d4b6ce3c619e6a6d96017455a0269f368da74372d16291258b22ccb76d0007a5bb22d4bb2b492ec3cbca44449b4f99048ea61a5687cec2187f452f4d0"
    "438e49d014692f593441a1de7a6c81a687f6b26811f4d2432f2d7aac24925e0f57b3d29a142d52ff0f2cc6d44fce37fcf79f6f66fe7990b8924c5d2108e26b83",
    "7f1fbf43102fd5875704f124a10aa9a58f11a818f557b4f487866b5dae128f23cf5dd1f07ea15d97454161ba8a7ac1b102b3dbe269461a5c0814cf9c65531179"
    "56a004257fd26008899145aecd54469a2acb3179966776c47317097670c1c7cfa9ce2e86aae1df913a533eceb57842aacbf78bcb9dbf2034fb0ca58f79ffc7a7",
    "b4cf3ec63ea441ff7aec4d4f5de4194f9daab09e1c55653ca9d866483e11ca9ec4f0a77c2a1f3d113c11b1c2e87f871985f2b47d4bde1b899d1d4f9ca225b6ec"
    "6144de2337a40adf882f7b379678c3fbfc0f53de27a67c9fa730ef735d4b7f7efec77fff38384abd5a7a474b899896c6d5b45f54d353edf7d36d2d3dd0d2a89a",
    "de53b46bed7e8251d3a0769de96abf97b4fb0435bd2169f86f07753bdcd1d28bfebf5e355c1367f7a99a86d81979b355784f18aeefe3a99a8ad8a239e63ede07"
    "26f142583c54ff7a72a73470dd962c7938b14c719e5428bf130a7bf67cdee575daa38822478b5d0fc3731e8ea53d3ca57014ed111bb26764a107fcf30ea65cd3",
    "faa731d5e53a714dfbebf4dd2f027f09d987a7caa2e07531f94deb774f63f04883be582f30815c36b7ba97cfb64ad1ed838298bb1db95f8ecc049c49e52030d7"
    "76e5efd4fadbc0946b5a7f7bcc70ad8bdebe90c8afb7826afae219af9f62f29fd66edfc5e093067d79d00e4b4beca013230914b7c4cae116cb294961d08d6106",
    "cdf0a5f1fe5d93787b583c54ff087e33fcf7f2c85e9e977583798c06d31dc9c676e0d3fffcf50b6807668467573b906e3723a16aa2bd9ecffa4fca315ef0c50f"
    "b8847bda814f30cf4f6bc72d4cfea4416fba1db859e514bdd34bd8ec77a7a9a0557ef70c068f34e80dfc2f0f4c4649b1daa5f1fe1cfac958ded70d75097cffab",
    "5b6f41bfdfe97cefddab2db795ad0d51aad5e55c9caa85e3c97614f87e71ea3181f03d6ebc31adbd9e345c1386fb743d2b0b6a47551946222f2fae63d63f9258"
    "3c54ff88fd812adb652a0d71e01e1ec4529710df213e2e3e07fd7aa7f3fce6caf149ae5963b9483e72bcd70cd7f2c7b763c0f30bcbf338bc69ed75cd704d9cdd",
    "a76a58b9ca0e063575a7c6eba3583c546f86d7550ba99e007cee0e3cb37cfe4d0c1e69d0b79b4cacd12ecb1ba5ce8a2866e4dcf2cafe01e11e3e774adcf53e9f"
    "dfacb292ac5459f43dee60ca69a9fff5ef5816af7f0183471af403631c0e8c705815254e141b87629b91aa9cd8392c0fd70398efcf1b05571e5dac5a5f703001",
    "4fd75f2cbea7b9d1432c677fbfa0fff99757218e33afedc1b4fd7b793bd68d457bbdcc56d7e74ff9bc916c68d91b734f7b700ff3fcb4763cc5e44f1af4b3abd7"
    "371f7ec3619de11a8c64af9f6e5a361e78dc704d9cdda76a86bddd617ac9f30aac5061ba4941392bc7fb26cb119c500e5d6f6e9cb0c4dbe81777611ed7f9ed41",
    "eea4c1f2abcdbde2324b57fcc9836c26b5eca6b8fefb98e717b8de0ec4eb9a38fea4f6a45ca74633e310c71f9fea02711f7bf0208e6f4dfef730cf433f7ffcfb"
    "4ee7a749cbfaf993e2f08317e7a9eee5b503731af7d7fd871bfce1516d6477dcbf7ff799eb10e7713aff4b4d6fe38895fd213e90591332746965bb208781ff81",
    "ff5141e77dede57f5600fe9fc4ffac603bff7f06fcef7cfeaf51fb6be995e26e738d0e2991552aed67fcd94df7f03fccfb8e4f7541fcefde1dcb78fd51e3f766"
    "f11e753dcffb26f182583c54efa0781fc4e9678807717a6bf277209ff71849945b3cfa1eb878fa4cf6e1f6df088ed2e09bb6f17bb5c571c314d66b8eebb7cb0d",
    "4aaab604cfd04a76f7db4f7f0d717be7f3bc12f0f17bd1e266fd6045ecb595141f4f2d2b2ee2f94f30cfc3bedaf37e777ffdfd4f30f94d6baf973078a4416f58"
    "ff42351adc49981528e924376af1e22da1acb0a260d5bcf1d727944bd75735dcc33a2554060d8155eb375f9f80afebcdf617b086d466766d6c1f7ef3a104711d",
    "a7b70fd96c4439ce1c79d7e883dded5d3a4fada75372dc3ded431ff33cd46b54503f5cb3acbdf81e068f34e88ded455b642b2149a24ee21ca5288cc00ab5d17d"
    "97b5bedfec78b230014fd79bf6a331861bba908dfe73fa5f1ada05a7b70bbdadc44ae476a3c467e9742554aa26525d3eeda2f378ccd6e73c267fd2a0373f6e50",
    "234487554ea494c3b31184bdfbbc0ee05c1e9378eedfe70de7f2cc120fcee5b1267fb3bc9fc5e44f1af4e6795f10955d6a372d250755bba6878d6c3eb7a168d9"
    "3cc0a473965959a004c2b9f300112c1eaa37b57e676823fbe33c30df3b433cbbce6d68865a69de7f52f27bf7245f2bb2cc6cb4f95dc23dbc0ef51715d4dfbe6f",
    "d9390d70ae320e0fd5c3b9ca8f8aa7caa2e0c1b9cad6e40ffdf9f1a92eb8fefc2926bf69edf63c068f34e8c7c67196aa9c28aa16706a3c278dc543f566db8197"
    "558b7946161b340236f2ff47b0fec7f9fc4fd7039992c029959cc8c75a4262858e85b75cb46e7f0ee3b2f3b7fee774d7b2f8fd373078a4416fe07d4692c4a9e6",
    "2d66b53f6bcefafdf2a0784cc5a3b2bdc6f946ea1fd9ec12fafdbfdbde8738bed379bf2b643bbd54830f6f36a371793db2d56c8b5e17c5f1fb98e7a7b5e3bc7d"
    "cf11e717d3fae15730efa3aff37ff6fc8ffaf71c892d353d2dd9b6de5f6e4aa38f853a35ce1fc6e2a1fa8bc60987abfd8736b29ff783bfbf7d0bfafb4ee77dff",
    "66ac5af7069247e9d84a52c96405a11d89ba28de03f51715d4df6e5916dff936068f34e81f88f347459e628598b1bfdf30591eb3ebfb9d12ef410c686fbce7b7"
    "ff82759b8ee77f2ec557f8638949352245655d6c55aafb2dd645e7f4403d1e5f7ed4ef0296f5e7277f6f65b84755669cda9f4f60f150bdb9fdbbba95ec3ca721",
    "78ed35588fe9783eef1493729c3b2ec47d5529c7b58fd25b422f1b013e5f2c3e7f0df6636902fbb1d0724fe13fb01f6b8678b01fcb9afc21ae830aea6f2fc1fc"
    "ad493c98bf9d159e2a8b8207f3b7d6e40f7c8f0aea6f4b96c5f1bf85c1230dfaf1eb34f5d9dacbebe79b1d1fee4ec0d3f556add3d47dc63e7fe97ffa8f7fc2bc",
    "edbcf2fdb4fbb3d65b3b396f61251d92922b31a1b4b51710f60204f0fda2f1fd7b98fca6b5d30f3078a4413fee7c36f4e0a1a490e1a832a3dd3f2ff3b87d93f8"
    "6f4cc0d7f5969ce734d6a0b69fbf4f7ff508c603f3da3e4c3b1e10a99d239aa236239595f523b9e46352078d13178d07fa98e7a15ea382fae12b30cf3b251ecc",
    "f35a85a7caa2e0c13caf35f9f731cf03bfa3e2f638d045f91fe240e3cb0f71207bf0200e644dfe7dccf34eddb77507535e6bcfdfac5ad6cfc7ed1323354d5994"
    "47a953fbf9212c1eaa3713271cd8e832fc00f667cd10cfae7e7e23df3d5a4b2b99c05a9acae78ef2d2e6495970d1fa7ca8bfa8ccea1cb6e73078a4413fbe3faf",
    "b3bc73e7755313f074bd55fd79dd676c8ceb047ef621f0bdd3f97e5dda91a96c39b55fa4f74b74381cf0576b0cf0fdc2f1fd7b98fc605e5795be49fcc58b0fc2"
    "bcee2cf1605ed79afcfb98e7a15ea332abb8ffbc8c132e1a0f8271c2f8f2c338c11e3c182758937f1ff33cc4fd5141fdb0665bdc5f6685510a71ff87ac0f6685",
    "4bf00338976d967876f13b4525c2079de3045b48455a5c382c44d732bb2eeae743fd45653ee3fe3acb43dc7fea753c9acfd818d709427fdef97cef5d4d04d623"
    "9da2cf1bee74386f83f3476b3d17f5e781ef5181b8fff8f241dc5f1588fb3b030fe2fed6e4dfc73c0ff51a95f98cfb5b374eb8683c08c609e3cb0fe3047bf060",
    "9c604dfe7dccf34e8dfbe3faf3d3fa218e07f5efb478cfff7843fb4e4be66d350d76d5f48f8a762da82929d9364f40d1b03f60d2b87360a34b1877f6fb304fe0"
    "fcf6a049d395aabf41a7f3999c9415973737b91dbf8bda03a8bfa8a0fe76c3b2fe3f7ca71d8787eae13bed8f8aa7caa2e0c177daadc91f781f15d4dfbc7312f7",
    "d17bf7303f3c6ddc47f7191bfbf93ffddbabc0f74ee7fba3d5cd6cad922d2437e2bbcb1b053abb5aab665c74de0ff03d2a38be37fb3d97173178a4413f797e58"
    "bd6f5ee685cdf6ff6f4fc0d7f533983fb2bb3df83b7cb7d1f9edc17661f958f4f7aa54a5d329eef9fca98df8edfd987bda03a8cfe3535d50ff5bb5ac7d80ef7d",
    "a902dffb9a19de4816050fbef7654dfed01e8c4f7541fd2fe1baf8d045e705203e34befc101fb2070fe243d6e4dfc73cefd4754138bf98d60f71eb6ef47541cf"
    "9efff1de3bc1511afc919a66deb1ac7db881290769d01bda078991eb5483c9b13d265267cac7b253c709b90978bade6cfbf080c1348fb271def84fbffc00c609",
    "4e6f27029b5e6e2db396cd141205b9500cd4b6f79a8a8bf611407d1e9fea825b3f64d6ff9e355c1386fb74bda11d1028a9c60ae5fab153f9dfe238d134df093e"
    "b399bd71a2d3a75eddfb33f0ff8cf0ece2ff936e27b941c5abb5556f391d137347f1d65a07e60de6ae3edb3a3e205e09aae98b5a7acbb2fd015731e520354d95",
    "13471f8a77eafe8008160fd59b597730b291fdfd033847688678b69d13d75c4be79b5c74f5385ccf6737734a331a2dc7ddc3f7507f5181fd01b03fe061ef3145"
    "3f1ff607cc100ff60758933ff03e2ab33a3fee790c1e69d08f9fffd57bf7cedd1f909e80a7ebad9affd57dc646beffa8f81cf0bdd3f99eae07322581532a3991",
    "8fb584c40a1d0b6f6d02df2f1adfbf87c90fce8f53a56f127ff1ce9982f3e3668907e7c759937f1ff33cd46b5466757edcbc8c132e1a1f8271c2f8f2c338c11e"
    "3c182758933facff199fea32ab7dc5373178a4416f1c37c8322329058a632b435384a49a769f53e709f2583c546fba1ff180e16c1f173c16e9c0b8c0e9ed81cf",
    "77dcdb88c6c3c9da4e3777d04bd0898d3d05d6032d607d1ec869d0b2753fd70cd7c4d97daa8695e50625c98c53d7fd24b078a8fe62f1c4a16d861145dd4a4bbc"
    "7d7e10bcf6da5bc0eb4ee7f54e3129c7b9e342dc5795725cfb28bd25f4b22eda0f06bc3e3ed505e5f510ac03d27e877540e3535d601d903d78b00ec89afcfb98",
    "e7a7b5e321267fd2a09f453b70939587fa9a4471f6fa617fdfb6f5fdc357ac12b0be1fb76e60f087676423fbf7f3de057e773ebfaf76535cfcb85d394a064add"
    "ad8ae4f30bb900acef5f80fa3b14ebd67942bf1e8787eaa15fffa878aa2c0a1ef4ebadc9bf8f79de31fd7a5a6c0915d9e67e7dd6b2f6e03b183cd2a07fa03d48",
    "0e47348c14e1069621acebf73f6eb8be5f1e5553ae53a3054456ade7c918ae09c37dbade7c7b70de60b6c6f9df7dfa3ac4f99dde0ec4859d4c3854dcedb17c37"
    "7dd4a8f06965f7c44571fe3ee67968075041db81db96c57726f5c30706e0a9eee5f1bcd9f161148b87ea4d8d0f4736b27d7dcedd6780df1dcfef52d3db386265",
    "7f880f64d6840c5d5ad92ec82efabe631ff33cf03b2aa81f166ce5f7e1c7dd81df1fceefdae7dcede4f7cf80df9dcfef356a7f2dbd52dc6daed12125b24aa5fd"
    "8c3f0bebf1cff25ba8753ae7ceedc7e101afab02bc6e159e2a8b8207bc6e4dfec0ebe3535dd0f597bb108f99120fe23156e1a9b22878108fb126ff3f609e9fd6",
    "8e14267fd2a09fc1fed99b6d4a1a1da57cd890c48ae1bdee60ca6d2dcf972d9b7f7d0183471af403e31c0e8c725815254e141b87629b91aa9cd8392c0fad7279"
    "e7aef52f88a7e77f30014fd75fb01d50ddea2196b37f5d4efff32faf42fbe0f4f641de8e7563d15e2fb3d5f5f9533e6f241b5af6ba603fedff01ed02fc2d",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 92224U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sprdmpF109_info.c) */
