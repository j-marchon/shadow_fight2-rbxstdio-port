// HBHFOKIPAHA$$.ctor @ RVA 0x338FA6C

void HBHFOKIPAHA___ctor(HBHFOKIPAHA_o *__this,HBHFOKIPAHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  int64_t iVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HBHFOKIPAHA_o *)0x0) {
    iVar2 = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    (__this->fields).MKGNDFBBANC = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    (__this->fields).MAHGAIJBBHF = iVar2;
    (__this->fields).IGBAAAHPLAA = (IBKIPBJJCPG->fields).IGBAAAHPLAA;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

