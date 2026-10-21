// Nekki.SF2.GUI.Pvp.PvpScene$$HEJEELBDKKD @ RVA 0x321D5CC

void Nekki_SF2_GUI_Pvp_PvpScene__HEJEELBDKKD
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *HBHPFKJMGCK,MethodInfo *method
               )

{
  System_Action_string__o *CJNHFNHJHPE;
  System_String_o **ppSVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this_00;
  
  if ((DAT_04566f14 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HEJEELBDKKD__);
    DAT_04566f14 = 1;
  }
  __this_00 = (__this->fields).FLABENKGFDF;
  CJNHFNHJHPE = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_RandomSelectionModule__remove_OnAnimationEnd
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    ppSVar1 = &(__this->fields).GOGMCKIMHDH;
    *ppSVar1 = HBHPFKJMGCK;
    thunk_FUN_01c20e04(ppSVar1,HBHPFKJMGCK);
    Nekki_SF2_GUI_Pvp_PvpScene__EEGOPNGLBMJ(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

