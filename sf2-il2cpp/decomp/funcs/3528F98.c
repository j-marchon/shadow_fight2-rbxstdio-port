// Nekki.SF2.GUI.DebugModules.ScreenDebug$$GIENGNEGHPJ @ RVA 0x3528F98

void Nekki_SF2_GUI_DebugModules_ScreenDebug__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,MethodInfo *method)

{
  int32_t capacity;
  bool bVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_Stack_Text__o *pSVar4;
  UnityEngine_RectTransform_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__Text__o **ppSVar5;
  NDPMLPGANCI_o *__this_02;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  UnityEngine_Transform_o *__this_03;
  uint uVar6;
  long lVar7;
  Nekki_SF2_GUI_DebugModules_ScreenDebug_o *pNVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Rect_o UVar10;
  
  if ((DAT_04568a0a & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Text>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Text>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ScreenDebug_OKNDDEJODAJ__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>_Push__);
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>_get_Count__);
    DAT_04568a0a = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar8 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)__this,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__Destroy((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    }
  }
  Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields,__this);
  pUVar2 = (__this->fields)._lineHolder;
  if ((pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)pUVar2,true,
                          Method_UnityEngine_Component_GetComponentsInChildren<Text>__),
     pSVar3 != (System_Object_array *)0x0)) {
    lVar7 = pSVar3->max_length;
    uVar6 = (uint)lVar7;
    while( true ) {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) break;
      if ((uint)lVar7 <= uVar6) goto LAB_03629238;
      pSVar4 = (__this->fields).KAABNEFOJHJ;
      if (pSVar4 == (System_Collections_Generic_Stack_Text__o *)0x0) goto LAB_03629234;
      System_Collections_Generic_Stack<object>__Push
                ((System_Collections_Generic_Stack_T__o *)pSVar4,pSVar3->m_Items[uVar6],
                 Method_System_Collections_Generic_Stack<Text>_Push__);
      lVar7 = pSVar3->max_length;
    }
    if (lVar7 != 0) {
      if ((uint)lVar7 == 0) {
LAB_03629238:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (((UnityEngine_UI_Graphic_o *)pSVar3->m_Items[0] == (UnityEngine_UI_Graphic_o *)0x0) ||
         (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)pSVar3->m_Items[0],(MethodInfo *)0x0),
         __this_00 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03629234;
      UVar10 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      (__this->fields).ELCCJMINMNI = UVar10.fields.m_Height;
    }
    pSVar4 = (__this->fields).KAABNEFOJHJ;
    if (pSVar4 != (System_Collections_Generic_Stack_Text__o *)0x0) {
      capacity = (pSVar4->fields)._size;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Text>_TypeInfo);
      System_Collections_Generic_Dictionary<object,_object>___ctor
                (__this_01,capacity,
                 Method_System_Collections_Generic_Dictionary<string,_Text>__ctor__);
      ppSVar5 = &(__this->fields).FEHFKJKABDN;
      *ppSVar5 = (System_Collections_Generic_Dictionary_string__Text__o *)__this_01;
      thunk_FUN_01c20e04(ppSVar5,__this_01);
      __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                    thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__IIOPONEHEGP(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._lineHolder;
        if ((pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
           (__this_03 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
           __this_03 != (UnityEngine_Transform_o *)0x0)) {
          UVar9 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
          (__this->fields).HAFEGAEOPGM = UVar9.fields.y + (__this->fields).ELCCJMINMNI;
          return;
        }
      }
    }
  }
LAB_03629234:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

