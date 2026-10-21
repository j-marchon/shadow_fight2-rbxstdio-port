// LMEMJBOBHBE$$CalculateSize @ RVA 0x326DBCC

int32_t LMEMJBOBHBE__CalculateSize(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *value_00;
  long value_01;
  
                    /* catch() { ... } // from try @ 0336da7c with catch @ 0336dbcc */
                    /* catch() { ... } // from try @ 0336dba0 with catch @ 0336dbd0 */
                    /* catch() { ... } // from try @ 0336db98 with catch @ 0336dbd4 */
                    /* catch() { ... } // from try @ 0336da58 with catch @ 0336dbd8 */
                    /* catch() { ... } // from try @ 0336da48 with catch @ 0336dbdc */
                    /* catch() { ... } // from try @ 0336db90 with catch @ 0336dbe0 */
                    /* catch() { ... } // from try @ 0336da38 with catch @ 0336dbe4 */
  if ((DAT_045671fc & 1) == 0) {
                    /* catch() { ... } // from try @ 0336da24 with catch @ 0336dbe8 */
                    /* catch() { ... } // from try @ 0336db88 with catch @ 0336dbec */
                    /* catch() { ... } // from try @ 0336db80 with catch @ 0336dbf0 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
                    /* catch() { ... } // from try @ 0336da08 with catch @ 0336dbf4 */
                    /* catch() { ... } // from try @ 0336db78 with catch @ 0336dbf8 */
    DAT_045671fc = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0336d9e4 with catch @ 0336dbfc */
                    /* catch() { ... } // from try @ 0336d9f0 with catch @ 0336dc00 */
  value = (__this->fields).MOCOKGFIJFP;
                    /* catch() { ... } // from try @ 0336d97c with catch @ 0336dc04 */
                    /* catch() { ... } // from try @ 0336d920 with catch @ 0336dc08 */
  iVar2 = 0;
  if (value != 0) {
                    /* catch() { ... } // from try @ 0336db6c with catch @ 0336dc0c */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
                    /* try { // try from 0336dc1c to 0346dc1f has its CatchHandler @ 0336dd8c */
                    /* try { // try from 0336dc20 to 0346dcbb has its CatchHandler @ 0336d5c0 */
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).MAHGAIJBBHF;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    value_01 = (__this->fields).PHICOONBADJ;
    if (value_01 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_01,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

