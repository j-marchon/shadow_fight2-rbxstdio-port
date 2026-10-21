// MGNPHCAAEIO$$BPGGPGMNHNH @ RVA 0x34032E4

void MGNPHCAAEIO__BPGGPGMNHNH(DDMHMABAHHD_o *KJADEEFANAL,MethodInfo *method)

{
  System_ValueTuple_object__int__o key;
  System_ValueTuple_object__int__o key_00;
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_00;
  HBNENINHPGF_o *OAOLCGAIILM;
  undefined8 uVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo_2BCEB60 *in_x4;
  undefined8 *puVar4;
  System_String_o *KGLJICLJHEL;
  System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o *pSVar5;
  System_ValueTuple_object__int__o __this_01;
  System_ValueTuple_object__int__o __this_02;
  Il2CppObject local_b0;
  MGNPHCAAEIO_OPCJEEFOCFB_o local_a0;
  MGNPHCAAEIO_OPCJEEFOCFB_o local_70;
  
  if ((DAT_04568005 & 1) == 0) {
    FUN_01bab630(&DDMHMABAHHD_AJKNCGANAMJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_ContainsKey__
                );
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<string,_int>__ctor__);
    FUN_01bab630(&StringLiteral_14101);
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_10930);
    FUN_01bab630(&StringLiteral_15472);
    DAT_04568005 = 1;
    method = extraout_x1;
  }
  local_a0.fields.OAPLLNNEONM = false;
  local_a0.fields._33_7_ = 0;
  local_a0.fields.KPDPJONADPJ = (System_String_o *)0x0;
  local_a0.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_a0.fields.GPOEEHGGIII = (System_String_o *)0x0;
  local_a0.fields.ADCKCMDHIHM = 0;
  local_a0.fields._20_4_ = 0;
  if (KJADEEFANAL == (DDMHMABAHHD_o *)0x0) goto LAB_035036ec;
  KGLJICLJHEL = (KJADEEFANAL->fields)._COIPKAKHDFP_k__BackingField;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pSVar5 = MGNPHCAAEIO_TypeInfo->static_fields->MIIIMPBMBKA;
  local_70.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_70.fields.KPDPJONADPJ = (System_String_o *)0x0;
  __this_01.fields._8_8_ = KGLJICLJHEL;
  __this_01.fields.Item1 = (Il2CppObject *)&local_70;
  System_ValueTuple<object,_int>___ctor
            (__this_01,
             (Il2CppObject *)(ulong)(uint)(KJADEEFANAL->fields)._HFPMLGFDOKC_k__BackingField,
             (int32_t)Method_System_ValueTuple<string,_int>__ctor__,in_x4);
  if (pSVar5 == (System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o
                 *)0x0) goto LAB_035036ec;
  key_00.fields._8_8_ = local_70.fields.KPDPJONADPJ;
  key_00.fields.Item1 = (Il2CppObject *)local_70.fields.JIJLBFGKNJK;
  method_00 = (MethodInfo *)local_70.fields.KPDPJONADPJ;
  bVar1 = System_Collections_Generic_Dictionary<ValueTuple<object,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>__ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,key_00,
                     Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_ContainsKey__
                    );
  if (bVar1) {
    return;
  }
  local_a0.fields.OAPLLNNEONM = false;
  local_a0.fields._33_7_ = 0;
  local_a0.fields.KPDPJONADPJ = (System_String_o *)0x0;
  local_a0.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_a0.fields.GPOEEHGGIII = (System_String_o *)0x0;
  local_a0.fields.ADCKCMDHIHM = 0;
  local_a0.fields._20_4_ = 0;
  switch((KJADEEFANAL->fields)._GMPAEDFIIHF_k__BackingField) {
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args != (System_Object_array *)0x0) {
      if ((KGLJICLJHEL != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
         lVar2 == 0)) {
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
        thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_15472,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    goto LAB_035036ec;
  case 1:
    local_a0.fields.OAPLLNNEONM = false;
    local_a0.fields._33_7_ = 0;
    local_70.fields.JIJLBFGKNJK = (System_String_o *)DDMHMABAHHD_AJKNCGANAMJ_TypeInfo;
    local_a0.fields.KPDPJONADPJ = (System_String_o *)0x0;
    local_a0.fields.JIJLBFGKNJK = (System_String_o *)0x0;
    local_a0.fields.GPOEEHGGIII = (System_String_o *)0x0;
    local_a0.fields.ADCKCMDHIHM = 0;
    local_a0.fields._20_4_ = 0;
    local_70.fields.KPDPJONADPJ = (System_String_o *)0xffffffffffffffff;
    local_70.fields.ADCKCMDHIHM = 1;
    local_a0.fields.JIJLBFGKNJK =
         System_Enum__ToString((System_Enum_o *)&local_70,(MethodInfo *)0x0);
    thunk_FUN_01c20e04(&local_a0,local_a0.fields.JIJLBFGKNJK);
    puVar4 = &StringLiteral_14101;
    goto LAB_03503630;
  case 2:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this == (DOPEEDABNEK_o *)0x0) goto LAB_035036ec;
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      MGNPHCAAEIO_OPCJEEFOCFB___ctor(&local_a0,IKKAMAMLIKA,(MethodInfo *)0x0);
LAB_035035d4:
      local_a0.fields.ADCKCMDHIHM = (KJADEEFANAL->fields)._HFPMLGFDOKC_k__BackingField;
    }
    break;
  case 3:
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
    if (__this_00 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) goto LAB_035036ec;
    OAOLCGAIILM = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_00,KGLJICLJHEL,method_00);
    if (OAOLCGAIILM != (HBNENINHPGF_o *)0x0) {
      MGNPHCAAEIO_OPCJEEFOCFB___ctor(&local_a0,OAOLCGAIILM,(MethodInfo *)0x0);
      goto LAB_035035d4;
    }
    break;
  case 4:
    local_a0.fields.OAPLLNNEONM = false;
    local_a0.fields._33_7_ = 0;
    local_70.fields.JIJLBFGKNJK = (System_String_o *)DDMHMABAHHD_AJKNCGANAMJ_TypeInfo;
                    /* try { // try from 03503600 to 036037f3 has its CatchHandler @ 03503600
                       catch() { ... } // from try @ 03503600 with catch @ 03503600
                       catch() { ... } // from try @ 03503880 with catch @ 03503600
                       catch() { ... } // from try @ 035038bc with catch @ 03503600
                       catch() { ... } // from try @ 035038f8 with catch @ 03503600
                       catch() { ... } // from try @ 03503928 with catch @ 03503600 */
    local_a0.fields.KPDPJONADPJ = (System_String_o *)0x0;
    local_a0.fields.JIJLBFGKNJK = (System_String_o *)0x0;
    local_a0.fields.GPOEEHGGIII = (System_String_o *)0x0;
    local_a0.fields.ADCKCMDHIHM = 0;
    local_a0.fields._20_4_ = 0;
    local_70.fields.KPDPJONADPJ = (System_String_o *)0xffffffffffffffff;
    local_70.fields.ADCKCMDHIHM = 4;
    local_a0.fields.JIJLBFGKNJK =
         System_Enum__ToString((System_Enum_o *)&local_70,(MethodInfo *)0x0);
    thunk_FUN_01c20e04(&local_a0,local_a0.fields.JIJLBFGKNJK);
    puVar4 = &StringLiteral_10930;
