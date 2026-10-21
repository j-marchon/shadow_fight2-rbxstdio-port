// PIADCKMDDAK$$MergeFrom @ RVA 0x32BE014

void PIADCKMDDAK__MergeFrom(PIADCKMDDAK_o *__this,PIADCKMDDAK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  PIADCKMDDAK_Fields *pPVar3;
  
  if (IBKIPBJJCPG == (PIADCKMDDAK_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      PIADCKMDDAK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (iVar1 != 0) {
      (__this->fields).GDKPGIBMFPA = iVar1;
    }
    pPVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pPVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pPVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pPVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

