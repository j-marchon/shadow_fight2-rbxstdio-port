// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$FKOGCHJKFGB @ RVA 0x3172954

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__FKOGCHJKFGB
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_00;
  
  if ((DAT_04566936 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566936 = 1;
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04565c84 = '\x01';
  }
  __this_00 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032729d8 to 03372a6b has its CatchHandler @ 032729d8
                       catch() { ... } // from try @ 032729d8 with catch @ 032729d8
                       catch() { ... } // from try @ 03272a8c with catch @ 032729d8
                       catch() { ... } // from try @ 03272aec with catch @ 032729d8
                       catch() { ... } // from try @ 03272b24 with catch @ 032729d8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
      (__this_00->fields).GADNEKIHBNO = CJNHFNHJHPE;
      Nekki_SF2_Core_Fights_Controls_GameController__set_IsShowController
                (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

