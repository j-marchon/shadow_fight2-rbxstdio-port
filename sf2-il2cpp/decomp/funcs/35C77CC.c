// Core.Appsflyer.BanzaiAppsFlyer$$onConversionDataSuccess @ RVA 0x35C77CC

void Core_Appsflyer_BanzaiAppsFlyer__onConversionDataSuccess
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *CCMKMKGJKGE,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  DPEEIIAMANO_o *__this_00;
  MethodInfo *pMVar3;
  System_String_o *pSVar4;
  System_String_array *values;
  System_Globalization_CultureInfo_o *pSVar5;
  UniRx_ReactiveProperty_IEOKPOCAOKN__o *__this_01;
  System_Nullable_DateTime__o SVar6;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  System_DateTime_Fields local_48;
  
  if ((DAT_04568f71 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&System_Globalization_CultureInfo_TypeInfo);
    FUN_01bab630(&DPEEIIAMANO_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_object>>__
                );
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<IEOKPOCAOKN>_set_Value__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_20003);
    FUN_01bab630(&StringLiteral_2129);
    FUN_01bab630(&StringLiteral_2121);
    FUN_01bab630(&StringLiteral_15425);
    FUN_01bab630(&StringLiteral_7963);
    FUN_01bab630(&StringLiteral_2122);
    FUN_01bab630(&StringLiteral_2131);
    DAT_04568f71 = 1;
  }
  local_48._dateData = 0;
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(CCMKMKGJKGE,StringLiteral_20003,method);
  if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = Newtonsoft_Json_JsonConvert__DeserializeObject<object>
                     (CCMKMKGJKGE,
                      Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_object>>__
                     );
  if (pIVar2 == (Il2CppObject *)0x0) {
    return;
  }
  __this_00 = (DPEEIIAMANO_o *)thunk_FUN_01bda818(DPEEIIAMANO_TypeInfo);
  DPEEIIAMANO___ctor(__this_00,(System_Collections_Generic_IDictionary_string__object__o *)pIVar2,
                     (MethodInfo *)0x0);
  if (__this_00 != (DPEEIIAMANO_o *)0x0) {
    local_4c[0] = DPEEIIAMANO__DFLFJJIGABK(__this_00,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_4c);
    local_50[0] = DPEEIIAMANO__BJFKKEHOHAA(__this_00,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)thunk_FUN_01bda448(bool_TypeInfo,local_50);
    pSVar4 = System_String__Format
                       (StringLiteral_7963,pIVar2,(Il2CppObject *)pMVar3,(MethodInfo *)0x0);
    Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(pSVar4,StringLiteral_20003,pMVar3);
    bVar1 = DPEEIIAMANO__BJFKKEHOHAA(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,10);
      if (values == (System_String_array *)0x0) goto LAB_036c7c6c;
      if ((int)values->max_length == 0) {
LAB_036c7c68:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = StringLiteral_15425;
      thunk_FUN_01c20e04();
      local_48._dateData = (uint64_t)DPEEIIAMANO__LPFMPDCPBDI(__this_00,(MethodInfo *)0x0);
      if ((System_Globalization_CultureInfo_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Globalization_CultureInfo_TypeInfo);
      }
      pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_DateTime_TypeInfo);
      }
      pMVar3 = (MethodInfo *)0x0;
      pSVar4 = System_DateTime__ToString
                         ((System_DateTime_o)&local_48,(System_IFormatProvider_o *)pSVar5,
                          (MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto LAB_036c7c68;
      values->m_Items[1] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
      if ((uint)values->max_length < 3) goto LAB_036c7c68;
      values->m_Items[2] = StringLiteral_2122;
      thunk_FUN_01c20e04();
      SVar6 = DPEEIIAMANO__MEOPENGPLPL(__this_00,(MethodInfo *)0x0);
      if ((SVar6.fields._0_8_ & 0xff) == 0) {
        pSVar4 = (System_String_o *)0x0;
      }
      else {
        local_48 = SVar6.fields.value.fields._dateData.fields;
        if ((System_Globalization_CultureInfo_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(System_DateTime_TypeInfo);
        }
        pMVar3 = (MethodInfo *)0x0;
        pSVar4 = System_DateTime__ToString
                           ((System_DateTime_o)&local_48,(System_IFormatProvider_o *)pSVar5,
                            (MethodInfo *)0x0);
      }
      if ((uint)values->max_length < 4) goto LAB_036c7c68;
      values->m_Items[3] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 3);
      if ((uint)values->max_length < 5) goto LAB_036c7c68;
      values->m_Items[4] = StringLiteral_2131;
      thunk_FUN_01c20e04(values->m_Items + 4);
      pSVar4 = DPEEIIAMANO__BEDENMMHPAI(__this_00,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto LAB_036c7c68;
      values->m_Items[5] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 5,pSVar4);
      if ((uint)values->max_length < 7) goto LAB_036c7c68;
      values->m_Items[6] = StringLiteral_2121;
      thunk_FUN_01c20e04(values->m_Items + 6);
      pSVar4 = DPEEIIAMANO__CFAPDJDKLEG(__this_00,(MethodInfo *)0x0);
      if ((uint)values->max_length < 8) goto LAB_036c7c68;
      values->m_Items[7] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 7,pSVar4);
      if ((uint)values->max_length < 9) goto LAB_036c7c68;
      values->m_Items[8] = StringLiteral_2129;
      thunk_FUN_01c20e04(values->m_Items + 8);
      pSVar4 = DPEEIIAMANO__HMHBJILDFEI(__this_00,(MethodInfo *)0x0);
      if ((uint)values->max_length < 10) goto LAB_036c7c68;
      values->m_Items[9] = pSVar4;
      thunk_FUN_01c20e04();
      pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
      Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(pSVar4,StringLiteral_20003,pMVar3);
    }
    __this_01 = (__this->fields).PLNAMMLBJAH;
    if (__this_01 != (UniRx_ReactiveProperty_IEOKPOCAOKN__o *)0x0) {
      UniRx_ReactiveProperty<object>__set_Value
                ((UniRx_ReactiveProperty_T__o *)__this_01,(Il2CppObject *)__this_00,
                 Method_UniRx_ReactiveProperty<IEOKPOCAOKN>_set_Value__);
      return;
    }
  }
LAB_036c7c6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

