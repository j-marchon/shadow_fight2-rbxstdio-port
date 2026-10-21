// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$EnableProbability @ RVA 0x32C8C3C

void Nekki_SF2_GUI_Profile_BattlePassRewardCell__EnableProbability
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04567505 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassRewardCell_HFAMAMIMEIA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567505 = 1;
  }
  pSVar1 = (__this->fields)._cellProbabilityButton;
  if (pSVar1 != (SFButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pSVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._cellProbabilityButton;
    if (pSVar1 != (SFButton_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
      if (CJNHFNHJHPE) {
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
          return;
        }
      }
      else if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

