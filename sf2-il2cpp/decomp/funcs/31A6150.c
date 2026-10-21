// Nekki.SF2.GUI.Profile.TrickSubItem$$UpdateState @ RVA 0x31A6150

void Nekki_SF2_GUI_Profile_TrickSubItem__UpdateState
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  KCLPNDAPADO_o *pKVar2;
  
  pKVar2 = (__this->fields).MGHHBGMPDEI;
  bVar1 = false;
  if (pKVar2 != (KCLPNDAPADO_o *)0x0) {
    bVar1 = (pKVar2->fields).HAEBIACJLHP != false;
  }
  (__this->fields).KANKDJLJMMO = bVar1;
  return;
}

