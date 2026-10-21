// NGOFOPOGBMJ$$MergeFrom @ RVA 0x34E5CB0

void NGOFOPOGBMJ__MergeFrom
               (NGOFOPOGBMJ_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  NGOFOPOGBMJ_Fields *pNVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
                    /* catch() { ... } // from try @ 035e5c94 with catch @ 035e5cb8 */
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* catch() { ... } // from try @ 035e5bb8 with catch @ 035e5cbc */
                    /* catch() { ... } // from try @ 035e5bc8 with catch @ 035e5cc0 */
                    /* catch() { ... } // from try @ 035e5c90 with catch @ 035e5cc4 */
    pNVar1 = &__this->fields;
    while( true ) {
                    /* catch() { ... } // from try @ 035e5ba4 with catch @ 035e5cc8 */
                    /* catch() { ... } // from try @ 035e5b84 with catch @ 035e5ccc */
                    /* catch() { ... } // from try @ 035e5c8c with catch @ 035e5cd0 */
                    /* catch() { ... } // from try @ 035e5c84 with catch @ 035e5cd4 */
                    /* catch() { ... } // from try @ 035e5b54 with catch @ 035e5cd8 */
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GDKPGIBMFPA = iVar4;
      }
                    /* catch() { ... } // from try @ 035e5c80 with catch @ 035e5cdc */
      if (uVar2 == 0) break;
                    /* catch() { ... } // from try @ 035e5b40 with catch @ 035e5ce0 */
                    /* catch() { ... } // from try @ 035e5b2c with catch @ 035e5ce4 */
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pNVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pNVar1->CKFPENBPNML = pGVar3;
                    /* try { // try from 035e5cfc to 036e5cff has its CatchHandler @ 035e5d28 */
      thunk_FUN_01c20e04(pNVar1,pGVar3);
                    /* try { // try from 035e5d00 to 036e5d37 has its CatchHandler @ 035e5998 */
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

