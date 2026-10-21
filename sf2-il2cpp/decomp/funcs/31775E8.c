// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerEquipmentView$$Init @ RVA 0x31775E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *__this,
               EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  BHEDGAKGKPO_StaticFields *pBVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  EOLFEKNCPLM_o **ppEVar3;
  
  if ((DAT_0456695c & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_20389);
    DAT_0456695c = 1;
  }
  ppEVar3 = &(__this->fields).super.MLAAJICBOAD;
  *ppEVar3 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar3,HEHMPFLAEGE);
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
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_20389,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

