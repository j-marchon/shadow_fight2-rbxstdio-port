// BKMLILFFPIH$$WriteTo @ RVA 0x3046EB8

void BKMLILFFPIH__WriteTo
               (BKMLILFFPIH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 03146ebc to 03246edb has its CatchHandler @ 03146e3c */
  if ((__this->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03146f48;
                    /* try { // try from 03146edc to 03246edf has its CatchHandler @ 03146ee0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03146e9c with catch @ 03146ee0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03146edc with catch @ 03146ee0
                       try { // try from 03146ee0 to 03246ef7 has its CatchHandler @ 03146e3c */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MJIIHOLHNCK,
               (MethodInfo *)0x0);
  }
                    /* try { // try from 03146ef8 to 03246f0f has its CatchHandler @ 03146f3c */
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03146f48:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
                    /* try { // try from 03146f10 to 03246f2b has its CatchHandler @ 03146e3c */
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03146f2c to 03246f3b has its CatchHandler @ 03146f3c */
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 03146ef8 with catch @ 03146f3c
                       catch() { ... } // from try @ 03146f2c with catch @ 03146f3c */
                    /* try { // try from 03146f40 to 03246f43 has its CatchHandler @ 03146f4c */
                    /* try { // try from 03146f44 to 03246f4f has its CatchHandler @ 03146e3c */
  return;
}

