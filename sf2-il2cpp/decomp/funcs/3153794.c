// HBLHCCMEEEC$$WriteTo @ RVA 0x3153794

void HBLHCCMEEEC__WriteTo
               (HBLHCCMEEEC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 03253794 to 03353797 has its CatchHandler @ 032537a4 */
                    /* catch() { ... } // from try @ 03253794 with catch @ 032537a4 */
  if ((__this->fields).IAAJODFMEIC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03253824;
                    /* try { // try from 032537b4 to 0335381b has its CatchHandler @ 03253830 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).IAAJODFMEIC,(MethodInfo *)0x0);
  }
  if ((__this->fields).HEOOKBCLBGN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03253824:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).HEOOKBCLBGN,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 0325381c to 03353827 has its CatchHandler @ 03252a6c */
  return;
}

