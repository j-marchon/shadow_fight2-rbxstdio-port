// PIADCKMDDAK$$MergeFrom @ RVA 0x32BDC0C

void PIADCKMDDAK__MergeFrom
               (PIADCKMDDAK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PIADCKMDDAK_Fields *pPVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pPVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          PIADCKMDDAK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GDKPGIBMFPA = iVar3;
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pPVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pPVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pPVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

