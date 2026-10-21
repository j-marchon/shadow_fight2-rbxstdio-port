// GBJGJEGPHKD$$HJHKDOPGJLM @ RVA 0x342DB48

IEFEBEDLHNN_o *
GBJGJEGPHKD__HJHKDOPGJLM(GBJGJEGPHKD_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  IEFEBEDLHNN_o *pIVar2;
  GBJGJEGPHKD_o *__this_00;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar3;
  OLKKAIFGGAK_o *pOVar4;
  
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if (pGVar3 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
LAB_0352dbd4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pGVar3->fields).LNBKBMNLJNG != (IEFEBEDLHNN_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality(KGLJICLJHEL,(__this->fields).HICKHACBDAC,(MethodInfo *)0x0);
    if (bVar1) {
      pGVar3 = (__this->fields).EOIPAPCMGGF;
      if (pGVar3 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
        return (pGVar3->fields).LNBKBMNLJNG;
      }
      goto LAB_0352dbd4;
    }
  }
  pIVar2 = GBJGJEGPHKD__OCJAHBKIFNO(__this,KGLJICLJHEL,method);
  if (pIVar2 == (IEFEBEDLHNN_o *)0x0) {
    pOVar4 = (__this->fields).KOHECBJAFKG;
    if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
       (pOVar4 = (pOVar4->fields).NFMBPIPEKGF, pOVar4 != (OLKKAIFGGAK_o *)0x0)) {
      __this_00 = (pOVar4->fields).HMIAFJALFCJ;
      if (__this_00 != (GBJGJEGPHKD_o *)0x0) {
        pIVar2 = GBJGJEGPHKD__OCJAHBKIFNO(__this_00,KGLJICLJHEL,method);
        return pIVar2;
      }
      goto LAB_0352dbd4;
    }
    pIVar2 = (IEFEBEDLHNN_o *)0x0;
  }
  return pIVar2;
}

