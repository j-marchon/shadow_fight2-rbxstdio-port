// OPNFCOGALLI$$GNAKNCBOLOI @ RVA 0x310AEEC

void OPNFCOGALLI__GNAKNCBOLOI(OPNFCOGALLI_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  JADGCGOJLJB_o *__this_00;
  int index;
  
                    /* try { // try from 0320aeec to 0330aefb has its CatchHandler @ 0320ad54 */
                    /* try { // try from 0320aefc to 0330af03 has its CatchHandler @ 0320af04 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320aee4 with catch @ 0320af04
                       catch(type#2 @ 00000000) { ... } // from try @ 0320aefc with catch @ 0320af04
                        */
  if ((DAT_04566536 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    DAT_04566536 = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = (pSVar2->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      __this_00 = (JADGCGOJLJB_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,index,
                             Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
      if (__this_00 == (JADGCGOJLJB_o *)0x0) break;
      iVar1 = JADGCGOJLJB__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
      if (iVar1 == ACCIHBHMFPN) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
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

