// MGNPHCAAEIO.HLAKGGFFNAO$$EFOIDADNDPJ @ RVA 0x340FF7C

void MGNPHCAAEIO_HLAKGGFFNAO__EFOIDADNDPJ
               (MGNPHCAAEIO_HLAKGGFFNAO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  HBNENINHPGF_o *__this_01;
  System_Collections_Generic_List_HBNENINHPGF__o *pSVar5;
  HBNENINHPGF_array *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568075 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&HBNENINHPGF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    DAT_04568075 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_01 = (HBNENINHPGF_o *)thunk_FUN_01bda818(HBNENINHPGF_TypeInfo);
  HBNENINHPGF___ctor(__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
  pSVar5 = (__this->fields).DIELINNGEBJ;
  if (pSVar5 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    local_60.fields._current = local_78.fields._current;
    bVar2 = true;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__
                             ), __this_00 = local_60.fields._current, bVar4) {
      if ((HBNENINHPGF_o *)local_60.fields._current == (HBNENINHPGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_01 == (HBNENINHPGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__op_Equality
                        (((HBNENINHPGF_Fields *)((long)local_60.fields._current + 0x10))->
                         _COIPKAKHDFP_k__BackingField,
                         (__this_01->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (bVar4) {
        HBNENINHPGF__FMOHGOEPAPH((HBNENINHPGF_o *)__this_00,__this_01,(MethodInfo *)0x0);
        bVar2 = false;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    lVar3 = Method_System_Collections_Generic_List<HBNENINHPGF>_Add__;
    if (!bVar2) {
      return;
    }
    pSVar5 = (__this->fields).DIELINNGEBJ;
    if (pSVar5 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
      pHVar6 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pHVar6 != (HBNENINHPGF_array *)0x0) {
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pHVar6->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pHVar6->m_Items[(int)uVar1] = __this_01;
          thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,__this_01);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

