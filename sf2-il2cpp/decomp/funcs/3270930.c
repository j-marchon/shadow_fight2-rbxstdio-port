// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$GPONFGNPPIB @ RVA 0x3270930

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GPONFGNPPIB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  FFHKCJAOPLI_o *__this_01;
  
  if ((DAT_04567221 & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    DAT_04567221 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  __this_01 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
  FFHKCJAOPLI___ctor(__this_01,8,(HOOAAGABMBL_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                     (MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_00,4,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,true,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

