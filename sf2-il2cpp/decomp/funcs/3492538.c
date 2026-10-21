// ALOGBMGGBEP$$CalculateSize @ RVA 0x3492538

int32_t ALOGBMGGBEP__CalculateSize(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04568429 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568429 = 1;
    method = extraout_x1;
  }
  pSVar3 = (__this->fields).KBNAEBFHCKD;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    pSVar3 = (__this->fields).FICPNGIAKEH;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
        iVar2 = iVar2 + iVar1 + 1;
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
        iVar2 = iVar1 + iVar2;
      }
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

