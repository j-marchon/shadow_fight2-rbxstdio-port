// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TapAnimation @ RVA 0x3095128

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapAnimation
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  Il2CppObject *t_00;
  
  if ((DAT_045660cc & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_045660cc = 1;
  }
  target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  t = DG_Tweening_ShortcutExtensions__DOScale(target,1.1,0.08,(MethodInfo *)0x0);
  t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                   ((Il2CppObject *)t,2,1,
                    Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                   );
  DG_Tweening_TweenSettingsExtensions__SetEase<object>
            (t_00,0x23,
             Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
            );
  return;
}

