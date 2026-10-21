// LPGPNBGHDBD$$JDEHAMOGEGF @ RVA 0x32294F8

System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *
LPGPNBGHDBD__JDEHAMOGEGF(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  JMDPBFOCHHP_o *pJVar4;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar5;
  JMDPBFOCHHP_ENBCJNLAHAC_array *pJVar6;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566f8d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_ENBCJNLAHAC>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    DAT_04566f8d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar5 = (pJVar4->fields).OFMMMBIIDAE, pJVar5 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) {
    __this_00 = (pJVar5->fields).NPGALOBDIHL;
    __this = (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
    bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)__this_00,
                       Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_ENBCJNLAHAC>__);
    if (!bVar3) {
      if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0)
      goto LAB_033296fc;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                          );
        item = local_50.fields._current;
        if (!bVar3) break;
        if ((JMDPBFOCHHP_ENBCJNLAHAC_o *)local_50.fields._current ==
            (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                          (((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)
                           ((long)local_50.fields._current + 0x10))->ICECFDIHPHN,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Add__;
        if (!bVar3) {
          if (__this == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar6 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pJVar6 == (JMDPBFOCHHP_ENBCJNLAHAC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pJVar6->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pJVar6->m_Items[(int)uVar1] = (JMDPBFOCHHP_ENBCJNLAHAC_o *)item;
            thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    }
    return __this;
  }
LAB_033296fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

