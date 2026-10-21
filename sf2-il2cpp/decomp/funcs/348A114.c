// LDAJCBOOHPE$$KCOBAEGKKDI @ RVA 0x348A114

System_String_o *
LDAJCBOOHPE__KCOBAEGKKDI
          (LDAJCBOOHPE_o *__this,System_String_array *JLFFJLLAEEB,
          System_Nullable_DateTime__o PLPINLMDGKE,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *__this_00;
  void *pvVar2;
  MethodInfo_27F61B8 *pMVar3;
  MethodInfo_27F61B8 *method_00;
  System_Nullable_DateTime__o __this_01;
  MethodInfo_27F61B8 *local_40;
  System_DateTime_Fields local_38;
  System_DateTime_Fields local_28;
  
  local_38._dateData = (uint64_t)PLPINLMDGKE.fields.value.fields._dateData;
  pMVar3 = PLPINLMDGKE.fields._0_8_;
  method_00 = pMVar3;
  local_40 = pMVar3;
  if ((DAT_045683d3 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&LDAJCBOOHPE_TypeInfo);
    FUN_01bab630(&LDAJCBOOHPE_MirrorCacheDto_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_Value__);
    DAT_045683d3 = 1;
  }
  local_28._dateData = 0;
  if (JLFFJLLAEEB == (System_String_array *)0x0) {
    pSVar1 = (System_String_o *)0x0;
  }
  else {
    pSVar1 = (System_String_o *)0x0;
    if ((JLFFJLLAEEB->max_length != 0) && (((ulong)pMVar3 & 0xff) != 0)) {
      __this_00 = (Il2CppObject *)thunk_FUN_01bda818(LDAJCBOOHPE_MirrorCacheDto_TypeInfo);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00[1].klass = (Il2CppClass *)(__this->fields).IDPIHPBEHFC;
      thunk_FUN_01c20e04();
      __this_01.fields.value.fields._dateData =
           (System_DateTime_Fields)
           (System_DateTime_Fields)Method_System_Nullable<DateTime>_get_Value__._dateData;
      __this_01.fields._0_8_ = &local_40;
      local_28._dateData = (uint64_t)System_Nullable<DateTime>__get_Value(__this_01,method_00);
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pvVar2 = (void *)System_DateTime__ToBinary((System_DateTime_o)&local_28,(MethodInfo *)0x0);
      __this_00[1].monitor = pvVar2;
      if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = Newtonsoft_Json_JsonConvert__SerializeObject(__this_00,(MethodInfo *)0x0);
      if ((LDAJCBOOHPE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = IBMPAMLCCHF__JILEJCOCHIB
                         (pSVar1,LDAJCBOOHPE_TypeInfo->static_fields->EDCHCICLDBD,
                          LDAJCBOOHPE_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
    }
  }
  return pSVar1;
}

