// Nekki.SF2.GUI.Common.SceneMenuScroll$$Switch @ RVA 0x30BBE08

void Nekki_SF2_GUI_Common_SceneMenuScroll__Switch
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_x2;
  
  iVar1 = (__this->fields).IAAABJBDEMK;
  if (iVar1 == 1) {
    Nekki_SF2_GUI_Common_SceneMenuScroll__Close(__this,method);
    return;
  }
  if (iVar1 == 3) {
    Nekki_SF2_GUI_Common_SceneMenuScroll__Open(__this,0,in_x2);
    return;
  }
  return;
}

