// CBPENMDOJDB$$CalculateSize @ RVA 0x3103708

int32_t CBPENMDOJDB__CalculateSize(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  long value;
  System_String_o *pSVar4;
  
  if ((DAT_045664da & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
                    /* try { // try from 03203730 to 03303733 has its CatchHandler @ 0320377c */
                    /* try { // try from 03203734 to 03303737 has its CatchHandler @ 032034e4 */
    DAT_045664da = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03203738 to 0330373b has its CatchHandler @ 03203774 */
                    /* try { // try from 0320373c to 0330375b has its CatchHandler @ 032034e4 */
  value = (__this->fields).ADEIKPGDIPM;
  iVar3 = 0;
  if (value != 0) {
                    /* catch() { ... } // from try @ 03203630 with catch @ 0320374c */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
                    /* try { // try from 0320375c to 0330376f has its CatchHandler @ 032037f0 */
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  pSVar4 = (__this->fields).GJNOEAKNMOG;
  if (pSVar4 != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 032036a0 with catch @ 03203770
                       try { // try from 03203770 to 03303797 has its CatchHandler @ 032034e4 */
                    /* catch() { ... } // from try @ 03203738 with catch @ 03203774 */
    if ((pSVar4->fields)._stringLength != 0) {
                    /* catch() { ... } // from try @ 0320368c with catch @ 03203778 */
                    /* catch() { ... } // from try @ 03203730 with catch @ 0320377c */
                    /* catch() { ... } // from try @ 03203674 with catch @ 03203780 */
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03203798 to 0330379b has its CatchHandler @ 032037c4 */
      iVar3 = iVar3 + iVar2 + 1;
    }
                    /* try { // try from 0320379c to 033037d3 has its CatchHandler @ 032034e4 */
    pSVar4 = (__this->fields).JAAACMPGMKJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03203798 with catch @ 032037c4 */
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).DIILCCNFMEB;
                    /* try { // try from 032037d4 to 033037db has its CatchHandler @ 032037f0 */
      if (iVar1 != 0) {
                    /* try { // try from 032037dc to 033037e7 has its CatchHandler @ 032034e4 */
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 032037e8 to 033037ef has its CatchHandler @ 032037f0 */
                    /* catch() { ... } // from try @ 0320375c with catch @ 032037f0
                       catch() { ... } // from try @ 032037d4 with catch @ 032037f0
                       catch() { ... } // from try @ 032037e8 with catch @ 032037f0 */
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).GOBHKPNEJFN;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).NLLKMEMKBAF;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

