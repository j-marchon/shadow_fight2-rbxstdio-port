// GGLKHCAIGDI$$DDAKFOBLNJL @ RVA 0x33A6ED0

bool GGLKHCAIGDI__DDAKFOBLNJL(GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  BFBONKPKBNL_o *pBVar5;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  ACHLOMELAJE_o *__this_01;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567cf4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567cf4 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pBVar5 = GGLKHCAIGDI__GPGGNMAFOJD(__this,NKCMBEFHFII,method);
  if (pBVar5 == (BFBONKPKBNL_o *)0x0) {
    bVar2 = true;
  }
  else {
    __this_00 = (pBVar5->fields).MIOLFPIJMDH;
    if (__this_00 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        iVar6 = 6;
        goto LAB_034a703c;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pIVar1[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_01 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = ACHLOMELAJE__FCPIAEEKGEL
                        (__this_01,(System_String_o *)((pIVar1[1].klass)->_1).namespaze,
                         (MethodInfo *)0x0);
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&pIVar1[1].monitor
                         ,(MethodInfo *)0x0);
    } while (iVar4 <= iVar3);
    iVar6 = 5;
LAB_034a703c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    bVar2 = iVar6 != 5;
  }
  return bVar2;
}

