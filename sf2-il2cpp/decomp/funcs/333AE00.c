// Nekki.SF2.GUI.Profile.InfoPanel$$Clear @ RVA 0x333AE00

void Nekki_SF2_GUI_Profile_InfoPanel__Clear
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_02;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_03;
  
  pNVar1 = (__this->fields)._TitleLabel;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._NoContentMessageLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._PerkContent;
      if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._TrickContent;
        if ((__this_01 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._AchievementContent;
          if ((__this_02 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            __this_03 = (__this->fields)._SealsContent;
            if ((__this_03 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

