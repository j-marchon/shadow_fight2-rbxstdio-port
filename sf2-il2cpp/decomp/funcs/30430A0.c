// PJKHAJKEHEL$$BLBCFAEFKOI @ RVA 0x30430A0

/* WARNING: Removing unreachable block (ram,0x031432e0) */
/* WARNING: Removing unreachable block (ram,0x031433bc) */

void PJKHAJKEHEL__BLBCFAEFKOI
               (PJKHAJKEHEL_o *__this,PJKHAJKEHEL_o *KJGJNPJFMKB,
               System_Collections_Generic_List_CJMPPFAJNBH__o *GCFIDKJCLHJ,
               System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *ELKJHGBCEKJ,
               MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool bVar1;
  Il2CppObject *pIVar2;
  FPLCEOJCPOD_o *pFVar3;
  Il2CppClass *b;
  int index;
  float fVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_c8;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  int32_t local_64;
  
  if ((DAT_04565dc6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<LPACFIDMJOM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<CJMPPFAJNBH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CJMPPFAJNBH>_get_Item__);
    DAT_04565dc6 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  local_64 = 0;
  if (ELKJHGBCEKJ != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_c8,(System_Collections_Generic_List_object__o *)ELKJHGBCEKJ,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__);
    local_90.fields._index = local_c8.fields._index;
    local_90.fields._version = local_c8.fields._version;
    local_90.fields._list = local_c8.fields._list;
    local_90.fields._current = local_c8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                             ), bVar1) {
      if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (GCFIDKJCLHJ == (System_Collections_Generic_List_CJMPPFAJNBH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < (GCFIDKJCLHJ->fields)._size) {
        b = local_90.fields._current[1].klass;
        fVar5 = *(float *)&local_90.fields._current[1].monitor;
        index = 0;
        do {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)GCFIDKJCLHJ,index,
                              Method_System_Collections_Generic_List<CJMPPFAJNBH>_get_Item__);
          if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pIVar2[2].monitor == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_c8,pIVar2[2].monitor,
                     Method_System_Collections_Generic_List<LPACFIDMJOM>_GetEnumerator__);
          local_b0.fields._index = local_c8.fields._index;
          local_b0.fields._version = local_c8.fields._version;
          local_b0.fields._list = local_c8.fields._list;
          local_b0.fields._current = local_c8.fields._current;
          while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_b0,
                                    Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_MoveNext__
                                   ), bVar1) {
            if (local_b0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = System_String__op_Equality
                              ((System_String_o *)local_b0.fields._current[1].klass,
                               (System_String_o *)b,(MethodInfo *)0x0);
            if (bVar1) {
              local_64 = 0;
              if (KJGJNPJFMKB == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pFVar3 = (KJGJNPJFMKB->fields).ACHJNNOKEDK;
              if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              FPLCEOJCPOD__KNMENIBLFGF
                        (pFVar3,(System_String_o *)b,&local_64,true,false,(MethodInfo *)0x0);
              pFVar3 = (KJGJNPJFMKB->fields).ACHJNNOKEDK;
              if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              fVar4 = fVar5 + (float)local_64;
              CJNHFNHJHPE = -0x80000000;
              if (fVar4 != INFINITY) {
                CJNHFNHJHPE = (int)fVar4;
              }
              FPLCEOJCPOD__FOOHBJNHOKK
                        (pFVar3,(System_String_o *)b,CJNHFNHJHPE,false,(MethodInfo *)0x0);
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_Dispose__);
          index = index + 1;
        } while (index < (GCFIDKJCLHJ->fields)._size);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
              );
  }
                    /* try { // try from 0314338c to 032434c7 has its CatchHandler @ 0314338c
                       catch() { ... } // from try @ 0314338c with catch @ 0314338c
                       catch() { ... } // from try @ 03143510 with catch @ 0314338c
                       catch() { ... } // from try @ 03143558 with catch @ 0314338c
                       catch() { ... } // from try @ 03143630 with catch @ 0314338c */
  return;
}

