// LMEMJBOBHBE$$MergeFrom @ RVA 0x326DAF8

void LMEMJBOBHBE__MergeFrom(LMEMJBOBHBE_o *__this,LMEMJBOBHBE_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  long lVar3;
  LMEMJBOBHBE_Fields *pLVar4;
  
  if (IBKIPBJJCPG == (LMEMJBOBHBE_o *)0x0) {
                    /* try { // try from 0336db6c to 0346db73 has its CatchHandler @ 0336dc0c */
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).MOCOKGFIJFP;
  if (iVar1 != 0) {
    (__this->fields).MOCOKGFIJFP = iVar1;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      LMEMJBOBHBE__OPKJBABEHFH(__this,CJNHFNHJHPE,method);
    }
    lVar3 = (IBKIPBJJCPG->fields).PHICOONBADJ;
    if (lVar3 != 0) {
      (__this->fields).PHICOONBADJ = lVar3;
    }
    pLVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pLVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pLVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pLVar4,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

