// OPNFCOGALLI$$HIMFHBJAEMJ @ RVA 0x31060B8

JADGCGOJLJB_o *
OPNFCOGALLI__HIMFHBJAEMJ(OPNFCOGALLI_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  JADGCGOJLJB_o *pJVar3;
  int index;
  
  if ((DAT_04566509 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    DAT_04566509 = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (JADGCGOJLJB_o *)0x0;
      }
      pJVar3 = (JADGCGOJLJB_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
      if (pJVar3 == (JADGCGOJLJB_o *)0x0) break;
      iVar1 = JADGCGOJLJB__NHGGBEACKBD(pJVar3,(MethodInfo *)0x0);
      if (iVar1 == ACCIHBHMFPN) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
        if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
          pJVar3 = (JADGCGOJLJB_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
          return pJVar3;
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

