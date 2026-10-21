// Nekki.SF2.GUI.Tutorial.Arrow$$Init @ RVA 0x353F5B8

void Nekki_SF2_GUI_Tutorial_Arrow__Init
               (Nekki_SF2_GUI_Tutorial_Arrow_o *__this,float HNCBBMAGAAC,MethodInfo *method)

{
  int32_t iVar1;
  
  (__this->fields).FGLFPGIOJLD = HNCBBMAGAAC;
  iVar1 = -0x80000000;
  if (HNCBBMAGAAC / 0.8 != INFINITY) {
    iVar1 = (int)(HNCBBMAGAAC / 0.8);
  }
  (__this->fields).FJINPAFBBHK = 0.8;
  (__this->fields).JGJPJDDCPNK = iVar1;
  return;
}

