// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$Update @ RVA 0x3324570

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Scripts_LoadingCircle_o *pNVar5;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar6;
  
  if ((DAT_04567864 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567864 = 1;
    method = extraout_x1;
  }
  pNVar6 = (__this->fields).OMMHPJLPJGL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar6 = (__this->fields).OMMHPJLPJGL;
    if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_034246dc;
    bVar2 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__get_IsActive
                      (pNVar6,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
  }
  pNVar3 = (__this->fields).JICANOFGOJF;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((__this->fields).HOKHHIBHFBM != bVar2) {
      pNVar3 = (__this->fields).JICANOFGOJF;
      if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034246dc;
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(pUVar4,(__this->fields).HOKHHIBHFBM,(MethodInfo *)0x0);
    }
    pNVar5 = (__this->fields).PGEOMGONABB;
    if ((pNVar5 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      cVar1 = (__this->fields).HOKHHIBHFBM;
      if ((bool)cVar1 != bVar2) {
        pNVar5 = (__this->fields).PGEOMGONABB;
        if (pNVar5 == (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) goto LAB_034246dc;
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar4,(__this->fields).HOKHHIBHFBM,(MethodInfo *)0x0);
        cVar1 = (__this->fields).HOKHHIBHFBM;
      }
      if (cVar1 != '\0') {
        pNVar5 = (__this->fields).PGEOMGONABB;
        if (pNVar5 == (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) goto LAB_034246dc;
        bVar2 = Nekki_SF2_GUI_Scripts_LoadingCircle__get_IsPlaying(pNVar5,(MethodInfo *)0x0);
        if (!bVar2) {
          pNVar5 = (__this->fields).PGEOMGONABB;
          if (pNVar5 == (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) goto LAB_034246dc;
          Nekki_SF2_GUI_Scripts_LoadingCircle__Play(pNVar5,(MethodInfo *)0x0);
        }
      }
      if ((__this->fields).HOKHHIBHFBM != false) {
        return;
      }
      pNVar5 = (__this->fields).PGEOMGONABB;
      if (pNVar5 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) {
        bVar2 = Nekki_SF2_GUI_Scripts_LoadingCircle__get_IsPlaying(pNVar5,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        pNVar5 = (__this->fields).PGEOMGONABB;
        if (pNVar5 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) {
          Nekki_SF2_GUI_Scripts_LoadingCircle__Stop(pNVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034246dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

