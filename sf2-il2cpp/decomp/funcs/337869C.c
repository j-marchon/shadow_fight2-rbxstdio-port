// ENFPENIMCIK$$MergeFrom @ RVA 0x337869C

void ENFPENIMCIK__MergeFrom(ENFPENIMCIK_o *__this,ENFPENIMCIK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  ENFPENIMCIK_Fields *pEVar3;
  
  if (IBKIPBJJCPG == (ENFPENIMCIK_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      ENFPENIMCIK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).CBIFOEGLMNM;
    if (iVar1 != 0) {
      (__this->fields).CBIFOEGLMNM = iVar1;
    }
    pEVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pEVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

