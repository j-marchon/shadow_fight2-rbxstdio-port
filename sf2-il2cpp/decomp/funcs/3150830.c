// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$Init @ RVA 0x3150830

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__Init
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,System_String_o *EHNFGMGKCHO,
               int64_t DCDLMCEEOCC,int64_t IPGOFHMGFOI,System_Func_long__string__o *CDBMJENDHFM,
               System_String_o *LAPCDGMAIAI,MethodInfo *method)

{
  bool bVar1;
  System_Func_long__string__o **ppSVar2;
  System_Globalization_NumberFormatInfo_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  ACHLOMELAJE_o *pAVar6;
  System_Func_long__string__o *pSVar7;
  int64_t *__this_01;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  UnityEngine_Vector3_o UVar10;
  
  if ((DAT_04566804 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_22448);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_9281);
    DAT_04566804 = 1;
  }
  (__this->fields).ODEAKOGFMPE = DCDLMCEEOCC;
  (__this->fields).PGGDJIGFIHK = 0;
  (__this->fields).LAJBMFKIADL = true;
  ppSVar2 = &(__this->fields).BHBICCNLODE;
  *ppSVar2 = CDBMJENDHFM;
  thunk_FUN_01c20e04(ppSVar2,CDBMJENDHFM);
  __this_01 = &(__this->fields).BJGBAECJNAD;
  *__this_01 = 0;
  (__this->fields).HGFBBMJNBPI = IPGOFHMGFOI;
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_03250ba8;
  System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
            (__this_00,StringLiteral_167,(MethodInfo *)0x0);
  pNVar9 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0), !bVar1)) {
    if (LAPCDGMAIAI != (System_String_o *)0x0) {
      pSVar3 = System_String__Concat
                         (StringLiteral_22230,LAPCDGMAIAI,StringLiteral_22500,(MethodInfo *)0x0);
      EHNFGMGKCHO = System_String__Format
                              (StringLiteral_22448,(Il2CppObject *)EHNFGMGKCHO,
                               (Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    }
    pNVar9 = (__this->fields).textLabel;
    if (pNVar9 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03250ba8;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar9,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).textLabel;
    if ((pNVar9 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03250ba8;
    UVar10 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).textLabel;
    (__this->fields).LGEHFOCNFGF.fields.x = UVar10.fields.x;
    (__this->fields).LGEHFOCNFGF.fields.y = UVar10.fields.y;
    if ((pNVar9 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03250ba8;
    UVar10.fields.z = 0.0;
    UVar10.fields._0_8_ = (__this->fields).basePos.fields;
    UnityEngine_Transform__set_localPosition(pUVar4,UVar10,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields).moneyCount;
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar6 == (ACHLOMELAJE_o *)0x0) || (pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0))
    goto LAB_03250ba8;
    Nekki_SF2_GUI_Fight_IconAndText__SetIcon(pNVar8,(pAVar6->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).BHBICCNLODE;
    if (pSVar7 == (System_Func_long__string__o *)0x0) goto LAB_03250ba8;
    pNVar8 = (__this->fields).moneyCount;
    pSVar3 = (System_String_o *)
             (*(code *)(pSVar7->fields).super.super.invoke_impl)
                       ((pSVar7->fields).super.super.method_code,(__this->fields).PGGDJIGFIHK,
                        (pSVar7->fields).super.super.method);
    if (pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_03250ba8;
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).moneyCount;
    if ((pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03250ba8;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields).rubyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar8 = (__this->fields).rubyCount;
  pSVar3 = System_Int64__ToString
                     ((int64_t)__this_01,StringLiteral_9281,(System_IFormatProvider_o *)__this_00,
                      (MethodInfo *)0x0);
  if (pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).rubyCount;
    if ((pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03250ba8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

