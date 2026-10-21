// EPCCNLNOALL$$WriteTo @ RVA 0x32FBAD8

void EPCCNLNOALL__WriteTo
               (EPCCNLNOALL_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 033fbadc to 034fbae3 has its CatchHandler @ 033fbb5c */
                    /* try { // try from 033fbae4 to 034fbb4f has its CatchHandler @ 033fb9d4 */
  if ((__this->fields).KOGEBALMCBB != (OJEHKJHEBID_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033fbb68;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).KOGEBALMCBB,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_033fbb68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 033fbb50 to 034fbb53 has its CatchHandler @ 033fbb58 */
                    /* try { // try from 033fbb54 to 034fbb77 has its CatchHandler @ 033fb9d4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fbb50 with catch @ 033fbb58
                        */
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fbadc with catch @ 033fbb5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fbac8 with catch @ 033fbb60
                        */
  return;
}

