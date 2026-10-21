// EPCCNLNOALL$$CalculateSize @ RVA 0x32FBBCC

int32_t EPCCNLNOALL__CalculateSize(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  OJEHKJHEBID_o *value;
  KAMBBJFPLGM_o *value_00;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033fbbb4 with catch @ 033fbbd0
                       catch(type#2 @ 00000000) { ... } // from try @ 033fbbc8 with catch @ 033fbbd0
                        */
  if ((DAT_045676e1 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045676e1 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).KOGEBALMCBB;
  iVar2 = 0;
  if (value != (OJEHKJHEBID_o *)0x0) {
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

