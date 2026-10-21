// AJINOJNMEEK$$MergeFrom @ RVA 0x304DEC0

void AJINOJNMEEK__MergeFrom(AJINOJNMEEK_o *__this,AJINOJNMEEK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  AJINOJNMEEK_Fields *pAVar5;
  System_String_o **ppSVar6;
  
                    /* try { // try from 0314ded8 to 0324dedb has its CatchHandler @ 0314df4c */
  if ((DAT_04565e27 & 1) == 0) {
                    /* try { // try from 0314dedc to 0324df3b has its CatchHandler @ 0314dae8 */
    FUN_01bab630(&StringLiteral_1);
    DAT_04565e27 = 1;
  }
  if (IBKIPBJJCPG == (AJINOJNMEEK_o *)0x0) {
                    /* catch() { ... } // from try @ 0314df70 with catch @ 0314df88 */
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
  if (iVar1 != 0) {
    (__this->fields).EMDNDLOODLG = iVar1;
  }
  pSVar4 = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
  if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar4->fields)._stringLength != 0) {
    AJINOJNMEEK__IPNMMELEIJE(__this,pSVar4,method);
  }
  pSVar4 = (IBKIPBJJCPG->fields).ABFBDJFPIMM;
  if (pSVar4 != (System_String_o *)0x0) {
    ppSVar6 = &(__this->fields).ABFBDJFPIMM;
    if (*ppSVar6 != (System_String_o *)0x0) {
                    /* try { // try from 0314df3c to 0324df3f has its CatchHandler @ 0314df48 */
                    /* try { // try from 0314df40 to 0324df6f has its CatchHandler @ 0314dae8 */
      bVar2 = System_String__op_Inequality(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314df3c with catch @ 0314df48
                        */
      if (!bVar2) goto LAB_0314df5c;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314ded8 with catch @ 0314df4c
                        */
      pSVar4 = (IBKIPBJJCPG->fields).ABFBDJFPIMM;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314dd7c with catch @ 0314df50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314dd20 with catch @ 0314df54
                        */
    *ppSVar6 = pSVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314dda4 with catch @ 0314df58
                        */
    thunk_FUN_01c20e04(ppSVar6);
  }
LAB_0314df5c:
  pAVar5 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pAVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 0314df70 to 0324df73 has its CatchHandler @ 0314df88 */
  pAVar5->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pAVar5,pGVar3);
  return;
}

