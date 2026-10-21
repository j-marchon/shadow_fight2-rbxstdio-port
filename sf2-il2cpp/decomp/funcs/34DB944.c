// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$ProcessState @ RVA 0x34DB944

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__ProcessState
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *pKVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *IMMNELPBGIF;
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *pNVar6;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *in_x2;
  MethodInfo *method_01;
  int32_t iVar7;
  UnityEngine_Events_UnityEvent_o *__this_00;
  int32_t local_24;
  
  if ((DAT_04568716 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_AKEAFNEFBKC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_FBADHJLMHPG__);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_5742);
    DAT_04568716 = 1;
    method = extraout_x1;
  }
  switch((__this->fields).IAAABJBDEMK) {
  case 0:
  case 3:
  case 7:
    break;
  case 1:
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 == (KKLJIDJBFEI_o *)0x0) {
LAB_035dbc94:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pKVar2->fields)._CPLKKCAJOJJ_k__BackingField != false) {
      return;
    }
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_035dbc94;
    if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField == false) {
      Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__PGGACFIAGDA(__this,method_00);
      return;
    }
    iVar7 = 2;
    goto LAB_035dbc6c;
  case 2:
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__AJNEBENFIAJ(__this,method);
    return;
  case 4:
    if ((__this->fields).HCOEDJGHJNA == false) {
      return;
    }
    (__this->fields).HCOEDJGHJNA = false;
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565ff1 == '\0') {
      FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
      DAT_04565ff1 = '\x01';
    }
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
      pNVar6 = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)
               (*(__this->klass->vtable)._5_unknown.methodPtr)
                         (__this,(__this->klass->vtable)._5_unknown.method);
      (__this->fields).KCPNAKKMEGA = pNVar6;
    }
    else {
      (__this->fields).KCPNAKKMEGA = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
      pNVar6 = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
    }
    thunk_FUN_01c20e04(&(__this->fields).KCPNAKKMEGA,pNVar6);
    pNVar6 = (__this->fields).KCPNAKKMEGA;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar6 = (__this->fields).KCPNAKKMEGA;
      if (pNVar6 != (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0) {
        __this_00 = (pNVar6->fields).NHNIOGOEAJB;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_035dbc94;
    }
    iVar7 = 5;
LAB_035dbc6c:
    (__this->fields).IAAABJBDEMK = iVar7;
    break;
  case 5:
switchD_035db9e8_caseD_5:
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OnClose(__this,(Il2CppObject *)method,in_x2);
    return;
  case 6:
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__DIGPCFKCCBK(__this,method);
    method = extraout_x1_00;
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    if (DAT_04565ff1 == '\0') {
      FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
      DAT_04565ff1 = '\x01';
      method = extraout_x1_02;
    }
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_03;
    }
    if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false)
    goto switchD_035db9e8_caseD_5;
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).IAAABJBDEMK;
    pIVar3 = (Il2CppObject *)
             thunk_FUN_01bda448(Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_AKEAFNEFBKC_TypeInfo,
                                &local_24);
    if (args == (System_Object_array *)0x0) goto LAB_035dbc94;
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar3;
    thunk_FUN_01c20e04(args->m_Items,pIVar3);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_01 = (MethodInfo *)0x0;
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5742,args,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OnClose(__this,IMMNELPBGIF,method_01);
  }
  return;
}

