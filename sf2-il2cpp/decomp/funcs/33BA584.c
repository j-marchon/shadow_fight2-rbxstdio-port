// Nekki.SF2.GUI.Profile.PerkSubItem$$GetLock @ RVA 0x33BA584

bool Nekki_SF2_GUI_Profile_PerkSubItem__GetLock
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  JLGNBOILFLN_o *pJVar1;
  
  if (((__this->fields).MBIMMBFKMJJ == false) &&
     (pJVar1 = (__this->fields)._CGEGGOPIPHH_k__BackingField, pJVar1 != (JLGNBOILFLN_o *)0x0)) {
    return (pJVar1->fields).OIKLOAGFFGO == 3;
  }
  return true;
}

