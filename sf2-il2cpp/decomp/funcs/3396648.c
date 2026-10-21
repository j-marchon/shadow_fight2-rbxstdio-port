// Nekki.SF2.GUI.Profile.ProfileScene$$CFBMLNECFEF @ RVA 0x3396648

void Nekki_SF2_GUI_Profile_ProfileScene__CFBMLNECFEF
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **LKJHINHIIHD;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *pUVar1;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_02;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar3;
  
  if ((DAT_04567c59 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_BMBFKFKIMJJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04567c59 = 1;
  }
  __this_00 = (__this->fields)._LeftPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ProfileUIGroup;
    if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,false,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).GJIPOBCNEPG;
      if ((pNVar3 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) &&
         (pUVar1 = (pNVar3->fields)._CanvasGroup, pUVar1 != (UnityEngine_CanvasGroup_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
                    /* try { // try from 034966fc to 03596723 has its CatchHandler @ 03496f2c */
        UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,false,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04567c94 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
          DAT_04567c94 = '\x01';
        }
        if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03496758 to 03596783 has its CatchHandler @ 03496f28 */
        Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL = false;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__JEGCBLKOEGN(false,(MethodInfo *)0x0);
        LKJHINHIIHD = &(__this->fields).KPIIFJBPODO;
        Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA(__this_02,LKJHINHIIHD,method_00);
        t = DG_Tweening_DOTweenModuleUI__DOFade
                      ((__this->fields)._ProfileUIGroup,0.0,0.5,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 034967c0 to 035967c7 has its CatchHandler @ 03496f1c */
        DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 034967cc to 035967d3 has its CatchHandler @ 03496f18 */
        pDVar2 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                           ((Il2CppObject *)t,action,
                            Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                           );
                    /* try { // try from 034967dc to 035967eb has its CatchHandler @ 03496f24 */
        (__this->fields).KPIIFJBPODO = pDVar2;
        thunk_FUN_01c20e04(LKJHINHIIHD,pDVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034967f8 to 035967ff has its CatchHandler @ 03496f10 */
  FUN_01bab8c8();
}

