// AADKBCFCLKK$$WriteTo @ RVA 0x343A3A0

void AADKBCFCLKK__WriteTo
               (AADKBCFCLKK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_01;
  
  if ((DAT_045681c5 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
                    /* try { // try from 0353a3d0 to 0363a3fb has its CatchHandler @ 0353a580 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_WriteTo__);
    DAT_045681c5 = 1;
  }
  if ((__this->fields).AMKHEHFFAKJ != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).AMKHEHFFAKJ,(MethodInfo *)0x0);
  }
  if ((__this->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
                    /* try { // try from 0353a434 to 0363a443 has its CatchHandler @ 0353a58c */
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LHFLMBNKPHF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).LBKLNIPHGMM != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
                    /* try { // try from 0353a448 to 0363a453 has its CatchHandler @ 0353a578 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LBKLNIPHGMM,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IKNCNGMNPPK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).IKNCNGMNPPK,(MethodInfo *)0x0);
  }
                    /* try { // try from 0353a490 to 0363a4b3 has its CatchHandler @ 0353a574 */
  if ((__this->fields).IOLELGMBJFL != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
                    /* try { // try from 0353a4b4 to 0363a547 has its CatchHandler @ 0353a248 */
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).IOLELGMBJFL,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).MPAIPMANDEO;
  if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)AADKBCFCLKK_TypeInfo->static_fields->CHLJPKPACJB,
               Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_WriteTo__);
    if ((__this->fields).FAEDHKAJJNK != (PGICCMFLDPI_o *)0x0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x3a,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteMessage
                (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).FAEDHKAJJNK,
                 (MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0353a548 to 0363a54f has its CatchHandler @ 0353a57c */
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 0353a550 to 0363a553 has its CatchHandler @ 0353a588 */
                    /* try { // try from 0353a554 to 0363a557 has its CatchHandler @ 0353a570 */
                    /* try { // try from 0353a558 to 0363a55b has its CatchHandler @ 0353a588 */
    return;
  }
LAB_0353a55c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0353a55c to 0363a55f has its CatchHandler @ 0353a248 */
  FUN_01bab8c8();
}

