// Nekki.SF2.GUI.Profile.ProfileScene$$.ctor @ RVA 0x3394AA0

void Nekki_SF2_GUI_Profile_ProfileScene___ctor
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  if ((DAT_04567c48 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>__ctor__);
    DAT_04567c48 = 1;
  }
  (__this->fields).AIAODGKGPEI = 5;
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<ProfileScene>__ctor__);
  return;
}

