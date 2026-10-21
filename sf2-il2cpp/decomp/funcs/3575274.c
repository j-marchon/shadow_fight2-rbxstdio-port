// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$GoToBattlePassProfile @ RVA 0x3575274

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__GoToBattlePassProfile
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  MJHMHBEJFBH_o *__this_01;
  
  if ((DAT_04568c79 & 1) == 0) {
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    DAT_04568c79 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  __this_01 = (MJHMHBEJFBH_o *)thunk_FUN_01bda818(MJHMHBEJFBH_TypeInfo);
  MJHMHBEJFBH___ctor(__this_01,4,(MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_00,7,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,false,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

