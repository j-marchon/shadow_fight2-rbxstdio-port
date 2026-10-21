// NLBPJNEGNNM$$WriteTo @ RVA 0x3557240

void NLBPJNEGNNM__WriteTo
               (NLBPJNEGNNM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* catch() { ... } // from try @ 03657214 with catch @ 03657240 */
                    /* try { // try from 03657250 to 03757257 has its CatchHandler @ 0365726c */
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
                    /* try { // try from 03657258 to 03757263 has its CatchHandler @ 03656ff4 */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036572fc;
                    /* try { // try from 03657264 to 0375726b has its CatchHandler @ 0365726c */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03657250 with catch @ 0365726c
                       catch(type#2 @ 00000000) { ... } // from try @ 03657264 with catch @ 0365726c
                        */
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).PMMFPJJOPKE != (HCFOFHGNBKP_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036572fc;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PMMFPJJOPKE,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IIIJBPAFNNF != (GLPEFEEGCPM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_036572fc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IIIJBPAFNNF,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

