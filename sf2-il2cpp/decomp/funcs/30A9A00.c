// HCKHJECBIJC$$WriteTo @ RVA 0x30A9A00

void HCKHJECBIJC__WriteTo
               (HCKHJECBIJC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 031a9a08 to 032a9a0f has its CatchHandler @ 031a9bbc */
                    /* try { // try from 031a9a14 to 032a9a2b has its CatchHandler @ 031a9bb4 */
  if ((__this->fields).GCDBBHAFJPN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031a9a90;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 031a9a30 to 032a9a53 has its CatchHandler @ 031a9bc0 */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).GCDBBHAFJPN,(MethodInfo *)0x0);
  }
  if ((__this->fields).CCCDGBNPNOD != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_031a9a90:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
                    /* try { // try from 031a9a64 to 032a9a6b has its CatchHandler @ 031a9bd4 */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).CCCDGBNPNOD,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 031a9a78 to 032a9a7f has its CatchHandler @ 031a9bcc */
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031a9a88 to 032a9abf has its CatchHandler @ 031a9bd0 */
  return;
}

