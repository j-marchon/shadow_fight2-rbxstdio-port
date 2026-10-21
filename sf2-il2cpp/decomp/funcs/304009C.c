// PJKHAJKEHEL$$KEINBPEIOOG @ RVA 0x304009C

float PJKHAJKEHEL__KEINBPEIOOG
                (PJKHAJKEHEL_o *__this,System_Collections_Generic_List_LPACFIDMJOM__o *MPCAKMALPIM,
                PJKHAJKEHEL_o *OKBIKHHKOEN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  PJKHAJKEHEL_o *method_00;
  float fVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = OKBIKHHKOEN;
  if ((DAT_04565da8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_get_Current__);
    __this = (PJKHAJKEHEL_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<LPACFIDMJOM>_GetEnumerator__);
    DAT_04565da8 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (MPCAKMALPIM == (System_Collections_Generic_List_LPACFIDMJOM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031401a8 to 032401af has its CatchHandler @ 031402ac */
    FUN_01bab8c8(__this);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)MPCAKMALPIM,
             Method_System_Collections_Generic_List<LPACFIDMJOM>_GetEnumerator__);
  fVar3 = -3.4028235e+38;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_MoveNext__);
    pIVar1 = local_48.fields._current;
    if (!bVar2) {
                    /* catch() { ... } // from try @ 03140210 with catch @ 03140178
                       catch() { ... } // from try @ 03140298 with catch @ 03140178
                       catch() { ... } // from try @ 031402a4 with catch @ 03140178
                       catch() { ... } // from try @ 03140300 with catch @ 03140178 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_Dispose__)
      ;
                    /* try { // try from 03140194 to 0324019f has its CatchHandler @ 031402b4 */
      return fVar3;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    if (OKBIKHHKOEN == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar4 = PJKHAJKEHEL__HCCKONOABKP
                      (OKBIKHHKOEN,(System_String_o *)local_48.fields._current[1].klass,
                       (MethodInfo *)method_00);
    fVar4 = fVar4 + *(float *)&pIVar1[1].monitor;
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

