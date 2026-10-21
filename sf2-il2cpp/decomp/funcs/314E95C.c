// KBLFOOJFIIG$$MergeFrom @ RVA 0x314E95C

void KBLFOOJFIIG__MergeFrom
               (KBLFOOJFIIG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KBLFOOJFIIG_Fields *pKVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GDKPGIBMFPA = iVar4;
      }
      if (uVar2 == 0) break;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pKVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pKVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

