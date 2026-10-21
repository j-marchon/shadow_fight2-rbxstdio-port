// LFELBGMCDHD$$CalculateSize @ RVA 0x33A0600

int32_t LFELBGMCDHD__CalculateSize(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_01;
  
  if ((DAT_04567cad & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_CalculateSize__);
    DAT_04567cad = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LFELBGMCDHD_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       LFELBGMCDHD_TypeInfo->static_fields->IODFLINNJEL,
                       Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_CalculateSize__
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

