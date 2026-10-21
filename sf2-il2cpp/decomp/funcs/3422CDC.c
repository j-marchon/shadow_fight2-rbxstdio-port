// HEFOANCOHDC$$RandomizeObscuredVars @ RVA 0x3422CDC

void HEFOANCOHDC__RandomizeObscuredVars(HEFOANCOHDC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Action_ObscuredString__o **ppSVar1;
  FPLCEOJCPOD_o *__this_02;
  System_Action_ACCKJOAAEKB__o **ppSVar2;
  System_Action_NJPBBPOABKP__o **ppSVar3;
  MethodInfo *in_x2;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_03;
  System_Collections_Generic_List_ACCKJOAAEKB__o *__this_04;
  System_Action_NJPBBPOABKP__o *action;
  System_Action_ObscuredString__o *action_00;
  System_Action_ACCKJOAAEKB__o *action_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_05;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_06;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_07;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_08;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_09;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_11;
  
  if ((DAT_045680ed & 1) == 0) {
    FUN_01bab630(&System_Action<NJPBBPOABKP>_TypeInfo);
    FUN_01bab630(&System_Action<ObscuredString>_TypeInfo);
    FUN_01bab630(&System_Action<ACCKJOAAEKB>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Values__)
    ;
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<ObscuredString>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ACCKJOAAEKB>_ForEach__);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_FIGOGJKPHGM__);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_JOAFJDKEKGN__);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_PCNLMANCIDF__);
    FUN_01bab630(&HEFOANCOHDC_<>c_TypeInfo);
    DAT_045680ed = 1;
  }
  __this_08.fields.fakeValue = false;
  __this_08.fields.inited = false;
  __this_08.fields.fakeValueActive = false;
  __this_08.fields._11_1_ = 0;
  __this_08.fields._0_8_ = &__this->fields;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_08,in_x2);
  __this_09.fields.fakeValue = false;
  __this_09.fields.inited = false;
  __this_09.fields.fakeValueActive = false;
  __this_09.fields._11_1_ = 0;
  __this_09.fields._0_8_ = &(__this->fields).HHDBIGKBMEC;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_09,in_x2);
  __this_05.fields.fakeValue = 0;
  __this_05.fields.fakeValueActive = false;
  __this_05.fields.inited = false;
  __this_05.fields._14_2_ = 0;
  __this_05.fields._0_8_ = &(__this->fields).NOPGBJNLFHM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_05,in_x2);
  __this_06.fields.fakeValue = 0;
  __this_06.fields.fakeValueActive = false;
  __this_06.fields.inited = false;
  __this_06.fields._14_2_ = 0;
  __this_06.fields._0_8_ = &(__this->fields).EAGEGPKAEKI;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_06,in_x2);
  __this_07.fields.fakeValue = 0;
  __this_07.fields.fakeValueActive = false;
  __this_07.fields.inited = false;
  __this_07.fields._14_2_ = 0;
  __this_07.fields._0_8_ = &(__this->fields).EMLGCOFGNKH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_07,in_x2);
  __this_10.fields.fakeValue = false;
  __this_10.fields.inited = false;
  __this_10.fields.fakeValueActive = false;
  __this_10.fields._11_1_ = 0;
  __this_10.fields._0_8_ = &(__this->fields).CHLMHEGKKNH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_10,in_x2);
  __this_11.fields.fakeValue = false;
  __this_11.fields.inited = false;
  __this_11.fields.fakeValueActive = false;
  __this_11.fields._11_1_ = 0;
  __this_11.fields._0_8_ = &(__this->fields).JFMAEFOHLDF;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_11,in_x2);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).NBOMAJCMIIL;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary<object,_object>__get_Values
                       (__this_00,
                        Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Values__
                       );
    __this_01 = System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           Method_System_Linq_Enumerable_ToList<ObscuredString>__);
    if ((HEFOANCOHDC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HEFOANCOHDC_<>c_TypeInfo);
    }
    action_00 = HEFOANCOHDC_<>c_TypeInfo->static_fields->__9__86_0;
    if (action_00 == (System_Action_ObscuredString__o *)0x0) {
      if ((HEFOANCOHDC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HEFOANCOHDC_<>c_TypeInfo);
      }
      action_00 = (System_Action_ObscuredString__o *)
                  thunk_FUN_01bda818(System_Action<ObscuredString>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &HEFOANCOHDC_<>c_TypeInfo->static_fields->__9__86_0;
      *ppSVar1 = action_00;
      thunk_FUN_01c20e04(ppSVar1,action_00);
    }
    if (__this_01 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03523000;
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
  }
  __this_02 = (__this->fields).ACHJNNOKEDK;
  if (__this_02 != (FPLCEOJCPOD_o *)0x0) {
    FPLCEOJCPOD__RandomizeObscuredVars(__this_02,(MethodInfo *)0x0);
  }
  __this_04 = (__this->fields).NLHLDLBGAKK;
  if ((HEFOANCOHDC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action_01 = HEFOANCOHDC_<>c_TypeInfo->static_fields->__9__86_1;
  if (action_01 == (System_Action_ACCKJOAAEKB__o *)0x0) {
    if ((HEFOANCOHDC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_01 = (System_Action_ACCKJOAAEKB__o *)
                thunk_FUN_01bda818(System_Action<ACCKJOAAEKB>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &HEFOANCOHDC_<>c_TypeInfo->static_fields->__9__86_1;
    *ppSVar2 = action_01;
    thunk_FUN_01c20e04(ppSVar2,action_01);
  }
  if (__this_04 != (System_Collections_Generic_List_ACCKJOAAEKB__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_04,
               (System_Action_T__o *)action_01,
               Method_System_Collections_Generic_List<ACCKJOAAEKB>_ForEach__);
    __this_03 = (__this->fields).EMNOFACFIBF;
    if ((HEFOANCOHDC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = HEFOANCOHDC_<>c_TypeInfo->static_fields->__9__86_2;
    if (action == (System_Action_NJPBBPOABKP__o *)0x0) {
      if ((HEFOANCOHDC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_NJPBBPOABKP__o *)
               thunk_FUN_01bda818(System_Action<NJPBBPOABKP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar3 = &HEFOANCOHDC_<>c_TypeInfo->static_fields->__9__86_2;
      *ppSVar3 = action;
      thunk_FUN_01c20e04(ppSVar3,action);
    }
    if (__this_03 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_03,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<NJPBBPOABKP>_ForEach__);
      return;
    }
  }
LAB_03523000:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

