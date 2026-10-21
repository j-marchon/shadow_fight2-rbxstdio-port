// LMEMJBOBHBE$$WriteTo @ RVA 0x326D9B8

void LMEMJBOBHBE__WriteTo
               (LMEMJBOBHBE_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).MOCOKGFIJFP != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0336da7c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 0336d9e4 to 0346d9eb has its CatchHandler @ 0336dbfc */
                    /* try { // try from 0336d9f0 to 0346d9f7 has its CatchHandler @ 0336dc00 */
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).MOCOKGFIJFP,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).MAHGAIJBBHF;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0336da7c;
                    /* try { // try from 0336da08 to 0346da13 has its CatchHandler @ 0336dbf4 */
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
                    /* try { // try from 0336da24 to 0346da2b has its CatchHandler @ 0336dbe8 */
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).MAHGAIJBBHF,(MethodInfo *)0x0);
    }
    if ((__this->fields).PHICOONBADJ != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0336da7c;
                    /* try { // try from 0336da38 to 0346da3b has its CatchHandler @ 0336dbe4 */
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
                    /* try { // try from 0336da48 to 0346da53 has its CatchHandler @ 0336dbdc */
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).PHICOONBADJ,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 0336da58 to 0346da67 has its CatchHandler @ 0336dbd8 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0336da7c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336da7c to 0346da83 has its CatchHandler @ 0336dbcc */
  FUN_01bab8c8();
}

