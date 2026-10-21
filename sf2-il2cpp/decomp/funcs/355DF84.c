// Nekki.SF2.GUI.Fight.ScreenModel$$CPJNKKGEHHN @ RVA 0x355DF84

void Nekki_SF2_GUI_Fight_ScreenModel__CPJNKKGEHHN
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  MethodInfo *extraout_x1;
  PJKHAJKEHEL_o *pPVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568bac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568bac = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._name;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pPVar2 = (__this->fields)._parameters;
  if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0365e078;
  __this_00 = (pPVar2->fields).JKDOPHDDKIK;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(__this_00,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pPVar2 = (__this->fields)._parameters;
      if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
         (pNVar3 = (__this->fields)._name, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0365e074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,(pPVar2->fields).JKDOPHDDKIK,(pNVar3->klass->vtable)._75_set_text.method);
        return;
      }
      goto LAB_0365e078;
    }
    pPVar2 = (__this->fields)._parameters;
    if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0365e078;
  }
  pNVar3 = (__this->fields)._name;
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(pPVar2->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
    return;
  }
LAB_0365e078:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

