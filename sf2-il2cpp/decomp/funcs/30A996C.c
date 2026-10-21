// HCKHJECBIJC$$MergeFrom @ RVA 0x30A996C

void HCKHJECBIJC__MergeFrom
               (HCKHJECBIJC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  HCKHJECBIJC_Fields *pHVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* try { // try from 031a997c to 032a99af has its CatchHandler @ 031a997c
                       catch() { ... } // from try @ 031a997c with catch @ 031a997c
                       catch() { ... } // from try @ 031a9ac0 with catch @ 031a997c
                       catch() { ... } // from try @ 031a9ba4 with catch @ 031a997c
                       catch() { ... } // from try @ 031a9c04 with catch @ 031a997c
                       catch() { ... } // from try @ 031a9ca0 with catch @ 031a997c */
    pHVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 031a99e8 to 032a99f7 has its CatchHandler @ 031a9bb8 */
          (__this->fields).GCDBBHAFJPN = iVar3;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 031a99d4 to 032a99db has its CatchHandler @ 031a9bc4 */
        (__this->fields).CCCDGBNPNOD = iVar3;
      }
      if (uVar2 == 0) break;
                    /* try { // try from 031a99b0 to 032a99c7 has its CatchHandler @ 031a9bc8 */
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pHVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

