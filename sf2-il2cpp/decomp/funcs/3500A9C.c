// LHKALFIIJKB$$KNJEENDFKIJ @ RVA 0x3500A9C

bool LHKALFIIJKB__KNJEENDFKIJ(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *__this;
  System_Xml_XmlDocument_o *pSVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568856 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_get_Current__
                );
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568856 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  if (__this == (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                      );
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03600ba8;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC
                       ((System_String_o *)local_38.fields._current[1].klass,StringLiteral_1,0,true,
                        true,false,(MethodInfo *)0x0);
  } while (pSVar2 != (System_Xml_XmlDocument_o *)0x0);
  iVar3 = 4;
LAB_03600ba8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,
             Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__);
  return iVar3 != 4;
}

