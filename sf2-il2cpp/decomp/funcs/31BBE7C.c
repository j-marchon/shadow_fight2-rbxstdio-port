// FAACNCKMEJM$$CalculateSize @ RVA 0x31BBE7C

int32_t FAACNCKMEJM__CalculateSize(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566be8 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566be8 = 1;
  }
  value = (__this->fields).GJNOEAKNMOG;
  if (value != (System_String_o *)0x0) {
    iVar2 = 0;
    if ((value->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if ((__this->fields).FAJBKFIAOPL != false) {
      iVar2 = iVar2 + 2;
    }
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

