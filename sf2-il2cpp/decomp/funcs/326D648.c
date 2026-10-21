// LMEMJBOBHBE$$MergeFrom @ RVA 0x326D648

void LMEMJBOBHBE__MergeFrom
               (LMEMJBOBHBE_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  LMEMJBOBHBE_Fields *pLVar1;
  uint32_t uVar2;
  int32_t iVar3;
  int64_t iVar4;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pLVar1 = &__this->fields;
  do {
    while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0x11 < (int)uVar2) {
      if (uVar2 == 0x12) {
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        LMEMJBOBHBE__OPKJBABEHFH(__this,CJNHFNHJHPE,method);
      }
      else if (uVar2 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).PHICOONBADJ = iVar4;
      }
      else {
LAB_0336d6d4:
        method = (MethodInfo *)0x0;
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pLVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pLVar1->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pLVar1,pGVar5);
      }
    }
    if (uVar2 != 8) {
      if (uVar2 == 0) {
        return;
      }
      goto LAB_0336d6d4;
    }
    iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
    (__this->fields).MOCOKGFIJFP = iVar3;
  } while( true );
}

