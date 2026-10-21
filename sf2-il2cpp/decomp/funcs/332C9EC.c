// Nekki.SF2.GUI.Fight.ComboModel$$ELOPIECONBH @ RVA 0x332C9EC

void Nekki_SF2_GUI_Fight_ComboModel__ELOPIECONBH
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector3_o UVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045678d0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    DAT_045678d0 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EGHLGEIJLAM;
  if (__this_00 == (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  fVar5 = (__this->fields).JOHMFEFNLPI.fields.y;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                      );
    pIVar2 = local_70.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
      return;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_70.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                          ((Nekki_SF2_GUI_Fight_ComboItem_o *)local_70.fields._current[1].klass,
                           (MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) break;
    UVar9 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    UVar8.fields.x = UVar9.fields.x;
    if (*(char *)((long)&pIVar2[1].monitor + 4) == '\0') {
      UVar9 = UnityEngine_Transform__get_localPosition
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      fVar5 = UVar9.fields.y;
      UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.m_Height;
      UVar8 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
      fVar1 = UVar8.fields.y;
    }
    else {
      if (fVar5 != 0.0) {
        UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        UVar7 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
        fVar5 = fVar5 - UVar6.fields.m_Height * UVar7.fields.y;
      }
      UVar8.fields.y = fVar5;
      Nekki_SF2_GUI_Fight_ComboModel__MoveTo
                (__this,(Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar2[1].klass,UVar8,0.0,in_x2);
      UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.m_Height;
      UVar8 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
      fVar1 = UVar8.fields.y;
    }
    fVar5 = (fVar5 - fVar4 * fVar1) + -40.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

