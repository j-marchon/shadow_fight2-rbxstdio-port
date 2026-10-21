// NIGMCJIMBHO$$MergeFrom @ RVA 0x337AEC8

void NIGMCJIMBHO__MergeFrom
               (NIGMCJIMBHO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  NIGMCJIMBHO_Fields *pNVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pNVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 10) {
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadBytes(AIGOBLJEBCA,(MethodInfo *)0x0);
        NIGMCJIMBHO__AKKHFOGFIMC(__this,CJNHFNHJHPE,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pNVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pNVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pNVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

