// PLCCJCFAFKA$$LDKFOHPNENK @ RVA 0x32289AC

bool PLCCJCFAFKA__LDKFOHPNENK(PLCCJCFAFKA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LGABIPDBOEP__o *__this_00;
  IGFGDDANEPE_o *pIVar2;
  MethodInfo *extraout_x1;
  int iVar3;
  Il2CppClass *KGLJICLJHEL;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566f87 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566f87 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GFBNJPMOEKD;
  if (__this_00 == (System_Collections_Generic_List_LGABIPDBOEP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__);
    if (!bVar1) {
      iVar3 = 6;
      goto LAB_03328a9c;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    KGLJICLJHEL = local_48.fields._current[1].klass;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar2 = NLPJLHOEAOE__JNFIBDBHNOA((System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
  } while ((pIVar2 != (IGFGDDANEPE_o *)0x0) && ((pIVar2->fields).OFIKEBGDMBE != false));
  iVar3 = 5;
LAB_03328a9c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__);
  return iVar3 != 5;
}

