// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$KEGLPIKPCOJ @ RVA 0x327063C

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__KEGLPIKPCOJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,bool IBEBJHMKFGE,
               MethodInfo *method)

{
  LHOMEBJDFLD_o *__this_00;
  System_Action_bool__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_0456721a & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_KEGLPIKPCOJ__);
    DAT_0456721a = 1;
  }
  if (IBEBJHMKFGE) {
    __this_00 = KKLJIDJBFEI__HCJABMIHNNA((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
      LHOMEBJDFLD__LBPFHNNCLBA(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__LJBAAMGCKCC(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

