// Nekki.SF2.GUI.SimpleScroll$$ODFDNFGEDDK @ RVA 0x302DA24

void Nekki_SF2_GUI_SimpleScroll__ODFDNFGEDDK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Object_o *__this_03;
  MethodInfo *method_00;
  bool bVar5;
  UnityEngine_RectTransform_o *__this_04;
  ulong uVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04565cce & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform___TypeInfo);
    FUN_01bab630(&StringLiteral_15951);
    DAT_04565cce = 1;
  }
  if (((*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0') &&
      (*(char *)&(__this->fields)._visibilityChecker == '\0')) ||
     ((__this->fields).GNMNFMOHDMG.fields != (UnityEngine_Vector2_Fields)0x0)) {
    return;
  }
  pUVar1 = &(__this->fields).GNMNFMOHDMG;
  UVar3 = (UnityEngine_Vector2_Fields)FUN_01bab718(UnityEngine_RectTransform___TypeInfo,2);
  (__this->fields).GNMNFMOHDMG.fields = UVar3;
  thunk_FUN_01c20e04(pUVar1,UVar3);
  uVar6 = 0;
  bVar5 = true;
  do {
    UVar3 = pUVar1->fields;
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (pIVar4 = UnityEngine_GameObject__AddComponent<object>
                           (__this_00,Method_UnityEngine_GameObject_AddComponent<RectTransform>__),
       UVar3 == (UnityEngine_Vector2_Fields)0x0)) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) {
LAB_0312dc10:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(Il2CppObject **)((long)UVar3 + uVar6 * 8 + 0x20) = pIVar4;
    thunk_FUN_01c20e04();
    UVar3 = pUVar1->fields;
    if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) goto LAB_0312dc10;
    __this_01 = *(UnityEngine_Transform_o **)((long)UVar3 + uVar6 * 8 + 0x20);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
LAB_0312dc0c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Transform__SetParent
              (__this_01,(UnityEngine_Transform_o *)(__this->fields).super.m_Content,false,
               (MethodInfo *)0x0);
    UVar3 = (__this->fields).GNMNFMOHDMG.fields;
    if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) goto LAB_0312dc10;
    __this_02 = (__this->fields).super.m_Viewport;
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dc0c;
    __this_04 = *(UnityEngine_RectTransform_o **)((long)UVar3 + uVar6 * 8 + 0x20);
    UVar7 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dc0c;
    UnityEngine_RectTransform__set_sizeDelta
              (__this_04,(UnityEngine_Vector2_o)UVar7.fields._8_8_,(MethodInfo *)0x0);
    UVar3 = pUVar1->fields;
    if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) goto LAB_0312dc10;
    __this_03 = *(UnityEngine_Object_o **)((long)UVar3 + uVar6 * 8 + 0x20);
    if (__this_03 == (UnityEngine_Object_o *)0x0) goto LAB_0312dc0c;
    UnityEngine_Object__set_name(__this_03,StringLiteral_15951,(MethodInfo *)0x0);
    uVar6 = 1;
    bVar2 = !bVar5;
    bVar5 = false;
    if (bVar2) {
      Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD(__this,method_00);
      return;
    }
  } while( true );
}

