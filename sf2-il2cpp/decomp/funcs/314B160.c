// FDHCLNDLIDG$$.ctor @ RVA 0x314B160

void FDHCLNDLIDG___ctor(FDHCLNDLIDG_o *__this,FDHCLNDLIDG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  FDHCLNDLIDG___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (FDHCLNDLIDG_o *)0x0) {
    (__this->fields).FFOIEHLJLDA = (IBKIPBJJCPG->fields).FFOIEHLJLDA;
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

