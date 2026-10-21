// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$Open @ RVA 0x33DAE4C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__Open
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *pDVar1;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DG_Tweening_Tween_o **ppDVar3;
  
  if ((DAT_04567e68 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_DCHFNNCGPKO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_ENMNHIMEELL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04567e68 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILAJJAGPCHI(__this,method);
  if ((__this->fields).LJCKJIAEIGD != false) {
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__LPNCEHPFOAF(__this,method_00);
  }
  target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                (target,(__this->fields)._OpenX,(__this->fields)._MoveDuration,false,
                 (MethodInfo *)0x0);
  pDVar1 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  t_00 = DG_Tweening_TweenSettingsExtensions__OnStart<object>
                   ((Il2CppObject *)t,pDVar1,
                    Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                   );
  pDVar1 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  pDVar2 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                     (t_00,pDVar1,
                      Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                     );
  ppDVar3 = &(__this->fields).IDMFMIPALLP;
  *ppDVar3 = pDVar2;
  thunk_FUN_01c20e04(ppDVar3);
  return;
}

