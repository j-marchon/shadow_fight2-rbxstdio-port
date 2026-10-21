// OPNFCOGALLI$$GNAKNCBOLOI @ RVA 0x310ACBC

void OPNFCOGALLI__GNAKNCBOLOI(OPNFCOGALLI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04566534 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    DAT_04566534 = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = (pSVar2->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        (KGLJICLJHEL,(System_String_o *)pIVar3[5].klass,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
                    /* try { // try from 0320ad54 to 0330ae07 has its CatchHandler @ 0320ad54
                       catch() { ... } // from try @ 0320ad54 with catch @ 0320ad54
                       catch() { ... } // from try @ 0320ae5c with catch @ 0320ad54
                       catch() { ... } // from try @ 0320ae88 with catch @ 0320ad54
                       catch() { ... } // from try @ 0320aeb8 with catch @ 0320ad54
                       catch() { ... } // from try @ 0320aeec with catch @ 0320ad54 */
        if (pSVar2 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,
                   Method_System_Collections_Generic_List<JADGCGOJLJB>_RemoveAt__);
      }
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar2 = (__this->fields).ACMNENLJLOL;
    } while (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

