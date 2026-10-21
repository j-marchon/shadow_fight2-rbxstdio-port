// Nekki.SF2.GUI.Fight.ActivePerkModel$$HKDMNNDDAEP @ RVA 0x31C439C

void Nekki_SF2_GUI_Fight_ActivePerkModel__HKDMNNDDAEP
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ActivePerkItemContainer__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_x1;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector3_o UVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566c28 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566c28 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MHHBMNPJOOF;
  if (__this_00 == (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  fVar2 = (__this->fields).KPGBDEPEHJD.fields.x;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ActivePerkItemContainer>_GetEnumerator__);
  fVar3 = 0.0;
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_MoveNext__
                      );
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_Dispose__
                );
      return;
    }
    if ((UnityEngine_Component_o *)local_70.fields._current == (UnityEngine_Component_o *)0x0)
    break;
    *(float *)&((UnityEngine_Component_o *)((long)local_70.fields._current + 0x30))->klass = fVar3;
                    /* try { // try from 032c4490 to 033c4537 has its CatchHandler @ 032c4490
                       catch() { ... } // from try @ 032c4490 with catch @ 032c4490
                       catch() { ... } // from try @ 032c456c with catch @ 032c4490
                       catch() { ... } // from try @ 032c45bc with catch @ 032c4490
                       catch() { ... } // from try @ 032c45e8 with catch @ 032c4490
                       catch() { ... } // from try @ 032c4628 with catch @ 032c4490 */
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)local_70.fields._current,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
      __this_01 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if (__this_01->klass != UnityEngine_RectTransform_TypeInfo) {
      __this_01 = (UnityEngine_RectTransform_o *)0x0;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    fVar3 = fVar2 + fVar3;
    if (bVar1) {
      if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c4538 to 033c453f has its CatchHandler @ 032c45cc */
        FUN_01bab8c8();
      }
      UVar4 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      UVar5 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      fVar3 = fVar3 + UVar4.fields.m_Width * UVar5.fields.x * 0.5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

