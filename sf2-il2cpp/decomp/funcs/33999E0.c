// MMDPNDAECII$$IPLOAGNCEHJ @ RVA 0x33999E0

void MMDPNDAECII__IPLOAGNCEHJ(MMDPNDAECII_o *__this,MethodInfo *method)

{
  GBJGJEGPHKD_o *pGVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  IEFEBEDLHNN_o *__this_01;
  MethodInfo *method_00;
  int index;
  float ONAOBFPPMAL;
  
  if ((DAT_04567c6d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04567c6d = 1;
  }
  pGVar1 = (__this->fields).HMIAFJALFCJ;
  if ((pGVar1 != (GBJGJEGPHKD_o *)0x0) &&
     (__this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar1,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        __this_01 = (IEFEBEDLHNN_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499ad0;
        if ((__this_01->fields).MCKFLABMNAK == false) {
          if (((__this->fields).BNHJIKJAHHF == false) && ((__this_01->fields).LAIDIGOPNLB == false))
          {
            pGVar1 = (__this->fields).HMIAFJALFCJ;
            if (pGVar1 == (GBJGJEGPHKD_o *)0x0) goto LAB_03499ad0;
            if (((pGVar1->fields).FJHAMMNKBPN == false) ||
               ((__this_01->fields).FJHAMMNKBPN == false)) goto LAB_03499a90;
          }
          ONAOBFPPMAL = MMDPNDAECII__OLIPOLKMNGL(__this,method_00);
          IEFEBEDLHNN__IPLOAGNCEHJ(__this_01,ONAOBFPPMAL,(MethodInfo *)0x0);
        }
LAB_03499a90:
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    return;
  }
LAB_03499ad0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

