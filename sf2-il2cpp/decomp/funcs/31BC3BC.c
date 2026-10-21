// FAACNCKMEJM$$MergeFrom @ RVA 0x31BC3BC

void FAACNCKMEJM__MergeFrom
               (FAACNCKMEJM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  FAACNCKMEJM_Fields *pFVar1;
  bool bVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pFVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          FAACNCKMEJM__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar3 != 0x10) break;
        bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).FAJBKFIAOPL = bVar2;
      }
      if (uVar3 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pFVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pFVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pFVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

