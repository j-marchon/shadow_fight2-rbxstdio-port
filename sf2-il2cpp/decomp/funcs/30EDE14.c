// HOOAAGABMBL$$HNFABLLAKOP @ RVA 0x30EDE14

PALKNJHHCLJ_o *
HOOAAGABMBL__HNFABLLAKOP
          (HOOAAGABMBL_o *__this,int32_t PIDMGHLCFAJ,int32_t EPINGPGECOM,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  PALKNJHHCLJ_o *__this_00;
  HOOAAGABMBL_o *pHVar3;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_01;
  int iVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456640d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__,
                 PIDMGHLCFAJ,EPINGPGECOM);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    FUN_01bab630(&PALKNJHHCLJ_TypeInfo);
    DAT_0456640d = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (PALKNJHHCLJ_o *)thunk_FUN_01bda818(PALKNJHHCLJ_TypeInfo);
  PALKNJHHCLJ___ctor(__this_00,(MethodInfo *)0x0);
  pHVar3 = (__this->fields)._FEDJEGJIGMA_k__BackingField;
  if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (PALKNJHHCLJ_o *)0x0) goto LAB_031edfcc;
  }
  else {
    __this_01 = HOOAAGABMBL__DBONHFEAOEG(pHVar3,false,0x7fffffff,method);
    if (__this_01 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
LAB_031edfcc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    iVar4 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__
                             ), bVar1) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar5 = local_60.fields._current[1].klass;
      if (pIVar5 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          &(pIVar5->_1).implementedInterfaces,(MethodInfo *)0x0);
                    /* try { // try from 031edf1c to 032ee01f has its CatchHandler @ 031edf1c
                       catch() { ... } // from try @ 031edf1c with catch @ 031edf1c
                       catch() { ... } // from try @ 031ee0cc with catch @ 031edf1c
                       catch() { ... } // from try @ 031ee154 with catch @ 031edf1c
                       catch() { ... } // from try @ 031ee15c with catch @ 031edf1c
                       catch() { ... } // from try @ 031ee200 with catch @ 031edf1c */
      if ((iVar2 == (__this->fields)._JDEHPJEIOCI_k__BackingField) &&
         (iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              &pIVar5->static_fields,(MethodInfo *)0x0),
         iVar2 < (__this->fields)._HCHGENFJLHA_k__BackingField)) {
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                            &pIVar5->static_fields,(MethodInfo *)0x0);
        pHVar3 = (__this->fields)._FEDJEGJIGMA_k__BackingField;
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((pHVar3->fields)._HCHGENFJLHA_k__BackingField < iVar2) {
          iVar4 = iVar4 + 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    pHVar3 = (__this->fields)._FEDJEGJIGMA_k__BackingField;
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) goto LAB_031edfcc;
    if ((pHVar3->fields)._JDEHPJEIOCI_k__BackingField ==
        (__this->fields)._JDEHPJEIOCI_k__BackingField) {
      iVar4 = iVar4 + 1;
    }
    if (__this_00 == (PALKNJHHCLJ_o *)0x0) goto LAB_031edfcc;
    if (iVar4 != 0) goto LAB_031edfa4;
  }
  (__this_00->fields).BGHFADDGPAD = 1;
  iVar4 = (__this->fields)._JDEHPJEIOCI_k__BackingField;
LAB_031edfa4:
  (__this_00->fields).HLFBMBHOPMI = iVar4;
  return __this_00;
}

