// ALOGBMGGBEP$$.ctor @ RVA 0x3492244

void ALOGBMGGBEP___ctor(ALOGBMGGBEP_o *__this,ALOGBMGGBEP_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  ALOGBMGGBEP___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (ALOGBMGGBEP_o *)0x0) {
    (__this->fields).KBNAEBFHCKD = (IBKIPBJJCPG->fields).KBNAEBFHCKD;
    thunk_FUN_01c20e04();
    (__this->fields).FICPNGIAKEH = (IBKIPBJJCPG->fields).FICPNGIAKEH;
    thunk_FUN_01c20e04();
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

