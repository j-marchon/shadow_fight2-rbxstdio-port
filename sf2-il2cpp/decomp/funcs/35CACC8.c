// Nekki.SF2.GUI.PressButton$$DoStateTransition @ RVA 0x35CACC8

void Nekki_SF2_GUI_PressButton__DoStateTransition
               (Nekki_SF2_GUI_PressButton_o *__this,int32_t HJEBKCDDBAB,bool BPHNPNCDLOA,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,HJEBKCDDBAB,BPHNPNCDLOA,(MethodInfo *)0x0);
  if (HJEBKCDDBAB == 2) {
    Nekki_SF2_GUI_PressButton__FHECHEPBFFA(__this,method_00);
    return;
  }
  Nekki_SF2_GUI_PressButton__CCNCILCJAMI(__this,method_00);
  return;
}

