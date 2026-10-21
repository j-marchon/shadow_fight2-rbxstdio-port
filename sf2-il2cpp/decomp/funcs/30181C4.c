// ECENNHNBAME$$MBDJHMEEGGP @ RVA 0x30181C4

int32_t ECENNHNBAME__MBDJHMEEGGP(ECENNHNBAME_o *__this,bool HNBNAEJAENO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  int iVar5;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  MethodInfo *method_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565bdf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_14411);
    DAT_04565bdf = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pEVar6 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar6 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar6->fields).GLFJDDHEMNO,
     __this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    iVar4 = 0;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
        method_00 = (MethodInfo *)0x0;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
        if (HNBNAEJAENO) {
          iVar3 = ECENNHNBAME__LMKFAMDMPJG(__this,iVar5 + 1,method_00);
          iVar5 = iVar3 + -1;
        }
        return iVar5;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      bVar2 = System_String__op_Equality
                        (StringLiteral_14411,(System_String_o *)local_60.fields._current[5].klass,
                         (MethodInfo *)0x0);
      if ((bVar2) &&
         (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                             (MethodInfo *)0x0), iVar4 < iVar3)) {
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                           (MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

