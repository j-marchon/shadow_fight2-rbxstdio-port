// Nekki.SF2.GUI.GeneralMenu.MenuItemVideo$$TryCallEvent @ RVA 0x34CAD74

void Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__TryCallEvent
               (Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this,int32_t GJKJICHICFN,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((GJKJICHICFN == 0) &&
     (bVar1 = Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__KCAPGAALIDN
                        (__this,(__this->fields).VideoInternalName,method), bVar1)) {
    return;
  }
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TryCallEvent
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,GJKJICHICFN,(MethodInfo *)0x0);
  return;
}

