// Nekki.SF2.GUI.Shop.ParameterScrollItem$$APEIAAPLOHN @ RVA 0x303153C

void Nekki_SF2_GUI_Shop_ParameterScrollItem__APEIAAPLOHN
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t KEFILECBPMF,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04565d01 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04565d01 = 1;
  }
  (__this->fields).PDJAHMFOPPE = KEFILECBPMF;
  pNVar2 = (__this->fields)._value;
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = BJFCCEEPHOF__POMAAOILGAL(KEFILECBPMF,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031315c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

