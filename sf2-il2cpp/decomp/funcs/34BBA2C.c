// SFButton$$CreateAdditionalTouchZone @ RVA 0x34BBA2C

void SFButton__CreateAdditionalTouchZone
               (SFButton_o *__this,UnityEngine_Vector2_o PGFAIJMMOHJ,
               UnityEngine_Vector2_o MJBMLNKAPGC,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *p;
  UnityEngine_CanvasRenderer_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar4;
  
  if ((DAT_045685d9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_11521);
    DAT_045685d9 = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields).AFJEBPELENH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppUVar1 = &(__this->fields).AFJEBPELENH;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,StringLiteral_11521,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_035bbc38;
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_035bbc38;
    UnityEngine_Transform__SetParent(pUVar3,p,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (DAT_0455fa7f == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_035bbc38;
    UnityEngine_Transform__set_localScale
              (pUVar3,(UnityEngine_Vector3_o)
                      (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    pUVar4 = (UnityEngine_RectTransform_o *)
             Util__OHBILOGJCLA<object>(__this_00,Method_Util_OHBILOGJCLA<RectTransform>__);
    *ppUVar1 = pUVar4;
    thunk_FUN_01c20e04(ppUVar1,pUVar4);
    __this_01 = (UnityEngine_CanvasRenderer_o *)
                UnityEngine_GameObject__AddComponent<object>
                          (__this_00,Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    if (__this_01 == (UnityEngine_CanvasRenderer_o *)0x0) goto LAB_035bbc38;
    UnityEngine_CanvasRenderer__set_cullTransparentMesh(__this_01,true,(MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent<object>
              (__this_00,Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
  }
  if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(*ppUVar1,MJBMLNKAPGC,(MethodInfo *)0x0);
    if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(*ppUVar1,PGFAIJMMOHJ,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035bbc38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

