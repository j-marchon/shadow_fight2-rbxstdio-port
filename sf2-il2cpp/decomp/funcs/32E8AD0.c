// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$Init @ RVA 0x32E8AD0

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,
               EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  EOLFEKNCPLM_o **ppEVar3;
  
  if ((DAT_04567628 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_20390);
    DAT_04567628 = 1;
  }
  ppEVar3 = &(__this->fields).super.MLAAJICBOAD;
  *ppEVar3 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar3,HEHMPFLAEGE);
  __this_00 = (__this->fields)._simpleScroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._header;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar1 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                ((pBVar1->FHIAKPJBBCB).fields.r,(pBVar1->FHIAKPJBBCB).fields.g,
                 (pBVar1->FHIAKPJBBCB).fields.b,(pBVar1->FHIAKPJBBCB).fields.a,pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      pNVar2 = (__this->fields)._header;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_20390,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x033e8bac. Too many branches */
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

