// CBPENMDOJDB$$MergeFrom @ RVA 0x31034A8

void CBPENMDOJDB__MergeFrom(CBPENMDOJDB_o *__this,CBPENMDOJDB_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *pSVar3;
  long lVar4;
  CBPENMDOJDB_Fields *pCVar5;
  
  if (IBKIPBJJCPG == (CBPENMDOJDB_o *)0x0) {
    return;
  }
  lVar4 = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
  if (lVar4 != 0) {
    (__this->fields).ADEIKPGDIPM = lVar4;
  }
  pSVar3 = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength != 0) {
      CBPENMDOJDB__HCOCAAIGNNL(__this,pSVar3,method);
    }
    pSVar3 = (IBKIPBJJCPG->fields).JAAACMPGMKJ;
                    /* try { // try from 032034e4 to 033035a7 has its CatchHandler @ 032034e4
                       catch() { ... } // from try @ 032034e4 with catch @ 032034e4
                       catch() { ... } // from try @ 03203604 with catch @ 032034e4
                       catch() { ... } // from try @ 03203634 with catch @ 032034e4
                       catch() { ... } // from try @ 032036b0 with catch @ 032034e4
                       catch() { ... } // from try @ 03203734 with catch @ 032034e4
                       catch() { ... } // from try @ 0320373c with catch @ 032034e4
                       catch() { ... } // from try @ 03203770 with catch @ 032034e4
                       catch() { ... } // from try @ 0320379c with catch @ 032034e4
                       catch() { ... } // from try @ 032037dc with catch @ 032034e4 */
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        CBPENMDOJDB__FFHJDGPNCKJ(__this,pSVar3,method);
      }
      iVar1 = (IBKIPBJJCPG->fields).DIILCCNFMEB;
      if (iVar1 != 0) {
        (__this->fields).DIILCCNFMEB = iVar1;
      }
      iVar1 = (IBKIPBJJCPG->fields).GOBHKPNEJFN;
      if (iVar1 != 0) {
        (__this->fields).GOBHKPNEJFN = iVar1;
      }
      iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
      if (iVar1 != 0) {
        (__this->fields).NLLKMEMKBAF = iVar1;
      }
      pCVar5 = &__this->fields;
      pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pCVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pCVar5->CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(pCVar5,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

