// TypeDefIndex 3098
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class MenuItemVideo : MenuItemButton
// Fields:
//   private string VideoInternalName; // 0x78
//   private string VisibleName; // 0x80
//   private string LockedName; // 0x88
//   private GameObject LockedImage; // 0x90

// ===== public void .ctor()  [RVA 0x34CACC4]
// Nekki.SF2.GUI.GeneralMenu.MenuItemVideo$$.ctor @ RVA 0x34CACC4

void Nekki_SF2_GUI_GeneralMenu_MenuItemVideo___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton___ctor
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private bool KCAPGAALIDN(string MAFHEJCDJLH)  [RVA 0x34CACCC]
// Nekki.SF2.GUI.GeneralMenu.MenuItemVideo$$KCAPGAALIDN @ RVA 0x34CACCC

bool Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__KCAPGAALIDN
               (Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this,System_String_o *MAFHEJCDJLH,
               MethodInfo *method)

{
  bool bVar1;
  FGKGKDEJCOG_o *__this_00;
  
  if ((DAT_04568666 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568666 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (__this_00 != (FGKGKDEJCOG_o *)0x0) {
    bVar1 = FGKGKDEJCOG__KPAEAHPADBL(__this_00,MAFHEJCDJLH,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void TryCallEvent(FBBNEILNOKK GJKJICHICFN)  [RVA 0x34CAD74]
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


// ===== protected override void OnEnable()  [RVA 0x34CADB8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemVideo$$OnEnable @ RVA 0x34CADB8

void Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__OnEnable
               (Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this,MethodInfo *method)

{
  long lVar1;
  bool value;
  Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *in_x2;
  UnityEngine_GameObject_o *__this_02;
  
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnEnable
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  value = Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__KCAPGAALIDN
                    (__this_00,(__this->fields).VideoInternalName,in_x2);
  __this_02 = (__this->fields).LockedImage;
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_02,value,(MethodInfo *)0x0);
    __this_01 = (__this->fields).super._label;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      lVar1 = 0x88;
      if (!value) {
        lVar1 = 0x80;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (__this_01,*(System_String_o **)((long)&__this->klass + lVar1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

