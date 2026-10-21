// DBOOKMFPFNI$$MergeFrom @ RVA 0x34DADA0

void DBOOKMFPFNI__MergeFrom
               (DBOOKMFPFNI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  DBOOKMFPFNI_Fields *pDVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pDVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).LPFKPMGBOGB = iVar3;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pDVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pDVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pDVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

