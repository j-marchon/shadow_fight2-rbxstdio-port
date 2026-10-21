// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetAllRewards @ RVA 0x3592394

void Nekki_SF2_GUI_Profile_BattlePassPanel__GetAllRewards
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  System_Action_o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d7d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_GNFAMCPHEEC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d7d = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    EGMONPGHHDP__MJPJLODOPOH(__this_00,-1,BLMFLPJJMPF,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

