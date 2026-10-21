// ECENNHNBAME$$AGEELFDMNAN @ RVA 0x301521C

bool ECENNHNBAME__AGEELFDMNAN
               (ECENNHNBAME_o *__this,System_String_o *KGLJICLJHEL,int32_t PKDBOMAHGHC,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04565bef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04565bef = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pEVar5 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar5 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) ||
     (__this_00 = (pEVar5->fields).GLFJDDHEMNO,
     __this_00 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    pIVar1 = local_58.fields._current;
    if (!bVar2) {
      iVar6 = 5;
      goto LAB_03115320;
    }
    if (local_58.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__op_Equality
                      ((System_String_o *)local_58.fields._current[5].klass,KGLJICLJHEL,
                       (MethodInfo *)0x0);
  } while (((!bVar3) ||
           (iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 3)
                               ,(MethodInfo *)0x0), PKDBOMAHGHC < iVar4)) ||
          (iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 4),
                              (MethodInfo *)0x0), iVar4 < PKDBOMAHGHC));
  iVar6 = 4;
LAB_03115320:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
  return bVar2 && iVar6 == 4;
}

