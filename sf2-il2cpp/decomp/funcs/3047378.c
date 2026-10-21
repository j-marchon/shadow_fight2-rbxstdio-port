// BKMLILFFPIH$$CalculateSize @ RVA 0x3047378

int32_t BKMLILFFPIH__CalculateSize(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  BECIPDJBAOG_o *value;
  KAMBBJFPLGM_o *value_00;
  
  if ((DAT_04565de7 & 1) == 0) {
                    /* try { // try from 03147394 to 032473a3 has its CatchHandler @ 031477e4 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
                    /* try { // try from 031473a4 to 032477fb has its CatchHandler @ 03147164 */
    DAT_04565de7 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MJIIHOLHNCK;
  iVar2 = 0;
  if (value != (BECIPDJBAOG_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).OPHCNELIOLD;
  if (value_00 != (KAMBBJFPLGM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}

