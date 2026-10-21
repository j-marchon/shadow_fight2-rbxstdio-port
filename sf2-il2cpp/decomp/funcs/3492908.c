// ALOGBMGGBEP$$MergeFrom @ RVA 0x3492908

void ALOGBMGGBEP__MergeFrom
               (ALOGBMGGBEP_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  ALOGBMGGBEP_Fields *pAVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pAVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          ALOGBMGGBEP__CNILLEFMALH(__this,pSVar4,method);
        }
        if (uVar2 != 0x12) break;
        pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        ALOGBMGGBEP__BKDOEIHJFAP(__this,pSVar4,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pAVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pAVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pAVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

