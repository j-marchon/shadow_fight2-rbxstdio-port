// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$OnDestroy @ RVA 0x312134C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  SFButton_o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_c *pNVar3;
  
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OOIAOANJOFO(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems(__this,method_00);
  pSVar2 = (__this->fields).IELNFDNPDEM;
  if ((pSVar2 != (SFButton_o *)0x0) &&
     (pUVar1 = (pSVar2->fields).super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).NJHJPOAKMNP;
    if ((pSVar2 != (SFButton_o *)0x0) &&
       (pUVar1 = (pSVar2->fields).super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PDHMLFAMNCO;
      if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        pNVar3 = __this->klass;
        (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
                    /* WARNING: Could not recover jumptable at 0x032213c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->vtable)._7_unknown.methodPtr)(__this,(pNVar3->vtable)._7_unknown.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

