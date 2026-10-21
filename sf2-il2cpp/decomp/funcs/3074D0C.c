// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$HHKOPHFBCOM @ RVA 0x3074D0C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__HHKOPHFBCOM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565f99 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CurrentSeasonViewController>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4952);
    DAT_04565f99 = 1;
  }
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (bVar2) {
LAB_03174ed4:
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JJADPCJIMOJ(__this,method_00);
      return;
    }
    __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_01,StringLiteral_4952,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).super.super._content;
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_AddComponent<RectTransform>__
                              );
        pUVar4 = (__this->fields).super.super._content;
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           ((__this_03 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar4,
                                    Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
            __this_03 != (UnityEngine_RectTransform_o *)0x0 &&
            (value = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0),
            __this_02 != (UnityEngine_RectTransform_o *)0x0)))) {
          ppNVar1 = &(__this->fields).MDFMCFCMEEB;
          UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
          pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_01,
                              Method_UnityEngine_GameObject_AddComponent<CurrentSeasonViewController>__
                             );
          *ppNVar1 = pNVar5;
          thunk_FUN_01c20e04(ppNVar1,pNVar5);
          pNVar5 = *ppNVar1;
          if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Init
                      (pNVar5,__this,pUVar3,(__this->fields)._clansHint,
                       (SFButton_o *)(__this->fields)._btnTopClans,
                       (SFButton_o *)(__this->fields)._btnTopPlayers,
                       (__this->fields)._loadingMessage,(__this->fields)._loadingCircle,
                       (__this->fields)._scroll,(__this->fields)._cellPlayerPrefab,
                       (__this->fields)._cellClanPrefab,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
            goto LAB_03174ed4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

