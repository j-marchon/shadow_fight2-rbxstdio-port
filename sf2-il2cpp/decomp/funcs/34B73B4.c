// OFHNGNKMJGM.<>c$$MIGBHIIKNKK @ RVA 0x34B73B4

void OFHNGNKMJGM_<>c__MIGBHIIKNKK
               (OFHNGNKMJGM___c_o *__this,System_Action_LevelPlayImpressionData__o *h,
               MethodInfo *method)

{
  if ((DAT_04568597 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04568597 = 1;
  }
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__remove_OnImpressionDataReady(h,(MethodInfo *)0x0);
  return;
}

