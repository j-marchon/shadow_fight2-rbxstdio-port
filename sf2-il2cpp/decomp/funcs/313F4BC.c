// IPPEHAJADOO$$KPIGLNLIOOP @ RVA 0x313F4BC

void IPPEHAJADOO__KPIGLNLIOOP
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *in_x4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456674e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_0456674e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  IPPEHAJADOO__BKBHKFCCKDO(__this,2,BCHKAEBGKGG,true,in_x4);
  __this_00 = (__this->fields).MBPELMMKGMB;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        return;
      }
      CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((__this->fields).LKLGFEIFBIC,(MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)((long)&pIVar1[0x1a].klass + 4) =
           CVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

