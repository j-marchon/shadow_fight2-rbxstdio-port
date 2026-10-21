// GKKKJLJFGBG$$WriteTo @ RVA 0x3169D28

void GKKKJLJFGBG__WriteTo
               (GKKKJLJFGBG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_02;
  
  if ((DAT_045668e0 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_WriteTo__);
    DAT_045668e0 = 1;
  }
  __this_02 = (__this->fields).DFKIAOPJPCE;
  if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<int>__WriteTo
              (__this_02,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD,
               Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    __this_00 = (__this->fields).LJDACDDNJOD;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE
                 ,Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_WriteTo__);
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

