// HBLHCCMEEEC$$MergeFrom @ RVA 0x3153B24

void HBLHCCMEEEC__MergeFrom
               (HBLHCCMEEEC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  HBLHCCMEEEC_Fields *pHVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pHVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IAAJODFMEIC = iVar5;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).HEOOKBCLBGN = iVar3;
      }
      if (uVar2 == 0) break;
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

