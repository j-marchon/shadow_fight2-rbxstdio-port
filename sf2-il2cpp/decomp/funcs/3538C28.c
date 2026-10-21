// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$Init @ RVA 0x3538C28

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  BHEDGAKGKPO_StaticFields *pBVar2;
  EOLFEKNCPLM_o **ppEVar3;
  
  if ((DAT_04568ab0 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_8911);
    DAT_04568ab0 = 1;
  }
  ppEVar3 = &(__this->fields).super.MLAAJICBOAD;
  *ppEVar3 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar3,HEHMPFLAEGE);
  __this_00 = (__this->fields)._simpleScroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._medalLabel;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,StringLiteral_8911,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._medalLabel;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar2 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar2->FHIAKPJBBCB).fields.r,(pBVar2->FHIAKPJBBCB).fields.g,
                   (pBVar2->FHIAKPJBBCB).fields.b,(pBVar2->FHIAKPJBBCB).fields.a,pNVar1,
                   (pNVar1->klass->vtable)._23_set_color.method);
                    /* WARNING: Could not recover jumptable at 0x03638d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._19_UpdateContent.methodPtr)
                  (__this,0,(__this->klass->vtable)._19_UpdateContent.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