LAB_03503630:
    local_a0.fields.KPDPJONADPJ = (System_String_o *)*puVar4;
    thunk_FUN_01c20e04((ulong)&local_a0 | 8);
    local_a0.fields.ADCKCMDHIHM = (KJADEEFANAL->fields)._HFPMLGFDOKC_k__BackingField;
    local_a0.fields.GPOEEHGGIII = StringLiteral_11073;
    thunk_FUN_01c20e04(&local_a0.fields.GPOEEHGGIII);
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = MGNPHCAAEIO_TypeInfo->static_fields->MIIIMPBMBKA;
  local_b0.klass = (Il2CppClass *)0x0;
  local_b0.monitor = (void *)0x0;
  __this_02.fields._8_8_ = KGLJICLJHEL;
  __this_02.fields.Item1 = &local_b0;
  System_ValueTuple<object,_int>___ctor
            (__this_02,
             (Il2CppObject *)(ulong)(uint)(KJADEEFANAL->fields)._HFPMLGFDOKC_k__BackingField,
             (int32_t)Method_System_ValueTuple<string,_int>__ctor__,in_x4);
  if (pSVar5 != (System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o
                 *)0x0) {
    key.fields._8_8_ = local_b0.monitor;
    key.fields.Item1 = (Il2CppObject *)local_b0.klass;
    local_70.fields.KPDPJONADPJ = local_a0.fields.KPDPJONADPJ;
    local_70.fields.JIJLBFGKNJK = local_a0.fields.JIJLBFGKNJK;
    local_70.fields.GPOEEHGGIII = local_a0.fields.GPOEEHGGIII;
    local_70.fields.ADCKCMDHIHM = local_a0.fields.ADCKCMDHIHM;
    local_70.fields._20_4_ = local_a0.fields._20_4_;
    local_70.fields.OAPLLNNEONM = local_a0.fields.OAPLLNNEONM;
    local_70.fields._33_7_ = local_a0.fields._33_7_;
    System_Collections_Generic_Dictionary<ValueTuple<object,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,key,&local_70,
               Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_Add__
              );
    return;
  }
LAB_035036ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

