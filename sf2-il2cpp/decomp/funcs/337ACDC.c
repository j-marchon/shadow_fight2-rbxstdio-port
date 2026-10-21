// NIGMCJIMBHO$$MergeFrom @ RVA 0x337ACDC

void NIGMCJIMBHO__MergeFrom(NIGMCJIMBHO_o *__this,NIGMCJIMBHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  NIGMCJIMBHO_Fields *pNVar3;
  
                    /* catch() { ... } // from try @ 0347a9d4 with catch @ 0347acdc
                       catch() { ... } // from try @ 0347aa6c with catch @ 0347acdc */
                    /* catch() { ... } // from try @ 0347a964 with catch @ 0347ace0 */
                    /* catch() { ... } // from try @ 0347a9e0 with catch @ 0347ace4 */
  if (IBKIPBJJCPG == (NIGMCJIMBHO_o *)0x0) {
                    /* try { // try from 0347ad40 to 0357ad43 has its CatchHandler @ 0347b6c0 */
    return;
  }
                    /* catch() { ... } // from try @ 0347ac70 with catch @ 0347ace8 */
                    /* catch() { ... } // from try @ 0347a97c with catch @ 0347acec */
  __this_00 = (IBKIPBJJCPG->fields).DKOBFIICAFM;
                    /* catch() { ... } // from try @ 0347a8a4 with catch @ 0347acf0 */
                    /* catch() { ... } // from try @ 0347a8e0 with catch @ 0347acf4 */
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
                    /* catch() { ... } // from try @ 0347a984 with catch @ 0347acf8 */
                    /* catch() { ... } // from try @ 0347a8c4 with catch @ 0347acfc */
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347aca0 with catch @ 0347ad00 */
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 0347a90c with catch @ 0347ad04 */
                    /* catch() { ... } // from try @ 0347a880 with catch @ 0347ad08 */
                    /* catch() { ... } // from try @ 0347ac60 with catch @ 0347ad0c */
      NIGMCJIMBHO__AKKHFOGFIMC(__this,(IBKIPBJJCPG->fields).DKOBFIICAFM,method);
    }
    pNVar3 = &__this->fields;
                    /* catch() { ... } // from try @ 0347a88c with catch @ 0347ad10 */
                    /* catch() { ... } // from try @ 0347ac68 with catch @ 0347ad14
                       catch() { ... } // from try @ 0347ac78 with catch @ 0347ad14
                       catch() { ... } // from try @ 0347ac90 with catch @ 0347ad14 */
                    /* catch() { ... } // from try @ 0347a818 with catch @ 0347ad18 */
                    /* catch() { ... } // from try @ 0347a7bc with catch @ 0347ad1c */
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347a9f4 with catch @ 0347ad20 */
                    /* catch() { ... } // from try @ 0347ac54 with catch @ 0347ad24 */
    pNVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pNVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0347ad44 to 0357b187 has its CatchHandler @ 0347a0b0 */
  FUN_01bab8c8();
}

