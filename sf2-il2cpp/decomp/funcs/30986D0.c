// KIOBDEIAMOO.<>c$$LDMEHMEHANK @ RVA 0x30986D0

void KIOBDEIAMOO_<>c__LDMEHMEHANK
               (KIOBDEIAMOO___c_o *__this,System_Action_LevelPlayInitError__o *h,MethodInfo *method)

{
  if ((DAT_04566100 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566100 = 1;
  }
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__add_OnInitFailed(h,(MethodInfo *)0x0);
  return;
}

