// OPNFCOGALLI$$EIEAFNFGOHG @ RVA 0x310725C

void OPNFCOGALLI__EIEAFNFGOHG(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  Il2CppObject *LEAMIBIAIIN;
  bool bVar1;
  int32_t PKDBOMAHGHC;
  int32_t iVar2;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ECENNHNBAME_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566517 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04566517 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  OPNFCOGALLI__NCBEJDPOLMB(__this,method);
  PKDBOMAHGHC = OPNFCOGALLI__MKIHMHHJLHE(__this,method_00);
  __this_00 = (__this->fields).NDBPNFLAKDL;
  if (__this_00 != (ECENNHNBAME_o *)0x0) {
    method_01 = (MethodInfo *)(__this->fields).ACMNENLJLOL;
    ECENNHNBAME__PPHOIDGOHAD
              (__this_00,PKDBOMAHGHC,(System_Collections_Generic_List_JADGCGOJLJB__o *)method_01,
               (__this->fields).DKLFPMBOOFA,(__this->fields).HCDNAGGCLDA,(MethodInfo *)0x0);
    pSVar5 = (__this->fields).ACMNENLJLOL;
    if (pSVar5 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                          );
        LEAMIBIAIIN = local_60.fields._current;
        if (!bVar1) break;
        if ((JADGCGOJLJB_o *)local_60.fields._current == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar2 = JADGCGOJLJB__NHGGBEACKBD
                          ((JADGCGOJLJB_o *)local_60.fields._current,(MethodInfo *)0x0);
        if (iVar2 == 4) {
          OPNFCOGALLI__IBIGMDGJOAL(__this,(JADGCGOJLJB_o *)LEAMIBIAIIN,method_01);
        }
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (((JADGCGOJLJB_Fields *)((long)LEAMIBIAIIN + 0x10))->IELLEFEFFJD).fields,
                           (MethodInfo *)0x0);
        if (iVar3 < iVar2) {
          method_01 = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
        }
        else {
          method_01 = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((JADGCGOJLJB_Fields *)((long)LEAMIBIAIIN + 0x10))->IELLEFEFFJD).
                             fields,(MethodInfo *)0x0);
        }
        if (iVar4 == PKDBOMAHGHC) {
          OPNFCOGALLI__BCABJDKNOLM(__this,(JADGCGOJLJB_o *)LEAMIBIAIIN,method_01);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__)
      ;
      pSVar5 = (__this->fields).DKLFPMBOOFA;
      if (pSVar5 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                                 ), bVar1) {
          OPNFCOGALLI__JIJHABGAIIN(__this,(JADGCGOJLJB_o *)local_60.fields._current,method_01);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

