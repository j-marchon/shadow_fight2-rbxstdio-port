// Nekki.SF2.GUI.Map.ImmunityPanel$$Init @ RVA 0x334A478

void Nekki_SF2_GUI_Map_ImmunityPanel__Init
               (Nekki_SF2_GUI_Map_ImmunityPanel_o *__this,System_String_o *ODHOLHPKBAG,
               float GGMALJLKHHB,MethodInfo *method)

{
  int32_t iVar1;
  AKADDLNNLKH_o *pAVar2;
  HOGPIBHKJDL_o *pHVar3;
  ACHLOMELAJE_o *pAVar4;
  HGLELMDNMMA_o *pHVar5;
  ProgressBar_o *pPVar6;
  undefined4 in_register_00005004;
  
  if ((DAT_045679ed & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045679ed = 1;
  }
  pPVar6 = (__this->fields)._difficultyBar;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
       (pAVar2 = (pAVar4->fields).MLNLNNNNPGH, pAVar2 != (AKADDLNNLKH_o *)0x0)) &&
      (pHVar3 = AKADDLNNLKH__PKFOJKHFKKL(pAVar2,ODHOLHPKBAG,(MethodInfo *)0x0),
      pHVar3 != (HOGPIBHKJDL_o *)0x0)) &&
     ((pHVar5 = (pHVar3->fields)._IHKLCENNHPI_k__BackingField, pHVar5 != (HGLELMDNMMA_o *)0x0 &&
      (pPVar6 != (ProgressBar_o *)0x0)))) {
    (*(pPVar6->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,(ulong)(uint)(float)(pHVar5->fields)._MJMMFOPIGCL_k__BackingField,pPVar6,
               (pPVar6->klass->vtable)._11_SetValueBorders.method);
    pPVar6 = (__this->fields)._difficultyBar;
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
       (pAVar2 = (pAVar4->fields).MLNLNNNNPGH, pAVar2 != (AKADDLNNLKH_o *)0x0)) {
      iVar1 = AKADDLNNLKH__CBGJMMDIFGA(pAVar2,ODHOLHPKBAG,(MethodInfo *)0x0);
      if (pPVar6 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0344a5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pPVar6->klass->vtable)._8_SetValue.methodPtr)
                  ((float)iVar1,CONCAT44(in_register_00005004,GGMALJLKHHB),pPVar6,0,
                   (pPVar6->klass->vtable)._8_SetValue.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

