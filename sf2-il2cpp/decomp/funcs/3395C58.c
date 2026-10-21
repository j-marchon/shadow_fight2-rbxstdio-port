// Nekki.SF2.GUI.Profile.ProfileScene$$UpdateBottomIndicators @ RVA 0x3395C58

void Nekki_SF2_GUI_Profile_ProfileScene__UpdateBottomIndicators
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c50 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    DAT_04567c50 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).GJIPOBCNEPG;
  if (__this_00 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

