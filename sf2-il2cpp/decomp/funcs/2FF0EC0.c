// BFBONKPKBNL$$RandomizeObscuredVars @ RVA 0x2FF0EC0

void BFBONKPKBNL__RandomizeObscuredVars(BFBONKPKBNL_o *__this,MethodInfo *method)

{
  System_Action_BNKBGIIJNLF__o **ppSVar1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  System_Action_BNKBGIIJNLF__o *action;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_04565a68 & 1) == 0) {
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_ForEach__);
    FUN_01bab630(&Method_BFBONKPKBNL_<>c_KMDNBGPHGGB__);
    FUN_01bab630(&BFBONKPKBNL_<>c_TypeInfo);
    DAT_04565a68 = 1;
  }
  local_60.fields.hiddenValue = 0;
  local_60.fields.currentCryptoKey = 0;
  local_60.fields.fakeValueActive = false;
  local_60.fields.inited = false;
  local_60.fields._26_6_ = 0;
  local_60.fields.fakeValue = 0;
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &__this->fields;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).EHOFCENCPNF;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  uStack_38._0_4_ = (__this->fields)._LAOFJOMPFDL_k__BackingField.fields.fakeValue;
  uStack_38._4_1_ = (__this->fields)._LAOFJOMPFDL_k__BackingField.fields.fakeValueActive;
  uStack_38._5_1_ = (__this->fields)._LAOFJOMPFDL_k__BackingField.fields.inited;
  uStack_38._6_2_ = *(undefined2 *)&(__this->fields)._LAOFJOMPFDL_k__BackingField.fields.field_0xe;
  local_40._0_4_ = (__this->fields)._LAOFJOMPFDL_k__BackingField.fields.currentCryptoKey;
  local_40._4_4_ = (__this->fields)._LAOFJOMPFDL_k__BackingField.fields.hiddenValue;
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &local_40;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  local_60.fields.hiddenValue = (__this->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
  local_60.fields.currentCryptoKey =
       (__this->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
  local_60.fields.fakeValueActive =
       (__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
  local_60.fields.inited = (__this->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
  local_60.fields._26_6_ =
       *(undefined6 *)&(__this->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
  local_60.fields.fakeValue = (__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL(&local_60,(MethodInfo *)0x0);
  __this_00 = (__this->fields).MIOLFPIJMDH;
                    /* try { // try from 030f0f70 to 031f0f9f has its CatchHandler @ 030f120c */
  if ((BFBONKPKBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = BFBONKPKBNL_<>c_TypeInfo->static_fields->__9__15_0;
  if (action == (System_Action_BNKBGIIJNLF__o *)0x0) {
    if ((BFBONKPKBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_BNKBGIIJNLF__o *)thunk_FUN_01bda818(System_Action<BNKBGIIJNLF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &BFBONKPKBNL_<>c_TypeInfo->static_fields->__9__15_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
                    /* try { // try from 030f0ff4 to 031f0fff has its CatchHandler @ 030f1198 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<BNKBGIIJNLF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

