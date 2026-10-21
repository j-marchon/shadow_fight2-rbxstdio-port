// KGBIBHEFBHA$$MergeFrom @ RVA 0x33041C8

void KGBIBHEFBHA__MergeFrom
               (KGBIBHEFBHA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KGBIBHEFBHA_Fields *pKVar1;
  uint uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
                    /* catch() { ... } // from try @ 03403fc0 with catch @ 034041c8 */
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034041d8 to 035041db has its CatchHandler @ 03404200 */
                    /* try { // try from 034041dc to 03504207 has its CatchHandler @ 03403ba8 */
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pKVar1 = &__this->fields;
    do {
      if (uVar2 < 0x11) {
        if (uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ANAJGHJEEOC = iVar5;
                    /* catch() { ... } // from try @ 03403f40 with catch @ 03404274
                       try { // try from 03404274 to 03504283 has its CatchHandler @ 03403ba8 */
        }
        else {
                    /* catch() { ... } // from try @ 034041d8 with catch @ 03404200 */
          if (uVar2 == 0x10) {
                    /* try { // try from 03404208 to 0350421b has its CatchHandler @ 034042d0 */
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).HCBJCMDLODI = iVar3;
          }
          else {
LAB_03404240:
            pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pKVar1->CKFPENBPNML = pGVar4;
                    /* catch() { ... } // from try @ 03404234 with catch @ 03404258 */
            thunk_FUN_01c20e04(pKVar1,pGVar4);
                    /* try { // try from 03404260 to 03504273 has its CatchHandler @ 034042d0 */
          }
        }
      }
      else {
                    /* catch() { ... } // from try @ 03403d8c with catch @ 0340421c
                       try { // try from 0340421c to 03504233 has its CatchHandler @ 03403ba8 */
                    /* catch() { ... } // from try @ 03403edc with catch @ 03404220 */
        if (uVar2 == 0x18) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03404284 to 03504287 has its CatchHandler @ 034042ac */
          (__this->fields).NLLKMEMKBAF = iVar3;
        }
        else {
                    /* catch() { ... } // from try @ 03403e38 with catch @ 03404224 */
          if (uVar2 != 0x20) goto LAB_03404240;
                    /* try { // try from 03404234 to 03504237 has its CatchHandler @ 03404258 */
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03404238 to 0350425f has its CatchHandler @ 03403ba8 */
          (__this->fields).NCDPJGNAKPN = iVar3;
        }
      }
                    /* try { // try from 03404288 to 035042b3 has its CatchHandler @ 03403ba8 */
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}

