// OBCMNBDBNFO$$CalculateSize @ RVA 0x3502B94

int32_t OBCMNBDBNFO__CalculateSize(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_01;
  int iVar3;
  
  if ((DAT_04568869 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_CalculateSize__);
    DAT_04568869 = 1;
    method = extraout_x1;
  }
  iVar3 = (__this->fields).HHNJEEMAEIH;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar3,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).MGFICIOBKAI;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).AKBMEEECABK;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).GCELGJPAMAA;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
                    /* try { // try from 03602c94 to 03702c9b has its CatchHandler @ 03602d44 */
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).JEAFOMDCLHD;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03602cb0 to 03702cb3 has its CatchHandler @ 03602d30 */
                    /* try { // try from 03602cb4 to 03702cbb has its CatchHandler @ 03602d40 */
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).OKHEECOKPBF;
  if (iVar1 != 0) {
                    /* try { // try from 03602cd4 to 03702cdf has its CatchHandler @ 03602d38 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
                    /* try { // try from 03602cf4 to 03702cff has its CatchHandler @ 03602d34 */
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_01 = (__this->fields).CFIKNGMJBLI;
  if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
                    /* try { // try from 03602d28 to 03702d2b has its CatchHandler @ 03602d3c */
                    /* try { // try from 03602d2c to 03702d53 has its CatchHandler @ 036029bc */
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM,
                       Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_CalculateSize__
                      );
                    /* catch() { ... } // from try @ 03602cb0 with catch @ 03602d30 */
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* catch() { ... } // from try @ 03602cf4 with catch @ 03602d34 */
    iVar3 = iVar2 + iVar3;
                    /* catch() { ... } // from try @ 03602cd4 with catch @ 03602d38 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* catch() { ... } // from try @ 03602d28 with catch @ 03602d3c */
                    /* catch() { ... } // from try @ 03602cb4 with catch @ 03602d40 */
                    /* catch() { ... } // from try @ 03602c94 with catch @ 03602d44 */
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar3;
    }
                    /* try { // try from 03602d54 to 03702d57 has its CatchHandler @ 03603054 */
                    /* try { // try from 03602d58 to 03702da3 has its CatchHandler @ 036029bc */
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

