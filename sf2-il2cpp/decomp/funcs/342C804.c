// MatchingDialog$$OnDestroy @ RVA 0x342C804

void MatchingDialog__OnDestroy(MatchingDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  KKLJIDJBFEI_o *pKVar1;
  DCHAJIMIFHP_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568148 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04568148 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RaidBattleChatTabEnable
              (__this_00,true,(MethodInfo *)0x0);
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
       (__this_01 = (pKVar1->fields).super.FNHOHLGNHGN, __this_01 != (DCHAJIMIFHP_o *)0x0)) {
      DCHAJIMIFHP__GMNFJKHEJLO(__this_01,(Il2CppObject *)__this,(MethodInfo *)0x0);
      MatchingDialog__DILGDEAECBG(__this,method_00);
      MatchingDialog__DAKEBOMPALG(__this,method_01);
      MatchingDialog__OJCPMPCFPJM(__this,method_02);
      Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
                ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

