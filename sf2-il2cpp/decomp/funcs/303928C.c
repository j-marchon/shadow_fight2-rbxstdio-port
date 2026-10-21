// LJNJDFEAIOH$$APFDLGPHDBN @ RVA 0x303928C

CNLGMNIEGFG_o *
LJNJDFEAIOH__APFDLGPHDBN(AADKBCFCLKK_o *DKMMBMBMJBO,int32_t MOLGLNLBAIB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  CNLGMNIEGFG_o *__this;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar3;
  KDADMJGPAOM_o *pKVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565d65 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565d65 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar2 = OOBBAGLCFPF__IFFNMNFGOII(DKMMBMBMJBO,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  __this = MGNPHCAAEIO__MJDCGINJMOP(MOLGLNLBAIB,bVar2,(MethodInfo *)0x0);
  if (((__this != (CNLGMNIEGFG_o *)0x0) &&
      (pCVar3 = (__this->fields).BOOKHNOMHGM, pCVar3 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0)) &&
     ((pCVar3->fields).LPHHIMJHGEF = bVar2, DKMMBMBMJBO != (AADKBCFCLKK_o *)0x0)) {
    pKVar4 = (DKMMBMBMJBO->fields).LHFLMBNKPHF;
    if (pKVar4 != (KDADMJGPAOM_o *)0x0) {
      CNLGMNIEGFG__HFNDKACEADO(__this,(float)(pKVar4->fields).PDGEHKCPGDK,(MethodInfo *)0x0);
      __this_00 = (__this->fields).super.MECHOBPGHFJ;
      if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_031393fc;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                          );
        pIVar1 = local_48.fields._current;
        if (!bVar2) break;
        pKVar4 = (DKMMBMBMJBO->fields).LHFLMBNKPHF;
        if (pKVar4 == (KDADMJGPAOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((pKVar4->fields).IOJIABMGMGB,(MethodInfo *)0x0);
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)((long)&pIVar1[0x21].monitor + 4) =
             CVar5;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__)
      ;
    }
    return __this;
  }
LAB_031393fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

