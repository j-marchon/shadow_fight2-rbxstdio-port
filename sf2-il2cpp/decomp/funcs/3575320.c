// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$ALBHLGLKFFI @ RVA 0x3575320

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__ALBHLGLKFFI
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_40 [4];
  int local_3c;
  
  if ((DAT_04568c7a & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&System_Nullable<int>_TypeInfo);
    DAT_04568c7a = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
     (pIVar1 = (System_Nullable<int>_TypeInfo->_1).element_class, IMMNELPBGIF->klass != pIVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF,pIVar1);
  }
  auVar2 = thunk_FUN_01bda974(IMMNELPBGIF,System_Nullable<int>_TypeInfo,auStack_40);
  if (local_3c != 0) {
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__GoToBattlePassProfile(auVar2._0_8_,auVar2._8_8_);
  }
  return;
}

