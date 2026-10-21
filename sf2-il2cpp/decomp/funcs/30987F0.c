// KIOBDEIAMOO.<>c$$MIGBHIIKNKK @ RVA 0x30987F0

void KIOBDEIAMOO_<>c__MIGBHIIKNKK
               (KIOBDEIAMOO___c_o *__this,System_Action_LevelPlayConfiguration__o *h,
               MethodInfo *method)

{
                    /* try { // try from 031987f4 to 0329881b has its CatchHandler @ 03198d80 */
  if ((DAT_04566103 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566103 = 1;
  }
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__remove_OnInitSuccess(h,(MethodInfo *)0x0);
  return;
}

