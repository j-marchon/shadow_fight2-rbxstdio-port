// Nekki.SF2.GUI.Shop.PropertiesPerksPanel.OCJHKJCJAIO$$NLJNHDBAGDL @ RVA 0x3011720

void Nekki_SF2_GUI_Shop_PropertiesPerksPanel_OCJHKJCJAIO__NLJNHDBAGDL
               (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_OCJHKJCJAIO_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *__this_00;
  HEFOANCOHDC_o *CDEABOAKDEJ;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_01;
  Nekki_SF2_GUI_Common_TouchHandler_o *__this_02;
  UnityEngine_GameObject_o *OKOHDENADGD;
  
  __this_01 = (__this->fields).scrollItem;
  if (__this_01 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0) {
    __this_00 = (__this->fields).__4__this;
    CDEABOAKDEJ = (__this->fields).p_perk;
    __this_02 = Nekki_SF2_GUI_Shop_ParameterScrollItem__get_TouchHandler
                          (__this_01,(MethodInfo *)0x0);
    if ((__this_02 != (Nekki_SF2_GUI_Common_TouchHandler_o *)0x0) &&
       (OKOHDENADGD = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *)0x0)) {
      Nekki_SF2_GUI_Shop_PerksPanel__AMKNLFPFLPK
                ((Nekki_SF2_GUI_Shop_PerksPanel_o *)__this_00,CDEABOAKDEJ,OKOHDENADGD,false,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

