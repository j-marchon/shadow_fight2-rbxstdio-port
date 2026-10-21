// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TapLeftKunaiAnimation @ RVA 0x30951C0

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapLeftKunaiAnimation
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  
  if ((DAT_045660cd & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_045660cd = 1;
  }
  t = DG_Tweening_ShortcutExtensions__DOScale
                ((__this->fields)._leftKunai,1.2,0.08,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__SetLoops<object>
            ((Il2CppObject *)t,2,1,
             Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
            );
  return;
}

