// ECENNHNBAME$$COFDJFNCJDM @ RVA 0x301563C

int32_t ECENNHNBAME__COFDJFNCJDM
                  (ECENNHNBAME_o *__this,System_Collections_Generic_List_string__o *OKAINPMIKKD,
                  MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565bce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04565bce = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pEVar5 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar5 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar5->fields).GLFJDDHEMNO,
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
        if (iVar4 < 1) {
          iVar3 = 0;
        }
        else {
          iVar3 = ECENNHNBAME__LMKFAMDMPJG(__this,iVar4 + 1,method);
        }
                    /* try { // try from 03115790 to 032157bf has its CatchHandler @ 031159b0 */
        return iVar3;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      if (OKAINPMIKKD == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<string>_Contains__;
      bVar2 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)OKAINPMIKKD,
                         (Il2CppObject *)local_60.fields._current[5].klass,
                         (MethodInfo_26E513C *)
                         Method_System_Collections_Generic_List<string>_Contains__);
      if (bVar2) {
        method = (MethodInfo *)0x0;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                           (MethodInfo *)0x0);
        if (iVar4 < iVar3) {
                    /* try { // try from 0311574c to 03215753 has its CatchHandler @ 03115940 */
          method = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                             (MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

