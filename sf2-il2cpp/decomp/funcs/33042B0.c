// KGBIBHEFBHA$$WriteTo @ RVA 0x33042B0

void KGBIBHEFBHA__WriteTo
               (KGBIBHEFBHA_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 034042b4 to 035042bb has its CatchHandler @ 034042d0 */
                    /* try { // try from 034042bc to 035042c7 has its CatchHandler @ 03403ba8 */
  if ((__this->fields).ANAJGHJEEOC != 0) {
                    /* try { // try from 034042c8 to 035042cf has its CatchHandler @ 034042d0 */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03404398;
                    /* catch() { ... } // from try @ 03404208 with catch @ 034042d0
                       catch() { ... } // from try @ 03404260 with catch @ 034042d0
                       catch() { ... } // from try @ 034042b4 with catch @ 034042d0
                       catch() { ... } // from try @ 034042c8 with catch @ 034042d0 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  if ((__this->fields).HCBJCMDLODI != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03404398;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).HCBJCMDLODI,(MethodInfo *)0x0);
  }
  if ((__this->fields).NLLKMEMKBAF != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03404398;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).NLLKMEMKBAF,(MethodInfo *)0x0);
  }
  if ((__this->fields).NCDPJGNAKPN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03404398:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).NCDPJGNAKPN,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

