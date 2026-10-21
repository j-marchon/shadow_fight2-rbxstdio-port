// OLKKAIFGGAK$$NEJLOEMCOFO @ RVA 0x34EBA38

void OLKKAIFGGAK__NEJLOEMCOFO
               (OLKKAIFGGAK_o *__this,uint8_t ACCIHBHMFPN,
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  OLKKAIFGGAK_o *pOVar3;
  OLKKAIFGGAK_o *pOVar4;
  OPNFCOGALLI_o *__this_01;
  Il2CppClass *__this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045687b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    DAT_045687b9 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).NFMBPIPEKGF == (OLKKAIFGGAK_o *)0x0) {
    (__this->fields).FCHLFGOJAAN = ACCIHBHMFPN;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
    pOVar4 = __this;
    do {
      pOVar3 = pOVar4;
      pOVar4 = (pOVar3->fields).NFMBPIPEKGF;
    } while (pOVar4 != (OLKKAIFGGAK_o *)0x0);
    CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar2,(MethodInfo *)0x0);
    (pOVar3->fields).BBAILGHCFJI.fields = CVar5;
    __this_01 = (__this->fields).OAKOFJJIOFF;
    pOVar4 = __this;
    if (__this_01 != (OPNFCOGALLI_o *)0x0) {
      do {
        pOVar3 = pOVar4;
        pOVar4 = (pOVar3->fields).NFMBPIPEKGF;
      } while (pOVar4 != (OLKKAIFGGAK_o *)0x0);
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pOVar3->fields).BBAILGHCFJI.fields,(MethodInfo *)0x0);
      OPNFCOGALLI__BAHMCAAGBLP(__this_01,iVar2,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).MPLCPGJEHPG;
    if (__this_00 == (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__
                             ), bVar1) {
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = local_48.fields._current[0x29].klass;
      pOVar4 = __this;
      if (__this_02 != (Il2CppClass *)0x0) {
        do {
          pOVar3 = pOVar4;
                    /* try { // try from 035ebb64 to 036ebc0b has its CatchHandler @ 035ebb64
                       catch() { ... } // from try @ 035ebb64 with catch @ 035ebb64
                       catch() { ... } // from try @ 035ebc34 with catch @ 035ebb64
                       catch() { ... } // from try @ 035ebc7c with catch @ 035ebb64
                       catch() { ... } // from try @ 035ebca4 with catch @ 035ebb64
                       catch() { ... } // from try @ 035ebcf0 with catch @ 035ebb64 */
          pOVar4 = (pOVar3->fields).NFMBPIPEKGF;
        } while (pOVar4 != (OLKKAIFGGAK_o *)0x0);
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pOVar3->fields).BBAILGHCFJI.fields,(MethodInfo *)0x0);
        OPNFCOGALLI__BAHMCAAGBLP((OPNFCOGALLI_o *)__this_02,iVar2,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
  }
  return;
}

