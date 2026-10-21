// Nekki.SF2.GUI.Pvp.PvPHintController$$CEPJIALMEOO @ RVA 0x352A4E4

void Nekki_SF2_GUI_Pvp_PvPHintController__CEPJIALMEOO
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  MethodInfo *pMVar2;
  MethodInfo *in_x3;
  
  pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    if ((__this->fields).super.field_0x16 == '\0') {
      pMVar2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive(pNVar1,0x25a,false,in_x3);
      pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
      if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintList__set_DescriptionActive(pNVar1,false,pMVar2);
        pNVar1 = (__this->fields).LAPCPDGHEIH;
        if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pMVar2 = (MethodInfo *)0x1;
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive(pNVar1,0x25a,true,in_x3);
      pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
      if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintList__set_DescriptionActive(pNVar1,true,pMVar2);
        pNVar1 = (__this->fields).LAPCPDGHEIH;
        if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

