// CBPENMDOJDB$$MergeFrom @ RVA 0x3103AC8

void CBPENMDOJDB__MergeFrom
               (CBPENMDOJDB_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  CBPENMDOJDB_Fields *pCVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int64_t iVar6;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pCVar1 = &__this->fields;
    do {
      if (uVar2 < 0x1b) {
        if (uVar2 == 8) {
                    /* try { // try from 03203bb0 to 03303c07 has its CatchHandler @ 03203a0c */
          iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ADEIKPGDIPM = iVar6;
        }
        else if (uVar2 == 0x12) {
                    /* try { // try from 03203b80 to 03303b8b has its CatchHandler @ 03203cd4 */
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          CBPENMDOJDB__HCOCAAIGNNL(__this,pSVar4,method);
                    /* try { // try from 03203b94 to 03303b9f has its CatchHandler @ 03203cd0 */
        }
        else if (uVar2 == 0x1a) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          CBPENMDOJDB__FFHJDGPNCKJ(__this,pSVar4,method);
        }
        else {
LAB_03203b58:
                    /* try { // try from 03203b58 to 03303b5f has its CatchHandler @ 03203ce4 */
          method = (MethodInfo *)0x0;
          pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pCVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pCVar1->CKFPENBPNML = pGVar5;
          thunk_FUN_01c20e04(pCVar1,pGVar5);
        }
      }
      else if (uVar2 == 0x20) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).DIILCCNFMEB = iVar3;
      }
      else if (uVar2 == 0x28) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03203ba4 to 03303baf has its CatchHandler @ 03203ccc */
        (__this->fields).GOBHKPNEJFN = iVar3;
      }
      else {
        if (uVar2 != 0x30) goto LAB_03203b58;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).NLLKMEMKBAF = iVar3;
      }
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}

