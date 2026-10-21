// NLFLMJPNOLF$$MergeFrom @ RVA 0x32A73F0

void NLFLMJPNOLF__MergeFrom
               (NLFLMJPNOLF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  NLFLMJPNOLF_Fields *pNVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int64_t iVar6;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04567401 & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7424 to 034a74b7 has its CatchHandler @ 033a7424
                       catch() { ... } // from try @ 033a7424 with catch @ 033a7424
                       catch() { ... } // from try @ 033a771c with catch @ 033a7424
                       catch() { ... } // from try @ 033a77b8 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7a88 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7b34 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7b70 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7ba0 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7c1c with catch @ 033a7424 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    DAT_04567401 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar3 != 0) {
      pNVar1 = &__this->fields;
      do {
        if (uVar3 < 0x11) {
          if (uVar3 == 8) {
                    /* try { // try from 033a7518 to 034a751f has its CatchHandler @ 033a7810 */
            iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).OHMDCKEDOGH = iVar6;
          }
          else if (uVar3 == 0x10) {
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).IILCHFKCEEH = iVar4;
          }
          else {
LAB_033a74b8:
                    /* try { // try from 033a74b8 to 034a74cf has its CatchHandler @ 033a7838 */
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pNVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pNVar1->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pNVar1,pGVar5);
          }
        }
        else if ((uVar3 == 0x18) || (uVar3 == 0x1a)) {
          __this_00 = (__this->fields).MABPCBMOECE;
          if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)
          goto LAB_033a7548;
                    /* try { // try from 033a74f4 to 034a750b has its CatchHandler @ 033a7834 */
          Google_Protobuf_Collections_RepeatedField<long>__AddEntriesFrom
                    (__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK,
                     Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
        }
        else {
          if (uVar3 != 0x20) goto LAB_033a74b8;
          bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).BHAOPCFDKCG = bVar2;
        }
        uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar3 != 0);
    }
                    /* try { // try from 033a753c to 034a753f has its CatchHandler @ 033a77b8 */
                    /* try { // try from 033a7540 to 034a754b has its CatchHandler @ 033a780c */
    return;
  }
LAB_033a7548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

