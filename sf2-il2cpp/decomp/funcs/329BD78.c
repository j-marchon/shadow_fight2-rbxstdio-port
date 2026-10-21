// EEHFEPPDBHL$$MergeFrom @ RVA 0x329BD78

void EEHFEPPDBHL__MergeFrom
               (EEHFEPPDBHL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EEHFEPPDBHL_Fields *pEVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pEVar1 = &__this->fields;
    do {
      if (uVar2 < 0x13) {
        if (uVar2 == 10) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          EEHFEPPDBHL__HLPHKOBKPML(__this,pSVar4,method);
        }
        else if (uVar2 == 0x12) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          EEHFEPPDBHL__FFHJDGPNCKJ(__this,pSVar4,method);
        }
        else {
LAB_0339bdf8:
          method = (MethodInfo *)0x0;
          pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pEVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pEVar1->CKFPENBPNML = pGVar5;
          thunk_FUN_01c20e04(pEVar1,pGVar5);
        }
      }
      else if (uVar2 == 0x18) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).JODJOLBBJNI = iVar3;
      }
      else {
        if (uVar2 != 0x20) goto LAB_0339bdf8;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IFICKDAKCHN = iVar3;
      }
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}

