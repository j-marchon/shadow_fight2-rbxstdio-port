// NIGMCJIMBHO$$WriteTo @ RVA 0x337B218

void NIGMCJIMBHO__WriteTo
               (NIGMCJIMBHO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  
  __this_00 = (__this->fields).DKOBFIICAFM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0347b288;
                    /* try { // try from 0347b24c to 0357b253 has its CatchHandler @ 0347b760 */
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
                    /* try { // try from 0347b258 to 0357b25f has its CatchHandler @ 0347b754 */
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).DKOBFIICAFM,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0347b270 to 0357b277 has its CatchHandler @ 0347b700 */
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0347b288:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0347b288 to 0357b28f has its CatchHandler @ 0347b6e8 */
  FUN_01bab8c8();
}

