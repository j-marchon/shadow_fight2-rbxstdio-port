// ENFPENIMCIK$$MergeFrom @ RVA 0x3378B14

void ENFPENIMCIK__MergeFrom
               (ENFPENIMCIK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  ENFPENIMCIK_Fields *pEVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
                    /* try { // try from 03478b18 to 03578b33 has its CatchHandler @ 03479b98 */
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pEVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          ENFPENIMCIK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03478b7c to 03578b9f has its CatchHandler @ 03479ab8 */
        (__this->fields).CBIFOEGLMNM = iVar3;
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pEVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pEVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pEVar1,pGVar4);
    }
                    /* try { // try from 03478ba0 to 03578d0b has its CatchHandler @ 03477bc4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

