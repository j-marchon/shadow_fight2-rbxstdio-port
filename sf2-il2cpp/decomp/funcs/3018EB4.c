// ECENNHNBAME$$CHDOMOEEOHP @ RVA 0x3018EB4

int32_t ECENNHNBAME__CHDOMOEEOHP(ECENNHNBAME_o *__this,bool HNBNAEJAENO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565be7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04565be7 = 1;
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
        if (HNBNAEJAENO) {
          iVar3 = ECENNHNBAME__LMKFAMDMPJG(__this,iVar4 + 1,method);
          iVar4 = iVar3 + -1;
        }
        return iVar4;
      }
      if ((JADGCGOJLJB_o *)local_60.fields._current == (JADGCGOJLJB_o *)0x0) break;
      iVar3 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)local_60.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 4) {
        method = (MethodInfo *)0x0;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (((JADGCGOJLJB_Fields *)((long)pIVar1 + 0x10))->DMNCBADHGJP).fields,
                           (MethodInfo *)0x0);
        if (iVar4 < iVar3) {
          method = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((JADGCGOJLJB_Fields *)((long)pIVar1 + 0x10))->DMNCBADHGJP).fields,
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

