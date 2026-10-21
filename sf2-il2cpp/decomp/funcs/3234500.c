// DLOALGNBPNL$$CalculateSize @ RVA 0x3234500

int32_t DLOALGNBPNL__CalculateSize(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_01;
  
  if ((DAT_0456700c & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_CalculateSize__);
    DAT_0456700c = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((DLOALGNBPNL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DLOALGNBPNL_TypeInfo,method);
  }
                    /* try { // try from 03334554 to 0343455f has its CatchHandler @ 033341fc */
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
                    /* try { // try from 03334560 to 03434567 has its CatchHandler @ 03334568 */
                    /* catch() { ... } // from try @ 033344ec with catch @ 03334568
                       catch() { ... } // from try @ 03334560 with catch @ 03334568 */
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       DLOALGNBPNL_TypeInfo->static_fields->IODFLINNJEL,
                       Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar1 = iVar2 + iVar1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

