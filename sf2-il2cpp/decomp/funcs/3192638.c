// ABNLGBHKOCE$$PCPBHJGAOOH @ RVA 0x3192638

bool ABNLGBHKOCE__PCPBHJGAOOH
               (ABNLGBHKOCE_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  bool bVar1;
  KJFPGDFNFCL_o **ppKVar2;
  ulong uVar3;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566a4a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    DAT_04566a4a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    pAVar4 = (__this->fields).CKNFEFFGHLC;
    if (pAVar4 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) goto LAB_03292774;
    PBCGCHIKCOE = (pAVar4->fields).KPFGHBEKJIM;
  }
  if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03292774;
    ppKVar2 = &(AHEFOIOKDOK->fields).FKBLDBLGMIH;
    *ppKVar2 = FKDOMEBPFPF;
    thunk_FUN_01c20e04(ppKVar2,FKDOMEBPFPF);
    (FKDOMEBPFPF->fields).KPFGHBEKJIM = AHEFOIOKDOK;
    thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,AHEFOIOKDOK);
  }
  if (PBCGCHIKCOE != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)PBCGCHIKCOE,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      if (!bVar1) {
        iVar5 = 8;
        goto LAB_03292748;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar3 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                        (local_48.fields._current,AHEFOIOKDOK,
                         (local_48.fields._current)->klass->vtable[4].method);
    } while ((uVar3 & 1) != 0);
    iVar5 = 7;
LAB_03292748:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    return iVar5 != 7;
  }
LAB_03292774:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

