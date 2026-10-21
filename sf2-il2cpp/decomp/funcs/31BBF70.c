// FAACNCKMEJM$$MergeFrom @ RVA 0x31BBF70

void FAACNCKMEJM__MergeFrom(FAACNCKMEJM_o *__this,FAACNCKMEJM_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *CJNHFNHJHPE;
  FAACNCKMEJM_Fields *pFVar2;
  
  if (IBKIPBJJCPG == (FAACNCKMEJM_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      FAACNCKMEJM__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    if ((IBKIPBJJCPG->fields).FAJBKFIAOPL != false) {
      (__this->fields).FAJBKFIAOPL = true;
    }
    pFVar2 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pFVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pFVar2->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pFVar2,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

