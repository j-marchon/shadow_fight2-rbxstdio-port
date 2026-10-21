// OPNFCOGALLI$$AECCPFDPPOK @ RVA 0x310842C

void OPNFCOGALLI__AECCPFDPPOK(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int iVar1;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  IEFEBEDLHNN_o *pIVar2;
  ECENNHNBAME_o *pEVar3;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar4;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar5;
  
  if ((DAT_04566531 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04566531 = 1;
  }
  pEVar3 = (__this->fields).NDBPNFLAKDL;
  if (((pEVar3 != (ECENNHNBAME_o *)0x0) &&
      (pEVar4 = (pEVar3->fields).DMGLMCBIAGL, pEVar4 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) &&
     (pEVar5 = (pEVar4->fields).EJNDOMGCGFL, pEVar5 != (ECENNHNBAME_KFMLLPPCPHI_o *)0x0)) {
    iVar1 = (pEVar5->fields).HHLJNICBMDA;
    if (iVar1 < 0) {
      (__this->fields).BAAPAKJGOMG = (IEFEBEDLHNN_o *)0x0;
      pIVar2 = (IEFEBEDLHNN_o *)0x0;
    }
    else {
      __this_00 = (__this->fields).KOHECBJAFKG;
      (__this->fields).NOEPMCHIBOL = iVar1;
      if ((__this_00 == (GBJGJEGPHKD_o *)0x0) ||
         (__this_01 = GBJGJEGPHKD__HMAAHELNECD(__this_00,(MethodInfo *)0x0),
         __this_01 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_032084cc;
      pIVar2 = (IEFEBEDLHNN_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (__this->fields).NOEPMCHIBOL,
                          Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      (__this->fields).BAAPAKJGOMG = pIVar2;
    }
    thunk_FUN_01c20e04(&(__this->fields).BAAPAKJGOMG,pIVar2);
    return;
  }
LAB_032084cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

