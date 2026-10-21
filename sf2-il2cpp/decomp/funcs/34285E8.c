// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$.ctor @ RVA 0x34285E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_RaidInfoSprite__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_RaidInfoSprite__o *pSVar2;
  
  if ((DAT_04568120 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_LHNHKAEFKJC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_MCHKIJJLEDP__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo);
    DAT_04568120 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_0;
  if (pSVar2 == (System_Action_RaidInfoSprite__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_RaidInfoSprite__o *)
             thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    ppSVar1 = &(__this->fields).FCHKBFCNOJL;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_1;
    if (pSVar2 == (System_Action_RaidInfoSprite__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_RaidInfoSprite__o *)
               thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_1;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).HNHLJHHKELD;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    (__this->fields).KOPPGDKAEBP = 5;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

