// NLBPJNEGNNM$$.ctor @ RVA 0x3556D6C

void NLBPJNEGNNM___ctor(NLBPJNEGNNM_o *__this,NLBPJNEGNNM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  HCFOFHGNBKP_o *pHVar2;
  GLPEFEEGCPM_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NLBPJNEGNNM_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (NLBPJNEGNNM_o *)0x0) {
      (__this->fields).OPHCNELIOLD = pKVar1;
      thunk_FUN_01c20e04();
      pHVar2 = (IBKIPBJJCPG->fields).PMMFPJJOPKE;
      if (pHVar2 == (HCFOFHGNBKP_o *)0x0) {
        pHVar2 = (HCFOFHGNBKP_o *)0x0;
      }
      else {
        pHVar2 = HCFOFHGNBKP__Clone(pHVar2,(MethodInfo *)0x0);
      }
      (__this->fields).PMMFPJJOPKE = pHVar2;
      thunk_FUN_01c20e04();
      pGVar3 = (IBKIPBJJCPG->fields).IIIJBPAFNNF;
      if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
        pGVar3 = (GLPEFEEGCPM_o *)0x0;
      }
      else {
        pGVar3 = GLPEFEEGCPM__Clone(pGVar3,(MethodInfo *)0x0);
      }
      (__this->fields).IIIJBPAFNNF = pGVar3;
      thunk_FUN_01c20e04();
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

