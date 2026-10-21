// Nekki.SF2.GUI.SimpleScroll$$MOKNJIIEIMG @ RVA 0x302CB58

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  UnityEngine_Vector3_array *verts4;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *t1;
  System_IndexOutOfRangeException_o *__this_01;
  System_String_o *message;
  undefined8 uVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Rect_o UVar11;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  
  if ((DAT_04565cdd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565cdd = 1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  UVar10 = UnityEngine_TransformExtensions__GetWorldRect
                     ((__this->fields).super.m_Viewport,verts4,(MethodInfo *)0x0);
  fVar7 = UVar10.fields.m_Height * 0.5;
  fVar8 = UVar10.fields.m_YMin + fVar7;
  fVar9 = fVar8;
  if ((__this->fields).super.m_Vertical != false) {
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
    fVar9 = fVar7 + fVar8;
    if (!bVar3) {
      fVar9 = fVar8;
    }
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,__this_00,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  local_a0.fields._index = local_b8.fields._index;
  local_a0.fields._version = local_b8.fields._version;
  local_a0.fields._list = local_b8.fields._list;
  local_a0.fields._current = local_b8.fields._current;
  fVar7 = 3.4028235e+38;
  pNVar5 = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    pIVar2 = local_a0.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      return pNVar5;
    }
    if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_a0.fields._current ==
        (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) break;
    t1 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                   ((Nekki_SF2_GUI_BaseScrollItem_o *)local_a0.fields._current,(MethodInfo *)0x0);
    UVar11 = UnityEngine_TransformExtensions__GetWorldRect(t1,verts4,(MethodInfo *)0x0);
    if (((__this->fields).super.m_Vertical == false) ||
       (bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_01), !bVar3)) {
      sVar1 = (short)(__this->fields).POPINJOHFLF;
      if (sVar1 == 0) {
        fVar6 = UVar11.fields.m_XMin + UVar11.fields.m_Width * 0.5;
        fVar8 = UVar10.fields.m_XMin + UVar10.fields.m_Width * 0.5;
      }
      else {
        if (sVar1 != 1) {
          thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
          __this_01 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
          System_IndexOutOfRangeException___ctor(__this_01,message,(MethodInfo *)0x0);
          uVar4 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_01,uVar4);
        }
        fVar6 = UVar11.fields.m_YMin + UVar11.fields.m_Height * 0.5;
        fVar8 = fVar9;
      }
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar6 = fVar6 - fVar8;
    }
    else {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar6 = (UVar11.fields.m_Height + UVar11.fields.m_YMin) - fVar9;
    }
    if (ABS(fVar6) <= fVar7) {
      fVar7 = ABS(fVar6);
      pNVar5 = (Nekki_SF2_GUI_BaseScrollItem_o *)pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

