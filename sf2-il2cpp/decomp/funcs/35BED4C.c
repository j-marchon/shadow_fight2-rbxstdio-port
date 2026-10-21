// Nekki.SF2.GUI.Fight.ViewerFight$$GetScreenModel @ RVA 0x35BED4C

Nekki_SF2_GUI_Fight_ScreenModel_o *
Nekki_SF2_GUI_Fight_ViewerFight__GetScreenModel
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  long lVar1;
  
                    /* try { // try from 036bed50 to 037bed6f has its CatchHandler @ 036bec8c */
  lVar1 = 0x58;
  if (DPJIDNBJIBG != 0) {
    lVar1 = 0x60;
  }
  return *(Nekki_SF2_GUI_Fight_ScreenModel_o **)((long)&__this->klass + lVar1);
}

