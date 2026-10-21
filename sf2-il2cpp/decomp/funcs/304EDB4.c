// Nekki.SF2.GUI.Map.MapCurrencyPanel$$OnDestroy @ RVA 0x304EDB4

void Nekki_SF2_GUI_Map_MapCurrencyPanel__OnDestroy
               (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *__this,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e35 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapCurrencyPanel_MMCHECDCGKF__);
    FUN_01bab630(&Util_TypeInfo);
    DAT_04565e35 = 1;
    method = extraout_x1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__LJDDDMFPMDF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._buttonView;
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0314eea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._6_OnDestroyByPanel.methodPtr)
                (pNVar1,(pNVar1->klass->vtable)._6_OnDestroyByPanel.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

