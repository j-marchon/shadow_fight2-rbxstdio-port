// Nekki.SF2.GUI.Shop.ShopScene$$AGODCLONCBM @ RVA 0x3434F78

void Nekki_SF2_GUI_Shop_ShopScene__AGODCLONCBM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  
  if ((DAT_04568186 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_NGPKPKEGFCD__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04568186 = 1;
  }
  __this_00 = (__this->fields)._ForgePanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__Open(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).CCKIFMALFBA;
    if (__this_01 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__SetForgeViewMode(__this_01,true,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._PanelsContainer;
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        target = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                      (target,(__this->fields)._ForgeModeX,(__this->fields)._ChangeModeDuration,
                       false,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                  ((Il2CppObject *)t,action,
                   Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

