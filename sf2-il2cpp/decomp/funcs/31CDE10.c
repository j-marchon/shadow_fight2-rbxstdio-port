// HCKCBFOGMMJ$$GCNKHODLPFF @ RVA 0x31CDE10

LFELBGMCDHD_o *
HCKCBFOGMMJ__GCNKHODLPFF(HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *BBEGIKHKBID,MethodInfo *method)

{
  LFELBGMCDHD_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  int64_t OGPGLGPMEPD;
  GKLPDMLELJF_o *item;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_02;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_04566c86 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04566c86 = 1;
  }
  __this_00 = (LFELBGMCDHD_o *)thunk_FUN_01bda818(LFELBGMCDHD_TypeInfo);
  LFELBGMCDHD___ctor(__this_00,(MethodInfo *)0x0);
  if ((BBEGIKHKBID != (IBMLPPNMDCI_o *)0x0) &&
     (__this_01 = (BBEGIKHKBID->fields).EHBNKDHKJNI,
     __this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    index = 0;
    do {
      if ((__this_01->fields).count <= index) {
        return __this_00;
      }
      method_00 = Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__;
      OGPGLGPMEPD = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                              (__this_01,index,
                               (MethodInfo_295D6A0 *)
                               Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
      item = HCKCBFOGMMJ__LLEJFHJIBHC(__this,OGPGLGPMEPD,method_00);
      if (item != (GKLPDMLELJF_o *)0x0) {
        if ((__this_00 == (LFELBGMCDHD_o *)0x0) ||
           (__this_02 = (__this_00->fields).EHBNKDHKJNI,
           __this_02 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0)) break;
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,(Il2CppObject *)item,
                   Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
      }
      __this_01 = (BBEGIKHKBID->fields).EHBNKDHKJNI;
      index = index + 1;
    } while (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

