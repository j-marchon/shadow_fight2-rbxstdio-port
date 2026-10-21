// MMDDDDFHOLG$$MDEAJBFLJGP @ RVA 0x3361768

/* WARNING: Removing unreachable block (ram,0x034619c4) */

IGJEEGBBNFC_o *
MMDDDDFHOLG__MDEAJBFLJGP
          (MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,HEFOANCOHDC_o *EIKFGOCCOIE,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_01;
  PHDCILJMEHO_o *pPVar2;
  IGJEEGBBNFC_o *pIVar3;
  uint uVar4;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567a91 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    DAT_04567a91 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
      if (!bVar1) {
        pIVar3 = (IGJEEGBBNFC_o *)0x0;
        goto LAB_03461968;
      }
      if ((IGJEEGBBNFC_o *)local_80.fields._current == (IGJEEGBBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((OLKKAIFGGAK_o *)
             ((IGJEEGBBNFC_Fields *)((long)local_80.fields._current + 0x10))->HAHNEPLFLFD !=
             BCKBBGCOMJD);
    __this_01 = ((IGJEEGBBNFC_Fields *)((long)local_80.fields._current + 0x10))->FNEKKIBOEKE;
    if (__this_01 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
      if (!bVar1) {
        pIVar3 = (IGJEEGBBNFC_o *)0x0;
        uVar4 = 2;
        goto LAB_034618f4;
      }
      if ((IGJEEGBBNFC_o *)local_a0.fields._current == (IGJEEGBBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar2 = ((IGJEEGBBNFC_Fields *)((long)local_a0.fields._current + 0x10))->HAHNEPLFLFD;
      if (pPVar2 == (PHDCILJMEHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((pPVar2->fields).MLPFFJNBKBN != EIKFGOCCOIE);
    uVar4 = 6;
    pIVar3 = (IGJEEGBBNFC_o *)local_a0.fields._current;
LAB_034618f4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
  } while ((uVar4 | 2) == 2);
LAB_03461968:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
  return pIVar3;
}

