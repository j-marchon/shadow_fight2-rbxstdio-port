// Nekki.SF2.GUI.Profile.BattlePassPanel$$PGMEJIGDFIK @ RVA 0x3591ED4

void Nekki_SF2_GUI_Profile_BattlePassPanel__PGMEJIGDFIK
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  EGMONPGHHDP_o *__this_00;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_01;
  EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *x;
  UnityEngine_Component_o *__this_02;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o **ppUVar4;
  LabelButton_o *__this_03;
  
  if ((DAT_04568d80 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d80 = 1;
    method = extraout_x1;
  }
  __this_03 = (__this->fields)._btnGetReward;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if ((__this_00 == (EGMONPGHHDP_o *)0x0) ||
     (bVar2 = EGMONPGHHDP__LKMGFEDIOAC(__this_00,(__this->fields).KEEBABPJPJK,(MethodInfo *)0x0),
     __this_03 == (LabelButton_o *)0x0)) goto LAB_0369202c;
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this_03,bVar2,(MethodInfo *)0x0);
  __this_01 = (__this->fields)._scroller;
  if (__this_01 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_0369202c;
  x = EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellViewAtDataIndex
                (__this_01,(__this->fields).KEEBABPJPJK,(MethodInfo *)0x0);
  if (x == (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0) {
LAB_03691fa0:
    x = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03691fa0;
    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo) {
      x = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if ((x != (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0) &&
     (__this_02 = *(UnityEngine_Component_o **)&x[1].fields.active,
     __this_02 != (UnityEngine_Component_o *)0x0)) {
    pUVar3 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
    ppUVar4 = &(__this->fields).BFGECCFLJBM;
    *ppUVar4 = pUVar3;
    thunk_FUN_01c20e04(ppUVar4,pUVar3);
    if (*ppUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(*ppUVar4,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0369202c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

