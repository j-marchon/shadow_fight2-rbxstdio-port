// BCGLDKLKKDA$$JOGKAIEDLIO @ RVA 0x3482D14

bool BCGLDKLKKDA__JOGKAIEDLIO(BCGLDKLKKDA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_00;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch() { ... } // from try @ 03581e14 with catch @ 03582d14 */
                    /* catch() { ... } // from try @ 03581d74 with catch @ 03582d18 */
                    /* catch() { ... } // from try @ 03581b08 with catch @ 03582d1c */
                    /* catch() { ... } // from try @ 03581bac with catch @ 03582d20 */
                    /* catch() { ... } // from try @ 03581a64 with catch @ 03582d24 */
                    /* catch() { ... } // from try @ 035819cc with catch @ 03582d28 */
  if ((DAT_04568389 & 1) == 0) {
                    /* try { // try from 03582d40 to 03682d43 has its CatchHandler @ 03582d50 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__);
                    /* catch() { ... } // from try @ 03582d40 with catch @ 03582d50 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
    DAT_04568389 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._JAONHHOBCKA_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03582d90 to 03682db7 has its CatchHandler @ 03582dcc */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__);
    pIVar1 = local_48.fields._current;
    if (!bVar2) {
      iVar4 = 5;
      goto LAB_03582df0;
    }
                    /* try { // try from 03582db8 to 03682dc3 has its CatchHandler @ 03581488 */
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03582dc4 to 03682dcb has its CatchHandler @ 03582dcc */
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(local_48.fields._current[2].monitor,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03582d90 with catch @ 03582dcc
                       catch() { ... } // from try @ 03582dc4 with catch @ 03582dcc */
  } while ((bVar3) ||
          (bVar3 = System_String__op_Equality(pIVar1[2].monitor,CJNHFNHJHPE,(MethodInfo *)0x0),
          !bVar3));
  iVar4 = 4;
LAB_03582df0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
  return bVar2 && iVar4 == 4;
}

