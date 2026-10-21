// Nekki.SF2.GUI.Fight.ValueLine$$Init @ RVA 0x30DEED4

void Nekki_SF2_GUI_Fight_ValueLine__Init
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,System_String_o *EHNFGMGKCHO,
               int64_t CJNHFNHJHPE,System_Nullable_Color__o *IOHGBEHDHDP,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_NumberFormatInfo_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *CJNHFNHJHPE_00;
  UnityEngine_GameObject_o *__this_01;
  int64_t *__this_02;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Vector3_o UVar5;
  
  if ((DAT_0456638b & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_9281);
    DAT_0456638b = 1;
  }
  __this_02 = &(__this->fields).MCFPIEOBLLM;
  *__this_02 = 0;
  (__this->fields).LAJBMFKIADL = true;
  (__this->fields).CFJPINKJPOD = CJNHFNHJHPE;
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_031df104;
  System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
            (__this_00,StringLiteral_167,(MethodInfo *)0x0);
  pNVar4 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0), !bVar1)) {
    pNVar4 = (__this->fields).textLabel;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_031df104;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_031df104;
    UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    (__this->fields).LGEHFOCNFGF.fields.x = UVar5.fields.x;
    (__this->fields).LGEHFOCNFGF.fields.y = UVar5.fields.y;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_031df104;
    UVar5.fields.z = 0.0;
    UVar5.fields._0_8_ = (__this->fields).basePos.fields;
    UnityEngine_Transform__set_localPosition(pUVar2,UVar5,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).valueLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031df058 to 032df1cb has its CatchHandler @ 031df058
                       catch() { ... } // from try @ 031df058 with catch @ 031df058
                       catch() { ... } // from try @ 031df2e8 with catch @ 031df058
                       catch() { ... } // from try @ 031df3c0 with catch @ 031df058
                       catch() { ... } // from try @ 031df3c8 with catch @ 031df058
                       catch() { ... } // from try @ 031df484 with catch @ 031df058 */
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).valueLabel;
  CJNHFNHJHPE_00 =
       System_Int64__ToString
                 ((int64_t)__this_02,StringLiteral_9281,(System_IFormatProvider_o *)__this_00,
                  (MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if ((IOHGBEHDHDP->fields).hasValue != false) {
      pNVar3 = (__this->fields).valueLabel;
      EFJKPCADGJH = System_Nullable<Color>__get_Value
                              (IOHGBEHDHDP,Method_System_Nullable<Color>_get_Value__);
      if (pNVar3 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_031df104;
      Nekki_SF2_GUI_Fight_IconAndText__SetTextColor(pNVar3,EFJKPCADGJH,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).valueLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031df104:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

