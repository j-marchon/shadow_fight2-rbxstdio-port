// NLFLMJPNOLF$$CalculateSize @ RVA 0x32A7C64

int32_t NLFLMJPNOLF__CalculateSize(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  int iVar3;
  
  if ((DAT_0456740a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    DAT_0456740a = 1;
    method = extraout_x1;
  }
  value = (__this->fields).OHMDCKEDOGH;
  if (value == 0) {
    iVar3 = 0;
  }
  else {
                    /* try { // try from 033a7cc0 to 034a7cd7 has its CatchHandler @ 033a7f88 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar1 + 1;
  }
  iVar2 = (__this->fields).IILCHFKCEEH;
  if (iVar2 != 0) {
                    /* try { // try from 033a7cfc to 034a7d13 has its CatchHandler @ 033a7f84 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar2,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar1 + 1;
  }
  __this_01 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a7d20 to 034a7d27 has its CatchHandler @ 033a7f60 */
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 033a7d44 to 034a7d47 has its CatchHandler @ 033a7f34 */
                    /* try { // try from 033a7d48 to 034a7d53 has its CatchHandler @ 033a7f5c */
    iVar1 = Google_Protobuf_Collections_RepeatedField<long>__CalculateSize
                      (__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
                    /* try { // try from 033a7d58 to 034a7d63 has its CatchHandler @ 033a7f58 */
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar2 = iVar1 + iVar3;
    if ((__this->fields).BHAOPCFDKCG != false) {
      iVar2 = iVar1 + iVar3 + 2;
    }
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033a7d78 to 034a7d7f has its CatchHandler @ 033a7f3c */
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033a7d90 to 034a7d9b has its CatchHandler @ 033a7f38 */
  FUN_01bab8c8();
}

