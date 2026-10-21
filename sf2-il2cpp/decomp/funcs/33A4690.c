// Nekki.SF2.Core.Fights.Controls.GameController$$CIIBDMIDPCN @ RVA 0x33A4690

void Nekki_SF2_Core_Fights_Controls_GameController__CIIBDMIDPCN
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__o *pSVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_Stick_o *pNVar2;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar3;
  
                    /* try { // try from 034a46a8 to 035a46bb has its CatchHandler @ 034a48ec */
  if ((DAT_04567ce1 & 1) == 0) {
                    /* try { // try from 034a46c8 to 035a46cf has its CatchHandler @ 034a4834 */
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_HCLIIHBKIIG__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_PAIBMOAPDLC__);
    DAT_04567ce1 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._Joystick;
  pSVar1 = (System_Action_GGFFOJJGHGP__o *)
           thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo,method);
                    /* try { // try from 034a4708 to 035a472f has its CatchHandler @ 034a4918 */
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickBegin(pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Joystick;
    pSVar1 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickChange(pNVar2,pSVar1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Joystick;
      pSVar1 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
                    /* try { // try from 034a476c to 035a4793 has its CatchHandler @ 034a490c */
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickEnd(pNVar2,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 034a4794 to 035a481f has its CatchHandler @ 034a45f4 */
        pNVar3 = (__this->fields)._ActionButtons;
        pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                 thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
          Nekki_SF2_Core_Fights_Controls_ActionButtons__remove_OnButtonPress
                    (pNVar3,pSVar1,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._ActionButtons;
          pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                   thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
            Nekki_SF2_Core_Fights_Controls_ActionButtons__remove_OnButtonRelease
                      (pNVar3,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

