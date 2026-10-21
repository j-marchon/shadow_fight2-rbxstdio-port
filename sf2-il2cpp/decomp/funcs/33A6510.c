// GGLKHCAIGDI$$MBCCHBNAJKA @ RVA 0x33A6510

bool GGLKHCAIGDI__MBCCHBNAJKA
               (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_00;
  MethodInfo *method_00;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPCEFBCDHPA;
  if ((DAT_04567cf1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    DAT_04567cf1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  iVar3 = GGLKHCAIGDI__ICMIMIOJPMK(__this,NKCMBEFHFII,method_00);
  if (iVar3 < 1) {
    bVar1 = false;
  }
  else {
    __this_00 = (__this->fields).NICGLFEBNFM;
    if (__this_00 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
      if (!bVar1) {
        iVar4 = 2;
        goto LAB_034a65fc;
      }
      if ((PFECHOJADFA_o *)local_48.fields._current == (PFECHOJADFA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = PFECHOJADFA__BNNIDPDMOIL
                        ((PFECHOJADFA_o *)local_48.fields._current,NKCMBEFHFII,DPCEFBCDHPA,
                         (MethodInfo *)0x0);
    } while (!bVar2);
    iVar4 = 5;
LAB_034a65fc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    bVar1 = bVar1 && iVar4 == 5;
  }
  return bVar1;
}

