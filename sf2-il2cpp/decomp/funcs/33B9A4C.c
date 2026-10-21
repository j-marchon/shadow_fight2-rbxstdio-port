// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$UpdateDialog @ RVA 0x33B9A4C

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__UpdateDialog
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar2;
  LabelButton_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t *piVar3;
  UnityEngine_UI_Text_o *pUVar4;
  
  if ((DAT_04567d95 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3107);
    DAT_04567d95 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__FCPIAEEKGEL(__this_00,StringLiteral_3107,(MethodInfo *)0x0);
    piVar3 = &(__this->fields).MDNGKCEFAOI;
    *piVar3 = iVar1;
    pUVar4 = (__this->fields).PlayerCurrency;
    pSVar2 = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar2,(pUVar4->klass->vtable)._75_set_text.method);
      __this_01 = (__this->fields).BtnFight;
      if (__this_01 != (LabelButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)__this_01,
                   (__this->fields).NGKGHJDHNCP <= (__this->fields).MDNGKCEFAOI,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

