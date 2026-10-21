// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333B3DC

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_02;
  Nekki_SF2_GUI_Profile_SealsContent_o *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  MethodInfo *in_x4;
  
  if ((DAT_0456796d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_7507);
    DAT_0456796d = 1;
  }
  __this_00 = (__this->fields)._PerkContent;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._TrickContent;
    if ((__this_01 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._AchievementContent;
      if ((__this_02 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._SealsContent;
        if ((pNVar2 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
            if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_7507,(MethodInfo *)0x0);
              return;
            }
            Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                      (__this,(CNDPGGAFHEA->fields)._COIPKAKHDFP_k__BackingField,true,0x58,in_x4);
            pNVar2 = (__this->fields)._SealsContent;
            if (pNVar2 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) {
              Nekki_SF2_GUI_Profile_SealsContent__Refresh(pNVar2,CNDPGGAFHEA,(MethodInfo *)0x0);
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

