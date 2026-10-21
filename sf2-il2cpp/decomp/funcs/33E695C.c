// FCJBEKHDLAF$$NJBMJPGMKDI @ RVA 0x33E695C

void FCJBEKHDLAF__NJBMJPGMKDI(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *extraout_x1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o CVar3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567ece & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04567ece = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IILLHHPGGKA;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      pIVar1 = local_38.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        return;
      }
      CVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields *)&pIVar1[0x19].monitor = CVar3.fields
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

