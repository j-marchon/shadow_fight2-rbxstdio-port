// Nekki.SF2.GUI.Shop.InfoPanelContent.FEGNCOGLDFA$$LOJIFIHGKEL @ RVA 0x300CA90

void Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA__LOJIFIHGKEL
               (Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_o *__this,IconLabelButton_o *b,
               MethodInfo *method)

{
  bool CJNHFNHJHPE;
  UnityEngine_Object_o *__this_00;
  System_String_o *value;
  System_String_o *__this_01;
  
  if (b != (IconLabelButton_o *)0x0) {
    __this_01 = (__this->fields).flashingButtons;
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)b,(MethodInfo *)0x0);
    if ((__this_00 != (UnityEngine_Object_o *)0x0) &&
       (value = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
       __this_01 != (System_String_o *)0x0)) {
      CJNHFNHJHPE = System_String__Contains(__this_01,value,(MethodInfo *)0x0);
      SFButton__set_IsFlashing((SFButton_o *)b,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

