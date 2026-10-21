// KEGDLHPEJBG$$MergeFrom @ RVA 0x35A8FF4

void KEGDLHPEJBG__MergeFrom
               (KEGDLHPEJBG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KEGDLHPEJBG_Fields *pKVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          KEGDLHPEJBG__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar2 != 0x10) break;
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).HFHGCALGKHH = iVar4;
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
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

