// Nekki.SF2.GUI.Fight.RaidQuestsRewardsContent$$NBFHBIILDNG @ RVA 0x31BA2D8

void Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__NBFHBIILDNG
               (Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  GALHNMPIEHA_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Il2CppObject *item;
  JMDPBFOCHHP_o *__this_02;
  JMDPBFOCHHP_EBEGCDCOHHJ_o *pJVar2;
  ADJEBFOPFFF_o *__this_03;
  System_Collections_Generic_List_BDMABHJEEGD__o *__this_04;
  MethodInfo *in_x3;
  System_String_o **ppSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_Fight_RewardPanel_o *pNVar5;
  
  if ((DAT_04566bd5 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<BDMABHJEEGD>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BDMABHJEEGD>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Remove__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566bd5 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).MFNJOCKJKGG,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BDMABHJEEGD>__);
  if (bVar1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (__this_00 != (GALHNMPIEHA_o *)0x0) {
      GALHNMPIEHA__JINOKMLGNIK(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields).super.NHNIOGOEAJB;
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_032ba538;
  }
  item = DJNBJHPDKDP__KIKGKKGDCKK<object>
                   ((System_Collections_Generic_List_T__o *)(__this->fields).MFNJOCKJKGG,
                    Method_DJNBJHPDKDP_KIKGKKGDCKK<BDMABHJEEGD>__);
  pNVar4 = (__this->fields)._CaptionLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((item == (Il2CppObject *)0x0) || (__this_02 == (JMDPBFOCHHP_o *)0x0)) goto LAB_032ba538;
    pJVar2 = JMDPBFOCHHP__NNCKFAHCIBE(__this_02,*(int32_t *)&item[1].monitor,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._CaptionLabel;
    if (pJVar2 == (JMDPBFOCHHP_EBEGCDCOHHJ_o *)0x0) {
      ppSVar3 = &string_TypeInfo->static_fields->Empty;
    }
    else {
      ppSVar3 = &(pJVar2->fields).ABCHAOKFLGL;
    }
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032ba538;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,*ppSVar3,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._RewardPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._RewardPanel;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) goto LAB_032ba538;
    Nekki_SF2_GUI_Fight_RewardPanel__Clear(pNVar5,(MethodInfo *)0x0);
  }
  if (item != (Il2CppObject *)0x0) {
    if (item[3].monitor == (void *)0x0) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_03 != (ADJEBFOPFFF_o *)0x0) {
      ADJEBFOPFFF__AEADCLCKCEL(__this_03,item[3].monitor,false,in_x3);
      pNVar5 = (__this->fields)._RewardPanel;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields)._RewardPanel;
        if (pNVar5 == (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) goto LAB_032ba538;
        Nekki_SF2_GUI_Fight_RewardPanel__Init(pNVar5,item[3].monitor,false,(MethodInfo *)0x0);
      }
      __this_04 = (__this->fields).MFNJOCKJKGG;
      if (__this_04 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)__this_04,item,
                   Method_System_Collections_Generic_List<BDMABHJEEGD>_Remove__);
        return;
      }
    }
  }
LAB_032ba538:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

