// EEHFEPPDBHL$$MergeFrom @ RVA 0x329C39C

void EEHFEPPDBHL__MergeFrom(EEHFEPPDBHL_o *__this,EEHFEPPDBHL_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *pSVar3;
  EEHFEPPDBHL_Fields *pEVar4;
  
  if (IBKIPBJJCPG == (EEHFEPPDBHL_o *)0x0) {
    return;
  }
  pSVar3 = (IBKIPBJJCPG->fields).KKMDFLKPNNJ;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength != 0) {
      EEHFEPPDBHL__HLPHKOBKPML(__this,pSVar3,method);
    }
    pSVar3 = (IBKIPBJJCPG->fields).JAAACMPGMKJ;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        EEHFEPPDBHL__FFHJDGPNCKJ(__this,pSVar3,method);
      }
      iVar1 = (IBKIPBJJCPG->fields).JODJOLBBJNI;
      if (iVar1 != 0) {
        (__this->fields).JODJOLBBJNI = iVar1;
      }
      iVar1 = (IBKIPBJJCPG->fields).IFICKDAKCHN;
      if (iVar1 != 0) {
        (__this->fields).IFICKDAKCHN = iVar1;
      }
      pEVar4 = &__this->fields;
      pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pEVar4->CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(pEVar4,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

