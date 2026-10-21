// OENOCOMOCDF$$EPBENPDCBFE @ RVA 0x31BB8BC

bool OENOCOMOCDF__EPBENPDCBFE
               (OENOCOMOCDF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  OLKKAIFGGAK_o *pOVar3;
  PJKHAJKEHEL_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_String_o *pSVar4;
  byte bVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566be4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566be4 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pOVar3 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    bVar2 = false;
  }
  else {
    if (((pOVar3 == (OLKKAIFGGAK_o *)0x0) ||
        (__this_00 = (pOVar3->fields).FAPMJJBOFEF, __this_00 == (PJKHAJKEHEL_o *)0x0)) ||
       (__this_01 = PJKHAJKEHEL__OIPAIAJGCDA(__this_00,(MethodInfo *)0x0),
       __this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
LAB_032bb994:
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      pIVar1 = local_50.fields._current;
      if (!bVar2) {
        bVar5 = 0;
        iVar6 = 9;
        goto LAB_032bba60;
      }
      pSVar4 = (__this->fields).JBNGADJBDHB;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      if (!bVar2) {
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = (__this->fields).JBNGADJBDHB;
        if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar4,(System_String_o *)pIVar1[3].klass,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_032bb994;
      }
      pSVar4 = (__this->fields).OKHENGIJCCF;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      if (!bVar2) {
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = (__this->fields).OKHENGIJCCF;
        if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar4,pIVar1[3].monitor,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_032bb994;
      }
      pSVar4 = (__this->fields).JIJLBFGKNJK;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      if (bVar2) break;
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (__this->fields).JIJLBFGKNJK;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,pIVar1[1].monitor,(MethodInfo *)0x0);
    } while (!bVar2);
    bVar5 = 1;
    iVar6 = 8;
LAB_032bba60:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    bVar2 = (bool)(bVar5 & iVar6 == 8);
  }
  return bVar2;
}

