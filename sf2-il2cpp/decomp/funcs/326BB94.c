// FJMCMFBLEOE$$EPBENPDCBFE @ RVA 0x326BB94

bool FJMCMFBLEOE__EPBENPDCBFE(FJMCMFBLEOE_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_045671e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_045671e7 = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    if ((AHEFOIOKDOK->fields).ANOKHPAKKON == false) {
LAB_0336bcf8:
      bVar2 = (__this->fields).super.GBBHFPBFOPI != false;
    }
    else {
      __this_00 = (AHEFOIOKDOK->fields).GFBNJPMOEKD;
      if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0336bd24;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_40.fields._index = local_58.fields._index;
      local_40.fields._version = local_58.fields._version;
      local_40.fields._list = local_58.fields._list;
      local_40.fields._current = local_58.fields._current;
LAB_0336bc34:
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_40,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        pIVar1 = local_40.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_40,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          goto LAB_0336bcf8;
        }
        bVar2 = System_String__IsNullOrEmpty((__this->fields).JBNGADJBDHB,(MethodInfo *)0x0);
        if (!bVar2) {
          if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            ((__this->fields).JBNGADJBDHB,(System_String_o *)pIVar1[3].klass,
                             (MethodInfo *)0x0);
          if (!bVar2) goto LAB_0336bc34;
        }
        bVar2 = System_String__IsNullOrEmpty((__this->fields).EKIAIOFOBBL,(MethodInfo *)0x0);
        if (!bVar2) {
          if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            ((__this->fields).EKIAIOFOBBL,pIVar1[3].monitor,(MethodInfo *)0x0);
          if (!bVar2) goto LAB_0336bc34;
        }
        bVar2 = System_String__IsNullOrEmpty((__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
        if (bVar2) break;
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336bd18 to 0346bd3f has its CatchHandler @ 0336bf94 */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          ((__this->fields).NPFMOEOIEKM,pIVar1[1].monitor,(MethodInfo *)0x0);
      } while (!bVar2);
      bVar2 = (__this->fields).super.GBBHFPBFOPI == false;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_40,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
    }
    return bVar2;
  }
LAB_0336bd24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

