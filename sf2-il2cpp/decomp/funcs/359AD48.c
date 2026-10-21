// Nekki.SF2.GUI.Profile.AchievementCell$$GJNMBGMOEHH @ RVA 0x359AD48

void Nekki_SF2_GUI_Profile_AchievementCell__GJNMBGMOEHH
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04568dc1 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_AchievementCell_HJKLMBOACHH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568dc1 = 1;
  }
  pNVar3 = (__this->fields).achievSubItem;
  if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
    (pNVar3->fields).super.PEJMMOONAHC = (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.PEJMMOONAHC,__this);
    pNVar3 = (__this->fields).achievSubItem;
    if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar1,0.0,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).achievSubItem;
      if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
        pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar1,-240.0,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).achievSubItem;
        if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
          pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pNVar3->fields).super.super.super.m_OnClick;
          pUVar2 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__RemoveListener(pUVar4,pUVar2,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).achievSubItem;
            if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
              pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                       (pNVar3->fields).super.super.super.m_OnClick;
              pUVar2 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

