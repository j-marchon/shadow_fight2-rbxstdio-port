// HOOAAGABMBL$$CIBHICEHBJE @ RVA 0x30E882C

HOOAAGABMBL_o *
HOOAAGABMBL__CIBHICEHBJE
          (HOOAAGABMBL_o *__this,int32_t DAFGGOCCGDL,bool IIPIJFMFAKM,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE;
  PONNKDFAMFM_o *pPVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  HOOAAGABMBL_o *pHVar6;
  MethodInfo *method_00;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar7;
  PONNKDFAMFM_o *pPVar8;
  PONNKDFAMFM_o *pPVar9;
  PONNKDFAMFM_o *JGANIDFNOAF;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566402 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    DAT_04566402 = 1;
  }
  method_00 = (MethodInfo *)0x7fffffff;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = HOOAAGABMBL__DBONHFEAOEG(__this,false,0x7fffffff,method);
  if (__this_00 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
  bVar3 = false;
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  pPVar8 = (PONNKDFAMFM_o *)0x0;
  pPVar2 = (PONNKDFAMFM_o *)0x0;
  do {
    JGANIDFNOAF = pPVar2;
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    pPVar2 = (PONNKDFAMFM_o *)local_80.fields._current;
    pPVar9 = pPVar8;
    if (!bVar4) {
      JGANIDFNOAF = (PONNKDFAMFM_o *)0x0;
      break;
    }
    if ((PONNKDFAMFM_o *)local_80.fields._current == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar7 = ((PONNKDFAMFM_Fields *)((long)local_80.fields._current + 0x10))->JDHAHDALAOA;
    if (pPVar7 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar1 = &(pPVar7->fields).NOPGBJNLFHM;
    CJNHFNHJHPE = pCVar1->fields;
    if (bVar3) {
      bVar3 = true;
    }
    else {
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)pCVar1->fields,
                         (MethodInfo *)0x0);
      bVar3 = iVar5 == DAFGGOCCGDL;
      pPVar9 = pPVar2;
      if (!bVar3) {
        pPVar9 = pPVar8;
      }
    }
    method_00 = (MethodInfo *)0x0;
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE,
                       (MethodInfo *)0x0);
    pPVar8 = pPVar9;
  } while (iVar5 <= DAFGGOCCGDL);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
  if (pPVar9 == (PONNKDFAMFM_o *)0x0 && JGANIDFNOAF == (PONNKDFAMFM_o *)0x0) {
    pHVar6 = (HOOAAGABMBL_o *)0x0;
  }
  else {
    if (!IIPIJFMFAKM) {
      JGANIDFNOAF = pPVar9;
    }
    pHVar6 = HOOAAGABMBL__KGJLMGPGJEI(__this,JGANIDFNOAF,method_00);
  }
  return pHVar6;
}

