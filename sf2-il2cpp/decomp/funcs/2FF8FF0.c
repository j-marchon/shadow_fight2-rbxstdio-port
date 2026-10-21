// JMDPBFOCHHP$$LGJNPFBALBD @ RVA 0x2FF8FF0

float JMDPBFOCHHP__LGJNPFBALBD
                (JMDPBFOCHHP_o *__this,System_String_o *DIIDFLPOBMC,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565ab7 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_GetEnumerator__);
    DAT_04565ab7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pJVar3 = (__this->fields).OFMMMBIIDAE;
  fVar4 = 0.0;
  if (pJVar3 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
    __this_00 = (pJVar3->fields).GADHINPJDAF;
    if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) goto LAB_030f90b4;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        (DIIDFLPOBMC,(System_String_o *)local_48.fields._current[1].klass,
                         (MethodInfo *)0x0);
    } while (!bVar2);
    fVar4 = *(float *)&pIVar1[5].klass;
LAB_030f90b4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_HJLEKMDIDPO>_Dispose__)
    ;
  }
  return fVar4;
}

