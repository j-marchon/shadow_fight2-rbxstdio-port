// LevelPlaySample$$OnDisable @ RVA 0x322B224

void LevelPlaySample__OnDisable(LevelPlaySample_o *__this,MethodInfo *method)

{
  Unity_Services_LevelPlay_LevelPlayBannerAd_o *__this_00;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *__this_01;
  
  __this_00 = (__this->fields).KIAJDAOCCHI;
  if (__this_00 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
    Unity_Services_LevelPlay_LevelPlayBannerAd__DestroyAd(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).AFFAMBLJIDN;
  if (__this_01 != (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) {
    Unity_Services_LevelPlay_LevelPlayInterstitialAd__DestroyAd(__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}

