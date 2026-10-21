// GKKKJLJFGBG$$CalculateSize @ RVA 0x316A2A4

int32_t GKKKJLJFGBG__CalculateSize(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  int iVar3;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_02;
  
  if ((DAT_045668e6 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    DAT_045668e6 = 1;
    method = extraout_x1;
  }
  __this_02 = (__this->fields).DFKIAOPJPCE;
  if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GKKKJLJFGBG_TypeInfo,method);
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<int>__CalculateSize
                      (__this_02,
                       (Google_Protobuf_FieldCodec_T__o *)
                       GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD,
                       Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    __this_00 = (__this->fields).LJDACDDNJOD;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_FieldCodec_T__o *)
                         GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE,
                         Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_CalculateSize__
                        );
      __this_01 = (__this->fields).CKFPENBPNML;
      iVar3 = iVar2 + iVar1;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_01,(MethodInfo *)0x0);
        iVar3 = iVar1 + iVar3;
      }
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

