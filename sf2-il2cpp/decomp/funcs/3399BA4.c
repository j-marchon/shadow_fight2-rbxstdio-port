// MMDPNDAECII$$MKCLHFFLJCO @ RVA 0x3399BA4

void MMDPNDAECII__MKCLHFFLJCO(MMDPNDAECII_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool bVar3;
  GBJGJEGPHKD_o *pGVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  IEFEBEDLHNN_o *__this_02;
  GEBHIBIEAJE_o *PGHNHNDHEPF;
  MethodInfo *method_00;
  bool_conflict bVar5;
  int iVar6;
  int iVar7;
  
  if ((DAT_04567c6f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__);
    DAT_04567c6f = 1;
  }
  pGVar4 = (__this->fields).HMIAFJALFCJ;
  if (pGVar4 != (GBJGJEGPHKD_o *)0x0) {
    bVar2 = (pGVar4->fields).FJHAMMNKBPN;
    __this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar4,(MethodInfo *)0x0);
    pGVar4 = (__this->fields).HMIAFJALFCJ;
    if ((pGVar4 != (GBJGJEGPHKD_o *)0x0) &&
       (__this_01 = GBJGJEGPHKD__MPGCPFKOCOB(pGVar4,(MethodInfo *)0x0),
       __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
      iVar6 = (__this_00->fields)._size;
      if (0 < iVar6) {
        iVar7 = 0;
        do {
          __this_02 = (IEFEBEDLHNN_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,iVar7,
                                 Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
          if (__this_02 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499d40;
          bVar3 = IEFEBEDLHNN__GEJMNCILEGJ(__this_02,(MethodInfo *)0x0);
          if ((bVar3) && ((__this_02->fields).MCKFLABMNAK == false)) {
            if ((__this->fields).BNHJIKJAHHF == false) {
              bVar5 = (__this_02->fields).LAIDIGOPNLB;
              if ((bVar2 != false) && (bVar5 == false)) {
                bVar5 = (__this_02->fields).FJHAMMNKBPN;
              }
            }
            else {
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          iVar7 = iVar7 + 1;
          (__this_02->fields).EKMNMODEKKP = bVar5;
        } while (iVar6 != iVar7);
      }
      iVar6 = (__this->fields).LMIMAJBNOIL;
      if (0 < iVar6) {
        if (__this_01 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) goto LAB_03499d40;
        iVar7 = 0;
        do {
          iVar1 = (__this_01->fields)._size;
          if (0 < iVar1) {
            iVar6 = 0;
            do {
              method_00 = Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__;
              PGHNHNDHEPF = (GEBHIBIEAJE_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_01,iVar6,
                                       (MethodInfo_26E4ADC *)
                                       Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__
                                      );
              if (bVar2 == false) {
LAB_03499d04:
                MMDPNDAECII__MPLGBEILHIP(__this,PGHNHNDHEPF,method_00);
              }
              else {
                if (PGHNHNDHEPF == (GEBHIBIEAJE_o *)0x0) goto LAB_03499d40;
                if ((PGHNHNDHEPF->fields).GGCKJHKNEAM == false) goto LAB_03499d04;
              }
              iVar6 = iVar6 + 1;
            } while (iVar1 != iVar6);
            iVar6 = (__this->fields).LMIMAJBNOIL;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
      }
      return;
    }
  }
LAB_03499d40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

