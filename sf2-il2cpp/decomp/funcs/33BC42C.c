// Nekki.SF2.GUI.Fight.FightHintController$$GIENGNEGHPJ @ RVA 0x33BC42C

void Nekki_SF2_GUI_Fight_FightHintController__GIENGNEGHPJ
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o **ppNVar2;
  
  if ((DAT_04567dad & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_6357);
    FUN_01bab630(&StringLiteral_6348);
    DAT_04567dad = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
           Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                     (StringLiteral_6348,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__);
  ppNVar2 = &(__this->fields).LAPCPDGHEIH;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  if (*ppNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)*ppNVar2,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
             Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                       (StringLiteral_6357,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__
                       );
    ppNVar2 = &(__this->fields).MBEDNBHNLOH;
    *ppNVar2 = pNVar1;
    thunk_FUN_01c20e04(ppNVar2,pNVar1);
    if (*ppNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)*ppNVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

