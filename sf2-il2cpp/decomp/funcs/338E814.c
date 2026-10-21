// Nekki.SF2.GUI.Fight.TextLine$$Init @ RVA 0x338E814

void Nekki_SF2_GUI_Fight_TextLine__Init
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,System_String_o *EHNFGMGKCHO,
               System_String_o *CJNHFNHJHPE,System_String_o *LAPCDGMAIAI,
               System_Nullable_Color__o *IOHGBEHDHDP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *arg1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o **ppSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Color_o UVar6;
  
  if ((DAT_04567c04 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_22448);
    FUN_01bab630(&StringLiteral_22500);
    DAT_04567c04 = 1;
  }
  ppSVar3 = &(__this->fields).CFJPINKJPOD;
  *ppSVar3 = CJNHFNHJHPE;
  (__this->fields).LAJBMFKIADL = true;
  thunk_FUN_01c20e04(ppSVar3,CJNHFNHJHPE);
  pNVar4 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0), !bVar1)) {
    if (LAPCDGMAIAI != (System_String_o *)0x0) {
      arg1 = System_String__Concat
                       (StringLiteral_22230,LAPCDGMAIAI,StringLiteral_22500,(MethodInfo *)0x0);
      EHNFGMGKCHO = System_String__Format
                              (StringLiteral_22448,(Il2CppObject *)EHNFGMGKCHO,(Il2CppObject *)arg1,
                               (MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields).textLabel;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0348ea54;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0348ea54;
    UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).textLabel;
    (__this->fields).LGEHFOCNFGF.fields.x = UVar5.fields.x;
    (__this->fields).LGEHFOCNFGF.fields.y = UVar5.fields.y;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0348ea54;
    UVar5.fields.z = 0.0;
    UVar5.fields._0_8_ = (__this->fields).basePos.fields;
    UnityEngine_Transform__set_localPosition(pUVar2,UVar5,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).statValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields).statValue;
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
              (pNVar4,*ppSVar3,(pNVar4->klass->vtable)._75_set_text.method);
    if ((IOHGBEHDHDP->fields).hasValue != false) {
      pNVar4 = (__this->fields).statValue;
      UVar6 = System_Nullable<Color>__get_Value
                        (IOHGBEHDHDP,Method_System_Nullable<Color>_get_Value__);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0348ea54;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                (UVar6.fields.r,UVar6.fields.g,UVar6.fields.b,UVar6.fields.a,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
    }
    pNVar4 = (__this->fields).statValue;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0348ea54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

