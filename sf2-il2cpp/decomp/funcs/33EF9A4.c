// FCJBEKHDLAF$$RandomizeObscuredVars @ RVA 0x33EF9A4

void FCJBEKHDLAF__RandomizeObscuredVars(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_PJKHAJKEHEL__o **ppSVar2;
  PJKHAJKEHEL_o *pPVar3;
  BEPJMNAHCAD_o *__this_00;
  System_Action_OLKKAIFGGAK__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_02;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar5;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar6;
  System_Action_OLKKAIFGGAK__o *action;
  System_Action_PJKHAJKEHEL__o *action_00;
  
  if ((DAT_04567ef8 & 1) == 0) {
    FUN_01bab630(&System_Action<PJKHAJKEHEL>_TypeInfo);
    FUN_01bab630(&System_Action<OLKKAIFGGAK>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_ForEach__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_FCJBEKHDLAF_<>c_EOLAKDMJEEE__);
    FUN_01bab630(&Method_FCJBEKHDLAF_<>c_MJCHLFDDEHB__);
    FUN_01bab630(&FCJBEKHDLAF_<>c_TypeInfo);
    DAT_04567ef8 = 1;
    method = extraout_x1;
  }
  __this_02 = (__this->fields).DFGLEOANOFI;
  if (__this_02 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FCJBEKHDLAF_<>c_TypeInfo,method);
      method = extraout_x1_00;
    }
    action_00 = FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__171_0;
    if (action_00 == (System_Action_PJKHAJKEHEL__o *)0x0) {
      if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(FCJBEKHDLAF_<>c_TypeInfo,method);
      }
      action_00 = (System_Action_PJKHAJKEHEL__o *)
                  thunk_FUN_01bda818(System_Action<PJKHAJKEHEL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__171_0;
      *ppSVar2 = action_00;
      thunk_FUN_01c20e04(ppSVar2,action_00);
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_02,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<PJKHAJKEHEL>_ForEach__);
  }
  pPVar3 = (__this->fields).KCHOEJOHIMM;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    PJKHAJKEHEL__RandomizeObscuredVars(pPVar3,(MethodInfo *)0x0);
  }
  pPVar3 = (__this->fields).JEDELFOBLEN;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    PJKHAJKEHEL__RandomizeObscuredVars(pPVar3,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).HIBPKNAIPLH;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034efc1c;
    pNVar6 = (pNVar5->fields).FLKPJPEAJAJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar5 = (__this->fields).HIBPKNAIPLH;
      if ((pNVar5 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) ||
         (pNVar6 = (pNVar5->fields).FLKPJPEAJAJ, pNVar6 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0)
         ) goto LAB_034efc1c;
      Nekki_SF2_GUI_Fight_ViewerFight__RandomizeObscuredVars(pNVar6,(MethodInfo *)0x0);
    }
  }
  __this_00 = (__this->fields).FAJCMHDLBEJ;
  if (__this_00 != (BEPJMNAHCAD_o *)0x0) {
    BEPJMNAHCAD__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IILLHHPGGKA;
  if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__171_1;
  if (action == (System_Action_OLKKAIFGGAK__o *)0x0) {
    if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar4 = &FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__171_1;
    *ppSVar4 = action;
    thunk_FUN_01c20e04(ppSVar4,action);
  }
  if (__this_01 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_ForEach__);
    return;
  }
LAB_034efc1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

