// AFFHKININGD$$RandomizeObscuredVars @ RVA 0x333EC4C

void AFFHKININGD__RandomizeObscuredVars(AFFHKININGD_o *__this,MethodInfo *method)

{
  System_Action_JBCGDIEHOHH__o **ppSVar1;
  System_Action_PJKHAJKEHEL__o **ppSVar2;
  MethodInfo *in_x2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_01;
  System_Action_PJKHAJKEHEL__o *action;
  System_Action_JBCGDIEHOHH__o *action_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o __this_04;
  
  if ((DAT_04567985 & 1) == 0) {
    FUN_01bab630(&System_Action<PJKHAJKEHEL>_TypeInfo);
    FUN_01bab630(&System_Action<JBCGDIEHOHH>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_ForEach__);
    FUN_01bab630(&Method_AFFHKININGD_<>c_APMADPDPANM__);
    FUN_01bab630(&Method_AFFHKININGD_<>c_LHJKOBAJHBB__);
    FUN_01bab630(&AFFHKININGD_<>c_TypeInfo);
    DAT_04567985 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).GNPJCLKAPIA,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).NLHBNEAKOHE,(MethodInfo *)0x0);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).GENLHJOKOIJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).NHNNEADDBDB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).JHCMAOFOCPH,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).LGLKMANDGPD,(MethodInfo *)0x0);
  __this_04.fields.fakeValue = 0;
  __this_04.fields.fakeValueActive = false;
  __this_04.fields.inited = false;
  __this_04.fields._14_2_ = 0;
  __this_04.fields._0_8_ = &(__this->fields).KLLNCGMOIHL;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__GPJJDLBJOAL(__this_04,in_x2);
  __this_01 = (__this->fields).FGAENDJJOGN;
  if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action_00 = AFFHKININGD_<>c_TypeInfo->static_fields->__9__59_0;
  if (action_00 == (System_Action_JBCGDIEHOHH__o *)0x0) {
    if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = (System_Action_JBCGDIEHOHH__o *)
                thunk_FUN_01bda818(System_Action<JBCGDIEHOHH>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &AFFHKININGD_<>c_TypeInfo->static_fields->__9__59_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<JBCGDIEHOHH>_ForEach__);
    __this_00 = (__this->fields).MECHOBPGHFJ;
    if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = AFFHKININGD_<>c_TypeInfo->static_fields->__9__59_1;
    if (action == (System_Action_PJKHAJKEHEL__o *)0x0) {
      if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_PJKHAJKEHEL__o *)
               thunk_FUN_01bda818(System_Action<PJKHAJKEHEL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &AFFHKININGD_<>c_TypeInfo->static_fields->__9__59_1;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_00 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<PJKHAJKEHEL>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

