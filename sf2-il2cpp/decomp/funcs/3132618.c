// AFLJMCMKCIG$$MergeFrom @ RVA 0x3132618

void AFLJMCMKCIG__MergeFrom(AFLJMCMKCIG_o *__this,AFLJMCMKCIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  AFLJMCMKCIG_Fields *pAVar3;
  
  if (IBKIPBJJCPG == (AFLJMCMKCIG_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
  if (iVar1 != 0) {
    (__this->fields).EMDNDLOODLG = iVar1;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).PPDLPBMONBL;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      AFLJMCMKCIG__IIKPNGJAJIH(__this,CJNHFNHJHPE,method);
    }
    pAVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pAVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pAVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pAVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

