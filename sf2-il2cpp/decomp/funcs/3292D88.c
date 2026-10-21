// OJFPEINHCDP$$.ctor @ RVA 0x3292D88

void OJFPEINHCDP___ctor(OJFPEINHCDP_o *__this,OJFPEINHCDP_o *IBKIPBJJCPG,MethodInfo *method)

{
  NODLJPNGNBG_o *pNVar1;
  KDADMJGPAOM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OJFPEINHCDP_o *)0x0) {
    pNVar1 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pNVar1 == (NODLJPNGNBG_o *)0x0) {
      pNVar1 = (NODLJPNGNBG_o *)0x0;
    }
    else {
      pNVar1 = NODLJPNGNBG__Clone(pNVar1,(MethodInfo *)0x0);
    }
    if (__this != (OJFPEINHCDP_o *)0x0) {
      (__this->fields).OPHCNELIOLD = pNVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).LHFLMBNKPHF;
      if (pKVar2 == (KDADMJGPAOM_o *)0x0) {
        pKVar2 = (KDADMJGPAOM_o *)0x0;
      }
      else {
        pKVar2 = KDADMJGPAOM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).LHFLMBNKPHF = pKVar2;
      thunk_FUN_01c20e04();
      (__this->fields).KLOGBBKOLFL = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

