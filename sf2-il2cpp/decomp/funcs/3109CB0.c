// OPNFCOGALLI$$HIMFHBJAEMJ @ RVA 0x3109CB0

JADGCGOJLJB_o *
OPNFCOGALLI__HIMFHBJAEMJ(OPNFCOGALLI_o *__this,System_String_o *OONIBCILJBN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  Il2CppObject *pIVar3;
  JADGCGOJLJB_o *pJVar4;
  int index;
  
  if ((DAT_0456652e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    DAT_0456652e = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (JADGCGOJLJB_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar3[5].klass,OONIBCILJBN,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
        if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
          pJVar4 = (JADGCGOJLJB_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
          return pJVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).ACMNENLJLOL;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

