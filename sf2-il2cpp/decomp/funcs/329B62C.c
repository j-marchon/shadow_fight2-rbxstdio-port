// OMANDMDCGMF$$GNPDINFDHKG @ RVA 0x329B62C

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_Bounds__o *
OMANDMDCGMF__GNPDINFDHKG(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *GAOIJJLDHEM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_Bounds__o *__this;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x5;
  UnityEngine_Bounds_array *pUVar4;
  undefined8 uVar5;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_T__o *local_80;
  int32_t iStack_78;
  int32_t iStack_74;
  Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *local_70;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567392 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Bounds>_TypeInfo);
    DAT_04567392 = 1;
    method = extraout_x1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_Bounds__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Bounds>_TypeInfo,method);
  System_Collections_Generic_List<Bounds>___ctor
            (__this,Method_System_Collections_Generic_List<Bounds>__ctor__);
  if ((GAOIJJLDHEM != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (__this_00 = (GAOIJJLDHEM->fields)._NNFPEOCIPFE_k__BackingField,
     __this_00 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_60,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    local_a0.fields._index = local_60.fields._index;
    local_a0.fields._version = local_60.fields._version;
    local_a0.fields._list = local_60.fields._list;
    local_a0.fields._current = local_60.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                        );
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__)
        ;
        return __this;
      }
      OMANDMDCGMF__MLCFOLPGDBO
                ((UnityEngine_Bounds_o *)&local_60,GAOIJJLDHEM,
                 (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_a0.fields._current,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,in_x5);
      lVar2 = Method_System_Collections_Generic_List<Bounds>_Add__;
      if (__this == (System_Collections_Generic_List_Bounds__o *)0x0) break;
      uVar5._0_4_ = local_60.fields._index;
      uVar5._4_4_ = local_60.fields._version;
      local_80 = local_60.fields._list;
      local_70 = (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_60.fields._current;
      iStack_78 = local_60.fields._index;
      iStack_74 = local_60.fields._version;
      pUVar4 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pUVar4 == (UnityEngine_Bounds_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pUVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        *(Il2CppObject **)&pUVar4->m_Items[(int)uVar1].fields.m_Extents.fields.y =
             local_60.fields._current;
        *(undefined8 *)&pUVar4->m_Items[(int)uVar1].fields.m_Center.fields.z = local_60.fields._8_8_
        ;
        *(System_Collections_Generic_List_T__o **)
         &pUVar4->m_Items[(int)uVar1].fields.m_Center.fields = local_60.fields._list;
        _iStack_78 = uVar5;
      }
      else {
        System_Collections_Generic_List<Bounds>__AddWithResize
                  (__this,(UnityEngine_Bounds_o *)&local_60,
                   *(MethodInfo_269FCFC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

