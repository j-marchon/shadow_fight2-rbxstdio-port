// TypeDefIndex 2069
// Namespace: 
// [Serializable]
// private sealed class GeneralMenuList.<>c
// Fields:
//   public static readonly GeneralMenuList.<>c <>9; // 0x0
//   public static UnityAction <>9__10_1; // 0x8
//   public static UnityAction <>9__10_2; // 0x10
//   public static Action<MenuItemButton> <>9__16_0; // 0x18

// ===== internal void HKJAPNOMHFP()  [RVA 0x32BA8E8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.<>c$$HKJAPNOMHFP @ RVA 0x32BA8E8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c__HKJAPNOMHFP
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList___c_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x32BA8EC]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.<>c$$.ctor @ RVA 0x32BA8EC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void EKCOCBIDDON(MenuItemButton b)  [RVA 0x32BA8F4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.<>c$$EKCOCBIDDON @ RVA 0x32BA8F4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c__EKCOCBIDDON
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList___c_o *__this,
               Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *b,MethodInfo *method)

{
  if (b != (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0) {
    Nekki_SF2_GUI_GeneralMenu_MenuItemButton__set_Selection(b,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void IIMGOGFHFJN()  [RVA 0x32BA910]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.<>c$$IIMGOGFHFJN @ RVA 0x32BA910

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c__IIMGOGFHFJN
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList___c_o *__this,MethodInfo *method)

{
  return;
}


// ===== private static void .cctor()  [RVA 0x32BA914]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.<>c$$.cctor @ RVA 0x32BA914

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567486 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo);
    DAT_04567486 = 1;
  }
  __this = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields,__this);
  return;
}

