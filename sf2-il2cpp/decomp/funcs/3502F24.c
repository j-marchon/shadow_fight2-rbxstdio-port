// OBCMNBDBNFO$$WriteTo @ RVA 0x3502F24

void OBCMNBDBNFO__WriteTo
               (OBCMNBDBNFO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_01;
  
  if ((DAT_0456886e & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
                    /* try { // try from 03602f58 to 03702f5b has its CatchHandler @ 03602f64 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_WriteTo__);
                    /* try { // try from 03602f5c to 03702f83 has its CatchHandler @ 036029bc */
                    /* catch() { ... } // from try @ 03602dc0 with catch @ 03602f60 */
    DAT_0456886e = 1;
  }
                    /* catch() { ... } // from try @ 03602f58 with catch @ 03602f64 */
                    /* catch() { ... } // from try @ 03602e04 with catch @ 03602f68 */
  if ((__this->fields).HHNJEEMAEIH != 0) {
                    /* catch() { ... } // from try @ 03602de4 with catch @ 03602f6c */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
                    /* catch() { ... } // from try @ 03602dc4 with catch @ 03602f70 */
                    /* catch() { ... } // from try @ 03602da4 with catch @ 03602f74 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 03602f84 to 03702f87 has its CatchHandler @ 03603030 */
                    /* try { // try from 03602f88 to 0370303f has its CatchHandler @ 036029bc */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).HHNJEEMAEIH,(MethodInfo *)0x0);
  }
  if ((__this->fields).MGFICIOBKAI != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).MGFICIOBKAI,(MethodInfo *)0x0);
  }
  if ((__this->fields).AKBMEEECABK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).AKBMEEECABK,(MethodInfo *)0x0);
  }
  if ((__this->fields).GCELGJPAMAA != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).GCELGJPAMAA,(MethodInfo *)0x0);
  }
  if ((__this->fields).JEAFOMDCLHD != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03602f84 with catch @ 03603030 */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).JEAFOMDCLHD,(MethodInfo *)0x0);
  }
                    /* try { // try from 03603040 to 0370306b has its CatchHandler @ 03603080 */
  if ((__this->fields).OKHEECOKPBF != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
                    /* catch() { ... } // from try @ 03602d54 with catch @ 03603054 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).OKHEECOKPBF,(MethodInfo *)0x0);
  }
                    /* try { // try from 0360306c to 03703077 has its CatchHandler @ 036029bc */
  __this_01 = (__this->fields).CFIKNGMJBLI;
                    /* try { // try from 03603078 to 0370307f has its CatchHandler @ 03603080 */
                    /* catch() { ... } // from try @ 03603040 with catch @ 03603080
                       catch() { ... } // from try @ 03603078 with catch @ 03603080 */
  if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM,
               Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036030e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

