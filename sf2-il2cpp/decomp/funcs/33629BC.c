// MMDDDDFHOLG$$ADLPEGELBLH @ RVA 0x33629BC

/* WARNING: Removing unreachable block (ram,0x03462c18) */
/* WARNING: Removing unreachable block (ram,0x03462b68) */

void MMDDDDFHOLG__ADLPEGELBLH
               (MMDDDDFHOLG_o *__this,OLKKAIFGGAK_BJHDMBGMMEP_o *CAAHLIIEIBI,MethodInfo *method)

{
  Il2CppObject *EIKFGOCCOIE;
  bool bVar1;
  EHCCNKFIPPA_o *__this_00;
  System_Collections_Generic_List_IGJEEGBBNFC__o *__this_01;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  PHDCILJMEHO_o *pPVar2;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567a92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04567a92 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (CAAHLIIEIBI != (OLKKAIFGGAK_BJHDMBGMMEP_o *)0x0) {
    __this_00 = MMDDDDFHOLG__KEBKKMPFMBB(__this,(CAAHLIIEIBI->fields).HEMGHNOOJPI,method);
    __this_02 = (CAAHLIIEIBI->fields).INGEFFGPJPB;
    if (__this_02 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      local_70.fields._index = local_a8.fields._index;
      local_70.fields._version = local_a8.fields._version;
      local_70.fields._list = local_a8.fields._list;
      local_70.fields._current = local_a8.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                          );
        EIKFGOCCOIE = local_70.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
          return;
        }
        if (__this_00 == (EHCCNKFIPPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (__this_00->fields)._DEKNAHBMHGA_k__BackingField;
        if (__this_01 == (System_Collections_Generic_List_IGJEEGBBNFC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
        local_90.fields._index = local_a8.fields._index;
        local_90.fields._version = local_a8.fields._version;
        local_90.fields._list = local_a8.fields._list;
        local_90.fields._current = local_a8.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_90,
                                  Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__
                                 ), bVar1) {
          if ((HEFOANCOHDC_o *)local_90.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar2 = *(PHDCILJMEHO_o **)
                    &(((HEFOANCOHDC_Fields *)((long)local_90.fields._current + 0x10))->ICCBEPAFBFI).
                     fields;
          if (pPVar2 == (PHDCILJMEHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((pPVar2->fields).MLPFFJNBKBN == (HEFOANCOHDC_o *)EIKFGOCCOIE) {
            IGJEEGBBNFC__AHJBAPBFEDD
                      ((IGJEEGBBNFC_o *)local_90.fields._current,true,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
        EHCCNKFIPPA__ACHDDKJACPF(__this_00,(HEFOANCOHDC_o *)EIKFGOCCOIE,false,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

