// GBJGJEGPHKD$$FMAGIKOPMNM @ RVA 0x34301FC

void GBJGJEGPHKD__FMAGIKOPMNM(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  MethodInfo *in_x2;
  GBJGJEGPHKD_CMPNJPOADCA_Fields *pGVar3;
  
  if ((DAT_04568163 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04568163 = 1;
  }
  pIVar1 = GBJGJEGPHKD__OCJAHBKIFNO(__this,(__this->fields).HICKHACBDAC,in_x2);
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    pGVar2 = (__this->fields).EOIPAPCMGGF;
    if (pGVar2 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) goto LAB_035302c0;
    (pGVar2->fields).LNBKBMNLJNG = pIVar1;
    thunk_FUN_01c20e04();
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if (pGVar2 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
    pGVar3 = &pGVar2->fields;
    if (pGVar3->LNBKBMNLJNG != (IEFEBEDLHNN_o *)0x0) {
      return;
    }
    __this_00 = (pGVar2->fields).DMFCLEMPPIM;
    if (__this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      if ((__this_00->fields)._size < 1) {
        pIVar1 = (IEFEBEDLHNN_o *)0x0;
      }
      else {
        pIVar1 = (IEFEBEDLHNN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,0,
                            Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      }
      pGVar3->LNBKBMNLJNG = pIVar1;
      thunk_FUN_01c20e04(pGVar3);
      return;
    }
  }
LAB_035302c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

