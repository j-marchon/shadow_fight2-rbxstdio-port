// IPEAKKBOJCA$$DGCODECJJCC @ RVA 0x3090100

bool IPEAKKBOJCA__DGCODECJJCC(IPEAKKBOJCA_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  byte bVar3;
  System_Collections_Generic_List_EAAHMDAMHNI__o *pSVar4;
  System_Exception_o *__this_00;
  undefined8 uVar5;
  System_String_o *str1;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04566095 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_2948);
    FUN_01bab630(&StringLiteral_9975);
    DAT_04566095 = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields).FDKHPNLBCGM;
  bVar2 = System_String__op_Equality(pSVar6,StringLiteral_2948,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = (__this->fields).KDIMDBHMBEM;
    if (pSVar4 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
LAB_031902e0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      pIVar1 = local_40.fields._current;
      if (!bVar2) goto LAB_031902b0;
      if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = (*(local_40.fields._current)->klass->vtable[4].methodPtr)
                        (local_40.fields._current,
                         (local_40.fields._current)->klass->vtable[4].method);
    } while (((bVar3 ^ *(char *)&pIVar1[1].monitor != '\0') & 1) != 0);
LAB_03190204:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    bVar2 = false;
  }
  else {
    bVar2 = System_String__op_Equality(pSVar6,StringLiteral_9975,(MethodInfo *)0x0);
    if (!bVar2) {
      str1 = (__this->fields).FDKHPNLBCGM;
      pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_15597);
      pSVar6 = System_String__Concat(pSVar6,str1,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
      System_Exception___ctor(__this_00,pSVar6,(MethodInfo *)0x0);
      uVar5 = thunk_FUN_01bb9178(&Method_IPEAKKBOJCA_DGCODECJJCC__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_00,uVar5);
    }
    pSVar4 = (__this->fields).KDIMDBHMBEM;
    if (pSVar4 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) goto LAB_031902e0;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      pIVar1 = local_40.fields._current;
      if (!bVar2) goto LAB_03190204;
      if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = (*(local_40.fields._current)->klass->vtable[4].methodPtr)
                        (local_40.fields._current,
                         (local_40.fields._current)->klass->vtable[4].method);
    } while ((bool)(bVar3 & 1) == (*(char *)&pIVar1[1].monitor != '\0'));
LAB_031902b0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    bVar2 = true;
  }
  return bVar2;
}

