// PICIKPNGDBE$$CHKGAHCDFJF @ RVA 0x35C34E8

void PICIKPNGDBE__CHKGAHCDFJF(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  NILLKLHKLHG_o *pNVar1;
  MMFIDKMDADC_o *pMVar2;
  MMFIDKMDADC_o *pMVar3;
  float fVar4;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c34cc with catch @ 036c34e8
                       catch(type#2 @ 00000000) { ... } // from try @ 036c34e0 with catch @ 036c34e8
                        */
                    /* try { // try from 036c34ec to 037c35bb has its CatchHandler @ 036c34ec
                       catch() { ... } // from try @ 036c34ec with catch @ 036c34ec
                       catch() { ... } // from try @ 036c3628 with catch @ 036c34ec
                       catch() { ... } // from try @ 036c365c with catch @ 036c34ec
                       catch() { ... } // from try @ 036c3688 with catch @ 036c34ec
                       catch() { ... } // from try @ 036c36b8 with catch @ 036c34ec */
  pNVar1 = (__this->fields)._ADDLOEHIBFF_k__BackingField;
  if (pNVar1 != (NILLKLHKLHG_o *)0x0) {
    pMVar2 = NILLKLHKLHG__CHKGAHCDFJF(pNVar1,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._LHLFLPOLGDI_k__BackingField;
    if ((pNVar1 != (NILLKLHKLHG_o *)0x0) &&
       (pMVar3 = NILLKLHKLHG__CHKGAHCDFJF(pNVar1,false,(MethodInfo *)0x0),
       pMVar2 != (MMFIDKMDADC_o *)0x0)) {
      fVar4 = PCOEHCPGBBG__OFFODGKLGOP((pMVar2->fields).HPACPFLKHPK,0.0,(MethodInfo *)0x0);
      (__this->fields)._BIOJBFDLNNA_k__BackingField = fVar4;
      if (pMVar3 != (MMFIDKMDADC_o *)0x0) {
        fVar4 = PCOEHCPGBBG__OFFODGKLGOP((pMVar3->fields).HPACPFLKHPK,0.0,(MethodInfo *)0x0);
        (__this->fields)._IJMLJAMCGPF_k__BackingField = fVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

