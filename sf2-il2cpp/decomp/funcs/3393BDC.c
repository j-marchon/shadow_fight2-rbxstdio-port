// KDADMJGPAOM$$.ctor @ RVA 0x3393BDC

void KDADMJGPAOM___ctor(KDADMJGPAOM_o *__this,KDADMJGPAOM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KDADMJGPAOM_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDGEHKCPGDK;
    (__this->fields).IILCHFKCEEH = (IBKIPBJJCPG->fields).IILCHFKCEEH;
    (__this->fields).PDGEHKCPGDK = iVar1;
    (__this->fields).IOJIABMGMGB = (IBKIPBJJCPG->fields).IOJIABMGMGB;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

