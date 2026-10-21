// FCJBEKHDLAF$$GOFBPPPFCNA @ RVA 0x33F1BAC

void FCJBEKHDLAF__GOFBPPPFCNA(FCJBEKHDLAF_o *__this,bool ENDOADGIHFG,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  IPPEHAJADOO_o *__this_01;
  PJKHAJKEHEL_o *pPVar3;
  AFFHKININGD_o *pAVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567f18 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    DAT_04567f18 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pPVar3 = (__this->fields).JEDELFOBLEN;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (pPVar3->fields).DHGNGIKCDON.fields,(MethodInfo *)0x0);
    if (bVar2 == ENDOADGIHFG) {
      return;
    }
    pAVar4 = (__this->fields).FBFPLEFCDOK;
    if (pAVar4 != (AFFHKININGD_o *)0x0) {
      if ((pAVar4->fields).JDNKKGPNHPB != 0x11) {
        return;
      }
      pPVar3 = (__this->fields).JEDELFOBLEN;
      if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
        (pPVar3->fields).BLJLIBHLGLI = (bool_conflict)(~ENDOADGIHFG & 1U);
        CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          (ENDOADGIHFG,(MethodInfo *)0x0);
        (pPVar3->fields).DHGNGIKCDON.fields = CVar5;
        pAVar4 = (__this->fields).FBFPLEFCDOK;
        if ((pAVar4 != (AFFHKININGD_o *)0x0) &&
           (__this_00 = (pAVar4->fields).MECHOBPGHFJ,
           __this_00 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_48,
                                    Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                                   ), pIVar1 = local_48.fields._current, bVar2) {
            if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            *(byte *)&local_48.fields._current[6].monitor = ~ENDOADGIHFG & 1U;
            CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              (ENDOADGIHFG,(MethodInfo *)0x0);
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields *)((long)&pIVar1[6].monitor + 4)
                 = CVar5;
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
          __this_01 = (__this->fields).JJPMCDACBFG;
          if (__this_01 != (IPPEHAJADOO_o *)0x0) {
            IPPEHAJADOO__FFJFELOKLDM(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

