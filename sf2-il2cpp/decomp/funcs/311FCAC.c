// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$Refresh @ RVA 0x311FCAC

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__Refresh
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,bool GKGCMGDFHAH,bool LLDEFPNPOPI,bool DINFMCNONGH,
               MethodInfo *method)

{
  long lVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this_01;
  
  lVar1 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar1 = 0x30;
  }
  __this_01 = *(Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o **)
               ((long)&__this->klass + lVar1);
  if ((__this_01 != (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,GKGCMGDFHAH,(MethodInfo *)0x0);
    Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Refresh
              (__this_01,LLDEFPNPOPI,DINFMCNONGH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

