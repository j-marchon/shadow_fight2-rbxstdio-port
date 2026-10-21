// MMDDDDFHOLG$$OCJCMHLABBF @ RVA 0x3361544

void MMDDDDFHOLG__OCJCMHLABBF(MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  EHCCNKFIPPA_o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_02;
  MethodInfo *in_x3;
  PJKHAJKEHEL_o *pPVar4;
  EHCCNKFIPPA_array *pEVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567a9c & 1) == 0) {
    FUN_01bab630(&EHCCNKFIPPA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04567a9c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  MMDDDDFHOLG__HMDJFLDLPMN(__this,BCKBBGCOMJD,method);
  __this_00 = (EHCCNKFIPPA_o *)thunk_FUN_01bda818(EHCCNKFIPPA_TypeInfo);
  EHCCNKFIPPA___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (EHCCNKFIPPA_o *)0x0) {
    (__this_00->fields)._HKPEJNKNEGG_k__BackingField = BCKBBGCOMJD;
    thunk_FUN_01c20e04(&__this_00->fields,BCKBBGCOMJD);
    if (((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
        (pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar4 != (PJKHAJKEHEL_o *)0x0)) &&
       (__this_01 = (pPVar4->fields).INGEFFGPJPB,
       __this_01 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                          );
        if (!bVar3) break;
        MMDDDDFHOLG__GJMDFCNLBGE
                  ((MMDDDDFHOLG_o *)(ulong)bVar3,__this_00,(HEFOANCOHDC_o *)local_48.fields._current
                   ,in_x3);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__)
      ;
      EHCCNKFIPPA__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<EHCCNKFIPPA>_Add__;
      __this_02 = (__this->fields).PNGAKAPODKB;
      if (__this_02 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
        pEVar5 = (__this_02->fields)._items;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (pEVar5 != (EHCCNKFIPPA_array *)0x0) {
          uVar1 = (__this_02->fields)._size;
          if (uVar1 < (uint)pEVar5->max_length) {
            (__this_02->fields)._size = uVar1 + 1;
            pEVar5->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pEVar5->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

