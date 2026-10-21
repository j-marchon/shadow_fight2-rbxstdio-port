// FADHMEJJCPO$$WriteTo @ RVA 0x33CE864

void FADHMEJJCPO__WriteTo
               (FADHMEJJCPO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_034ce8f4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  if ((__this->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_034ce8f4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IMNALGKNMNP,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 034ce8ec to 035ceb4b has its CatchHandler @ 034ce8ec
                       catch() { ... } // from try @ 034ce8ec with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf378 with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf408 with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf520 with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf580 with catch @ 034ce8ec */
  return;
}

