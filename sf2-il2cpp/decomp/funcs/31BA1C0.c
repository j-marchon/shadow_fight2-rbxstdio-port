// Nekki.SF2.GUI.Fight.RaidQuestsRewardsContent$$Init @ RVA 0x31BA1C0

void Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__Init
               (Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  GALHNMPIEHA_o *pGVar2;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_BDMABHJEEGD__o **ppSVar3;
  LabelButton_o *pLVar4;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04566bd4 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_MKNLMMDHLLM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566bd4 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pGVar2 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (pGVar2 != (GALHNMPIEHA_o *)0x0) {
    ppSVar3 = &(__this->fields).MFNJOCKJKGG;
    *ppSVar3 = (pGVar2->fields)._LGNMHMIHFAF_k__BackingField;
    thunk_FUN_01c20e04(ppSVar3);
    pLVar4 = (__this->fields)._ButtonOk;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_00;
    if (!bVar1) {
LAB_032ba2c4:
      Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__NBFHBIILDNG(__this,method_00);
      return;
    }
    pLVar4 = (__this->fields)._ButtonOk;
    if (pLVar4 != (LabelButton_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar4->fields).super.super.super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
        method_00 = extraout_x1_01;
        goto LAB_032ba2c4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

