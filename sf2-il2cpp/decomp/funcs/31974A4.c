// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ShowRaidCharge @ RVA 0x31974A4

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowRaidCharge
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  
  __this_00 = (__this->fields)._btnRaidCharge;
  if ((__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._raidChargeCount;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

