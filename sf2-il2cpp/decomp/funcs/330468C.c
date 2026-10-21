// KGBIBHEFBHA$$CalculateSize @ RVA 0x330468C

int32_t KGBIBHEFBHA__CalculateSize(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  long value;
  
  if ((DAT_04567744 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567744 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).ANAJGHJEEOC;
  iVar3 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).HCBJCMDLODI;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).NLLKMEMKBAF;
  if (iVar1 != 0) {
                    /* try { // try from 03404720 to 03504837 has its CatchHandler @ 03404720
                       catch() { ... } // from try @ 03404720 with catch @ 03404720
                       catch() { ... } // from try @ 03404960 with catch @ 03404720
                       catch() { ... } // from try @ 03404a00 with catch @ 03404720
                       catch() { ... } // from try @ 03404a08 with catch @ 03404720
                       catch() { ... } // from try @ 03404ab8 with catch @ 03404720 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).NCDPJGNAKPN;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}

