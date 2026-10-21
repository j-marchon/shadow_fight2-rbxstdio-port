// EKCGNICFDEO$$CalculateSize @ RVA 0x351AC9C

int32_t EKCGNICFDEO__CalculateSize(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568979 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568979 = 1;
  }
  value_00 = (__this->fields).BJGJOHGJCKC;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0361acf0 to 0371ae03 has its CatchHandler @ 0361acf0
                       catch() { ... } // from try @ 0361acf0 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361aef0 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361af14 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361af7c with catch @ 0361acf0
                       catch() { ... } // from try @ 0361afb4 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361afe8 with catch @ 0361acf0 */
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    value = (__this->fields).CMKMIFIIGBK;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

