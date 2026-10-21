// Nekki.SF2.GUI.Dialogs.BaseDialog$$EJHAPHAHMHG @ RVA 0x33AFF9C

void Nekki_SF2_GUI_Dialogs_BaseDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  BHEDGAKGKPO_StaticFields *pBVar2;
  
  if ((DAT_04567d41 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567d41 = 1;
  }
  pNVar1 = (__this->fields)._header;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,0x98,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._header;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar2 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar2->KPJHDEIJPAN).fields.r,(pBVar2->KPJHDEIJPAN).fields.g,
                 (pBVar2->KPJHDEIJPAN).fields.b,(pBVar2->KPJHDEIJPAN).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._header;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        if ((__this->fields).FCBFEJDLODF == false) {
          (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                    (pNVar1,EHNFGMGKCHO,(pNVar1->klass->vtable)._75_set_text.method);
        }
        else {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,EHNFGMGKCHO,(MethodInfo *)0x0);
        }
                    /* WARNING: Could not recover jumptable at 0x034b0078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._24_UpdateHeaderPosition.methodPtr)
                  (__this,(__this->klass->vtable)._24_UpdateHeaderPosition.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

