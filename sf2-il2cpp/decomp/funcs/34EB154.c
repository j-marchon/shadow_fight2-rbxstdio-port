// OLKKAIFGGAK$$KFJJOIHBPEF @ RVA 0x34EB154

void OLKKAIFGGAK__KFJJOIHBPEF(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  NKDMOOEFPHJ_o *pNVar1;
  OPNFCOGALLI_o *pOVar2;
  OLKKAIFGGAK_o *pOVar3;
  OLKKAIFGGAK_o *pOVar4;
  ECENNHNBAME_o *NLEBDPHNIDI;
  
  pOVar2 = (__this->fields).OAKOFJJIOFF;
  if (pOVar2 == (OPNFCOGALLI_o *)0x0) {
    NLEBDPHNIDI = (ECENNHNBAME_o *)0x0;
  }
  else {
    NLEBDPHNIDI = (pOVar2->fields).NDBPNFLAKDL;
  }
  pOVar3 = (__this->fields).BPJMMBGIMNC;
  if (pOVar3 != (OLKKAIFGGAK_o *)0x0) {
    do {
      pOVar4 = pOVar3;
      pOVar3 = (pOVar4->fields).NFMBPIPEKGF;
    } while (pOVar3 != (OLKKAIFGGAK_o *)0x0);
    pNVar1 = (pOVar4->fields).LLMNNPKEGMB;
    if (pNVar1 == (NKDMOOEFPHJ_o *)0x0) goto LAB_035eb1cc;
    NKDMOOEFPHJ__ADMAIMDJBLI(pNVar1,true,NLEBDPHNIDI,(MethodInfo *)0x0);
  }
  do {
    pOVar3 = __this;
    __this = (pOVar3->fields).NFMBPIPEKGF;
  } while (__this != (OLKKAIFGGAK_o *)0x0);
  pNVar1 = (pOVar3->fields).LLMNNPKEGMB;
  if (pNVar1 != (NKDMOOEFPHJ_o *)0x0) {
    NKDMOOEFPHJ__ADMAIMDJBLI(pNVar1,false,NLEBDPHNIDI,(MethodInfo *)0x0);
    return;
  }
LAB_035eb1cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

