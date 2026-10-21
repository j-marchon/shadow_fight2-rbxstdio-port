// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$FCLPCELKIOC @ RVA 0x32701F8

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__FCLPCELKIOC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  LHOMEBJDFLD_o *__this_00;
  System_Action_bool__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_04567215 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_KEGLPIKPCOJ__);
    DAT_04567215 = 1;
  }
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
    if ((pKVar1->fields).super._KKNAFGJEFJG_k__BackingField != false) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__LJBAAMGCKCC(__this,method_00);
      return;
    }
    __this_00 = KKLJIDJBFEI__HCJABMIHNNA((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
      LHOMEBJDFLD__CPKBBJHHFDC(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

