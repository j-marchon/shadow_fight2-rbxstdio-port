// IGFGDDANEPE$$RandomizeObscuredVars @ RVA 0x30A2A74

void IGFGDDANEPE__RandomizeObscuredVars(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  System_Action_HEFOANCOHDC__o **ppSVar1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Action_HEFOANCOHDC__o *action;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  
  if ((DAT_04566152 & 1) == 0) {
    FUN_01bab630(&System_Action<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    FUN_01bab630(&Method_IGFGDDANEPE_<>c_ODNOFIFMFEA__);
    FUN_01bab630(&IGFGDDANEPE_<>c_TypeInfo);
    DAT_04566152 = 1;
  }
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).DHPCMDOLAHE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).MCCADBLBPMN,(MethodInfo *)0x0);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).NOBPPMJKPLM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).DCFOJDEFIHG;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  __this_00 = (__this->fields).PAPANCDPPIF;
  if ((IGFGDDANEPE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = IGFGDDANEPE_<>c_TypeInfo->static_fields->__9__97_0;
  if (action == (System_Action_HEFOANCOHDC__o *)0x0) {
    if ((IGFGDDANEPE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_HEFOANCOHDC__o *)thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &IGFGDDANEPE_<>c_TypeInfo->static_fields->__9__97_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

