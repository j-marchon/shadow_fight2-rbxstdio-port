// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$AKOPPOBKDCA @ RVA 0x310028C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__AKOPPOBKDCA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o **ppNVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *__this_04;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_045664ba & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RaidLeaguesLeaderboard>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_10902);
    DAT_045664ba = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,StringLiteral_10902,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      __this_04 = (__this->fields).super.super._content;
      if ((__this_04 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    Util__OHBILOGJCLA<object>(__this_00,Method_Util_OHBILOGJCLA<RectTransform>__);
        __this_03 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if ((__this_03 != (UnityEngine_RectTransform_o *)0x0) &&
           (UVar4 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_RectTransform_o *)0x0)) {
          ppNVar1 = &(__this->fields).KPGAAKKCKOA;
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)UVar4.fields._8_8_,(MethodInfo *)0x0);
          pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_00,
                              Method_UnityEngine_GameObject_AddComponent<RaidLeaguesLeaderboard>__);
          *ppNVar1 = pNVar3;
          thunk_FUN_01c20e04(ppNVar1,pNVar3);
          if (*ppNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Init
                      (*ppNVar1,__this,(__this->fields)._scroll,(__this->fields)._leagueCellPrefab,
                       (__this->fields)._hintPrefab,(__this->fields)._posHintPrefab,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

