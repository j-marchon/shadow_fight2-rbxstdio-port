// KMAOIKKMFJF$$MergeFrom @ RVA 0x3032AF4

void KMAOIKKMFJF__MergeFrom
               (KMAOIKKMFJF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KMAOIKKMFJF_Fields *pKVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).CMKMIFIIGBK = iVar3;
        }
        if (uVar2 != 0x10) break;
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).ANAJGHJEEOC = iVar5;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pKVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pKVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

