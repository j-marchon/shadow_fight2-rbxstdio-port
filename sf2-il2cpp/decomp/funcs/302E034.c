// Nekki.SF2.GUI.SimpleScroll$$PMAAPFAKLNJ @ RVA 0x302E034

void Nekki_SF2_GUI_SimpleScroll__PMAAPFAKLNJ
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  UnityEngine_Transform_o *x;
  System_Collections_Generic_List_object__o *pSVar3;
  UnityEngine_Vector3_array *verts4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_BaseScrollItem_c *pNVar4;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *x_00;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Rect_o r2;
  UnityEngine_Vector2_o GONFCLMJCFJ;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565cd1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565cd1 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  bVar2 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(__this,method);
  if (bVar2) {
    x_00 = (__this->fields).MOKFCILEKDG;
    pUVar5 = (__this->fields).super.m_Viewport;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0
                      );
    if (bVar2) {
      pUVar5 = (__this->fields).super.m_Content;
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312e37c;
      x = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).super.m_Viewport;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      method_01 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0)
      ;
      if (bVar2) {
        UVar6 = Nekki_SF2_GUI_SimpleScroll__DJPCFEGDNJN(__this,method_00);
        pSVar3 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
        if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,pSVar3,
                     Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                              );
            pIVar1 = local_70.fields._current;
            if (!bVar2) break;
            if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current ==
                (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar5 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                               ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current,
                                (MethodInfo *)0x0);
            UVar7 = Nekki_SF2_GUI_SimpleScroll__NEMAMJHLMKI(__this,pUVar5,method_01);
            UVar7.fields.y = (float)((ulong)UVar7.fields >> 0x20);
            GONFCLMJCFJ.fields.x = UVar6.fields.x;
            GONFCLMJCFJ.fields.y = (float)((ulong)UVar6.fields >> 0x20);
            bVar2 = Util__DDGOAPOKLHP(UVar7,GONFCLMJCFJ,(MethodInfo *)0x0);
            pNVar4 = (Nekki_SF2_GUI_BaseScrollItem_c *)pIVar1->klass;
            method_01 = (pNVar4->vtable)._47_EnableVisibility.method;
            (*(pNVar4->vtable)._47_EnableVisibility.methodPtr)(pIVar1,(ulong)bVar2);
          }
          goto LAB_0312e350;
        }
        goto LAB_0312e37c;
      }
    }
    verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
    r2 = UnityEngine_TransformExtensions__GetWorldRect
                   ((UnityEngine_RectTransform_o *)(__this->fields).MOKFCILEKDG,verts4,
                    (MethodInfo *)0x0);
    pSVar3 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_0312e37c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,pSVar3,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      pIVar1 = local_70.fields._current;
      if (!bVar2) break;
      if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar5 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                         ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current,
                          (MethodInfo *)0x0);
      bVar2 = UnityEngine_TransformExtensions__IsIntersects(pUVar5,r2,verts4,(MethodInfo *)0x0);
      pNVar4 = (Nekki_SF2_GUI_BaseScrollItem_c *)pIVar1->klass;
      (*(pNVar4->vtable)._47_EnableVisibility.methodPtr)
                (pIVar1,(ulong)bVar2,(pNVar4->vtable)._47_EnableVisibility.method);
    }
  }
  else {
    pSVar3 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0312e37c;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,pSVar3,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar2) {
      if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(((Nekki_SF2_GUI_BaseScrollItem_c *)(local_70.fields._current)->klass)->vtable).
        _47_EnableVisibility.methodPtr)
                (local_70.fields._current,1,
                 (((Nekki_SF2_GUI_BaseScrollItem_c *)(local_70.fields._current)->klass)->vtable).
                 _47_EnableVisibility.method);
    }
  }
LAB_0312e350:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
  return;
}

