// Nekki.SF2.GUI.Profile.PerkSubItem$$OnDestroy @ RVA 0x33BA5EC

void Nekki_SF2_GUI_Profile_PerkSubItem__OnDestroy
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Profile_SubItem__OnDestroy
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Profile_PerkSubItem__Clear(__this,method_00);
  return;
}

