// KDADMJGPAOM$$MergeFrom @ RVA 0x3393C30

void KDADMJGPAOM__MergeFrom
               (KDADMJGPAOM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KDADMJGPAOM_Fields *pKVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar1 = &__this->fields;
  do {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    switch(uVar2 >> 3 | uVar2 << 0x1d) {
    case 0:
      return;
    case 1:
      iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).IILCHFKCEEH = iVar3;
      break;
    case 2:
      iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).PDGEHKCPGDK = iVar3;
      break;
    case 3:
      iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).IOJIABMGMGB = iVar3;
      break;
    default:
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pKVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pKVar1,pGVar4);
    }
  } while( true );
}

