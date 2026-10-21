// JGELBDHDHAO$$ToString @ RVA 0x3504900

System_String_o * JGELBDHDHAO__ToString(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568889 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568889 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03604938 to 03704a63 has its CatchHandler @ 03604938
                       catch() { ... } // from try @ 03604938 with catch @ 03604938
                       catch() { ... } // from try @ 03604b28 with catch @ 03604938
                       catch() { ... } // from try @ 03604b68 with catch @ 03604938
                       catch() { ... } // from try @ 03604ba8 with catch @ 03604938
                       catch() { ... } // from try @ 03604bd8 with catch @ 03604938 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

