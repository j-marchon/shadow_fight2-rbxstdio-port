// HBHFOKIPAHA$$MergeFrom @ RVA 0x338FD58

void HBHFOKIPAHA__MergeFrom
               (HBHFOKIPAHA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  HBHFOKIPAHA_Fields *pHVar1;
  uint32_t uVar2;
  int32_t iVar3;
  int64_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pHVar1 = &__this->fields;
  do {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    switch(uVar2 >> 3 | uVar2 << 0x1d) {
    case 0:
      return;
    case 1:
      iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).MAHGAIJBBHF = iVar4;
      break;
    case 2:
      iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).MKGNDFBBANC = iVar4;
      break;
    case 3:
      iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).IGBAAAHPLAA = iVar3;
      break;
    default:
      pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar1->CKFPENBPNML = pGVar5;
      thunk_FUN_01c20e04(pHVar1,pGVar5);
    }
  } while( true );
}

