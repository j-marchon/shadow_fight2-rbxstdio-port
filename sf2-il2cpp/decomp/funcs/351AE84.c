// EKCGNICFDEO$$MergeFrom @ RVA 0x351AE84

void EKCGNICFDEO__MergeFrom(EKCGNICFDEO_o *__this,EKCGNICFDEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  EKCGNICFDEO_Fields *pEVar3;
  
  if (IBKIPBJJCPG == (EKCGNICFDEO_o *)0x0) {
                    /* try { // try from 0361aee4 to 0371aeef has its CatchHandler @ 0361aef4 */
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).BJGJOHGJCKC;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
                    /* try { // try from 0361aea0 to 0371aec3 has its CatchHandler @ 0361aef4 */
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      EKCGNICFDEO__EKGMIDPANDE(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).CMKMIFIIGBK;
    if (iVar1 != 0) {
      (__this->fields).CMKMIFIIGBK = iVar1;
    }
    pEVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 0361aecc to 0371aed3 has its CatchHandler @ 0361af9c */
    pEVar3->CKFPENBPNML = pGVar2;
                    /* try { // try from 0361aedc to 0371aedf has its CatchHandler @ 0361aef8 */
    thunk_FUN_01c20e04(pEVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361aef0 to 0371af0f has its CatchHandler @ 0361acf0 */
  FUN_01bab8c8();
}

