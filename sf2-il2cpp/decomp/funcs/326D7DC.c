// LMEMJBOBHBE$$.ctor @ RVA 0x326D7DC

void LMEMJBOBHBE___ctor(LMEMJBOBHBE_o *__this,LMEMJBOBHBE_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  LMEMJBOBHBE___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (LMEMJBOBHBE_o *)0x0) {
    (__this->fields).MOCOKGFIJFP = (IBKIPBJJCPG->fields).MOCOKGFIJFP;
                    /* try { // try from 0336d804 to 0346d82f has its CatchHandler @ 0336ddd4 */
    (__this->fields).MAHGAIJBBHF = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    thunk_FUN_01c20e04();
    (__this->fields).PHICOONBADJ = (IBKIPBJJCPG->fields).PHICOONBADJ;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

