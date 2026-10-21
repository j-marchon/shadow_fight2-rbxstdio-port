// KIOBDEIAMOO.<>c$$OGEDAKAADIE @ RVA 0x3098798

void KIOBDEIAMOO_<>c__OGEDAKAADIE
               (KIOBDEIAMOO___c_o *__this,System_Action_LevelPlayInitError__o *h,MethodInfo *method)

{
                    /* try { // try from 03198798 to 032987bf has its CatchHandler @ 03198d88 */
  if ((DAT_04566102 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566102 = 1;
  }
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__remove_OnInitFailed(h,(MethodInfo *)0x0);
  return;
}

