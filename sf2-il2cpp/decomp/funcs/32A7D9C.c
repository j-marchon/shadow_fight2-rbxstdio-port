// NLFLMJPNOLF$$WriteTo @ RVA 0x32A7D9C

void NLFLMJPNOLF__WriteTo
               (NLFLMJPNOLF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
                    /* try { // try from 033a7db4 to 034a7dbf has its CatchHandler @ 033a7f7c */
  if ((DAT_0456740b & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7dc8 to 034a7dcf has its CatchHandler @ 033a7f74 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    DAT_0456740b = 1;
  }
  if ((__this->fields).OHMDCKEDOGH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033a7ed4;
                    /* try { // try from 033a7df4 to 034a7dfb has its CatchHandler @ 033a7f54 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 033a7e00 to 034a7e07 has its CatchHandler @ 033a7f24 */
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).OHMDCKEDOGH,(MethodInfo *)0x0);
  }
  if ((__this->fields).IILCHFKCEEH != 0) {
                    /* try { // try from 033a7e10 to 034a7e17 has its CatchHandler @ 033a7f28 */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033a7ed4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
                    /* try { // try from 033a7e24 to 034a7e2b has its CatchHandler @ 033a7f4c */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).IILCHFKCEEH,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a7e48 to 034a7e7f has its CatchHandler @ 033a7f94 */
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<long>__WriteTo
              (__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK,
               Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    if ((__this->fields).BHAOPCFDKCG != false) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033a7ed4;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
                    /* try { // try from 033a7e94 to 034a7e9b has its CatchHandler @ 033a7f80 */
                    /* try { // try from 033a7e9c to 034a7eef has its CatchHandler @ 033a7c34 */
      Google_Protobuf_CodedOutputStream__WriteBool
                (JBGJLELBMJF,(__this->fields).BHAOPCFDKCG,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_033a7ed4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

