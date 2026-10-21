// Nekki.SF2.GUI.Map.RaidToggleButton$$Awake @ RVA 0x319A240

void Nekki_SF2_GUI_Map_RaidToggleButton__Awake
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  CHDGOFBHAFI_o *pCVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04566a9f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_GPLIGCNNIED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidToggleButton_LHMJHADBPDI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566a9f = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields)._goToStoryBtn;
  (__this->fields).DIGKFGIEOAJ = false;
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
    pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar1,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._goToRaidBtn;
      if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
        pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar1,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
          if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
            Nekki_SF2_GUI_Map_RaidToggleButton__SetState
                      (__this,(uint)(pCVar2->fields).BLELLCNDBHN,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

