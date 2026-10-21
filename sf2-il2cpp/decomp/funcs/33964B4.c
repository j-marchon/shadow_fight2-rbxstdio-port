// Nekki.SF2.GUI.Profile.ProfileScene$$EFNENLMNEII @ RVA 0x33964B4

void Nekki_SF2_GUI_Profile_ProfileScene__EFNENLMNEII
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_01;
  
  if ((DAT_04567c55 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567c55 = 1;
  }
  if ((__this->fields).GGIEDAGJFHO == false) {
    return;
  }
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__ResetModel(__this_00,(MethodInfo *)0x0);
    (__this->fields).GGIEDAGJFHO = false;
    __this_01 = (__this->fields)._Background;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
      Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
                (__this_01,
                 (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->JMKOGEHDLIC).fields,
                 (MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_ProfileScene__BAOFPAIAGIO(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

