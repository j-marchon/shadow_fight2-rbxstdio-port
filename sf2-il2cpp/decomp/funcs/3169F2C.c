// GKKKJLJFGBG$$MergeFrom @ RVA 0x3169F2C

void GKKKJLJFGBG__MergeFrom
               (GKKKJLJFGBG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GKKKJLJFGBG_Fields *pGVar1;
  uint uVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  
  if ((DAT_045668e2 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_AddEntriesFrom__);
    DAT_045668e2 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pGVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
          uVar2 = uVar3 >> 1 | uVar3 << 0x1f;
          if (1 < uVar2 - 4) break;
          __this_00 = (__this->fields).DFKIAOPJPCE;
          if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0)
          goto LAB_0326a06c;
          Google_Protobuf_Collections_RepeatedField<int>__AddEntriesFrom
                    (__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD,
                     Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
        }
        if (uVar2 == 9) break;
        if (uVar2 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pGVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pGVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pGVar1,pGVar4);
      }
      __this_01 = (__this->fields).LJDACDDNJOD;
      if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE
                 ,Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_AddEntriesFrom__);
    }
  }
LAB_0326a06c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

