// Nekki.SF2.Core.Fights.Controls.GameController$$DBALJOHIDAB @ RVA 0x33A48C4

void Nekki_SF2_Core_Fights_Controls_GameController__DBALJOHIDAB
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__o *pSVar1;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_Stick_o *pNVar3;
  
                    /* catch() { ... } // from try @ 034a4858 with catch @ 034a48dc
                       try { // try from 034a48dc to 035a4933 has its CatchHandler @ 034a45f4 */
                    /* catch() { ... } // from try @ 034a46a8 with catch @ 034a48ec */
  if ((DAT_04567ce4 & 1) == 0) {
                    /* catch() { ... } // from try @ 034a4684 with catch @ 034a48fc */
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_HCLIIHBKIIG__);
                    /* catch() { ... } // from try @ 034a476c with catch @ 034a490c
                       catch() { ... } // from try @ 034a4824 with catch @ 034a490c */
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_PAIBMOAPDLC__);
                    /* catch() { ... } // from try @ 034a4708 with catch @ 034a4918
                       catch() { ... } // from try @ 034a482c with catch @ 034a4918 */
    DAT_04567ce4 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_Core_Fights_Controls_GameController__UpdateTouchControlsScale(__this,method);
  pNVar3 = (__this->fields)._Joystick;
  pSVar1 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
                    /* try { // try from 034a4934 to 035a4937 has its CatchHandler @ 034a49cc */
  System_Action<object>___ctor();
  if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickBegin(pNVar3,pSVar1,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._Joystick;
    pSVar1 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo)
    ;
                    /* try { // try from 034a4974 to 035a499b has its CatchHandler @ 034a4a50 */
    System_Action<object>___ctor();
    if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickChange(pNVar3,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 034a499c to 035a49b3 has its CatchHandler @ 034a45f4 */
      pNVar3 = (__this->fields)._Joystick;
      pSVar1 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
                    /* try { // try from 034a49b4 to 035a49b7 has its CatchHandler @ 034a49dc */
      System_Action<object>___ctor();
      if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
                    /* try { // try from 034a49c4 to 035a4a3b has its CatchHandler @ 034a4a50 */
        Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickEnd(pNVar3,pSVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a4934 with catch @ 034a49cc */
        pNVar2 = (__this->fields)._ActionButtons;
        if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
          Nekki_SF2_Core_Fights_Controls_ActionButtons__Init(pNVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a49b4 with catch @ 034a49dc */
          pNVar2 = (__this->fields)._ActionButtons;
          pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                   thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
            Nekki_SF2_Core_Fights_Controls_ActionButtons__add_OnButtonPress
                      (pNVar2,pSVar1,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._ActionButtons;
            pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                     thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
                    /* try { // try from 034a4a3c to 035a4a47 has its CatchHandler @ 034a45f4 */
                    /* try { // try from 034a4a48 to 035a4a4f has its CatchHandler @ 034a4a50 */
                    /* catch() { ... } // from try @ 034a48a4 with catch @ 034a4a50
                       catch() { ... } // from try @ 034a4974 with catch @ 034a4a50
                       catch() { ... } // from try @ 034a49c4 with catch @ 034a4a50
                       catch() { ... } // from try @ 034a4a48 with catch @ 034a4a50 */
              Nekki_SF2_Core_Fights_Controls_ActionButtons__add_OnButtonRelease
                        (pNVar2,pSVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a4a54 to 035a4adf has its CatchHandler @ 034a4a54
                       catch() { ... } // from try @ 034a4a54 with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4c2c with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4cdc with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4d8c with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4e34 with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4ed4 with catch @ 034a4a54 */
  FUN_01bab8c8();
}

