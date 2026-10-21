// EKCGNICFDEO$$MergeFrom @ RVA 0x351AFC8

void EKCGNICFDEO__MergeFrom
               (EKCGNICFDEO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EKCGNICFDEO_Fields *pEVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* catch() { ... } // from try @ 0361afb0 with catch @ 0361afd8 */
    pEVar1 = &__this->fields;
    while( true ) {
      while( true ) {
                    /* try { // try from 0361afe0 to 0371afe7 has its CatchHandler @ 0361affc */
                    /* try { // try from 0361afe8 to 0371aff3 has its CatchHandler @ 0361acf0 */
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          EKCGNICFDEO__EKGMIDPANDE(__this,CJNHFNHJHPE,method);
        }
                    /* try { // try from 0361aff4 to 0371affb has its CatchHandler @ 0361affc */
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).CMKMIFIIGBK = iVar3;
      }
                    /* catch() { ... } // from try @ 0361af50 with catch @ 0361affc
                       catch() { ... } // from try @ 0361afe0 with catch @ 0361affc
                       catch() { ... } // from try @ 0361aff4 with catch @ 0361affc */
      if (uVar2 == 0) break;
                    /* try { // try from 0361b000 to 0371b0e3 has its CatchHandler @ 0361b000
                       catch() { ... } // from try @ 0361b000 with catch @ 0361b000
                       catch() { ... } // from try @ 0361b1e8 with catch @ 0361b000
                       catch() { ... } // from try @ 0361b28c with catch @ 0361b000
                       catch() { ... } // from try @ 0361b294 with catch @ 0361b000
                       catch() { ... } // from try @ 0361b350 with catch @ 0361b000 */
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pEVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pEVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pEVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

