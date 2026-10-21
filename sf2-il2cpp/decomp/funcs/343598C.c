// Nekki.SF2.GUI.Shop.ShopScene$$set_Mode @ RVA 0x343598C

void Nekki_SF2_GUI_Shop_ShopScene__set_Mode
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Button_o *__this_00;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Sequence_o *s;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  undefined8 *puVar7;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_0456818b & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_AGODCLONCBM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_DGFADJKJNMM__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&StringLiteral_12043);
    DAT_0456818b = 1;
    method_00 = extraout_x1;
  }
  if ((__this->fields).super.DHKAODBNGNJ == false) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12043,(MethodInfo *)0x0);
    return;
  }
  if ((__this->fields).HLKBICFHFJM == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).HLKBICFHFJM = CJNHFNHJHPE;
  if (CJNHFNHJHPE == 1) {
    pNVar4 = (__this->fields)._ItemProperties;
    if (pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_03535c68;
    bVar1 = (pNVar4->fields).DBNELADJPIJ;
    Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling(pNVar4,false,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._ItemProperties;
    if (((pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) ||
        (__this_00 = (pNVar4->fields)._MoveButton, __this_00 == (UnityEngine_UI_Button_o *)0x0)) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03535c68;
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    if (bVar1 == false) {
      pNVar4 = (__this->fields)._ItemProperties;
      if (pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_03535c68;
      Nekki_SF2_GUI_Shop_SidePanel__SetOpen
                (pNVar4,true,(__this->fields)._ChangeModeDuration * 0.5,(MethodInfo *)0x0);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      t = (DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *)
          DG_Tweening_TweenSettingsExtensions__AppendInterval
                    (s,(__this->fields)._ChangeModeDuration * 0.1,(MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      puVar7 = &Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__;
    }
    else {
      pNVar2 = (__this->fields)._ForgePanel;
      if (pNVar2 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) goto LAB_03535c68;
      Nekki_SF2_GUI_Shop_Forge_ForgePanel__Open(pNVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).CCKIFMALFBA;
      if (pNVar3 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03535c68;
      Nekki_SF2_GUI_Menu_MainMenu__SetForgeViewMode(pNVar3,true,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._PanelsContainer;
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_03535c68;
      pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                    (pUVar6,(__this->fields)._ForgeModeX,(__this->fields)._ChangeModeDuration,false,
                     (MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      puVar7 = &
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
      ;
    }
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              ((Il2CppObject *)t,action,(MethodInfo_1F87FE4 *)*puVar7);
    method_00 = extraout_x1_01;
  }
  else if (CJNHFNHJHPE == 0) {
    pNVar2 = (__this->fields)._ForgePanel;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) goto LAB_03535c68;
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__Close(pNVar2,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).CCKIFMALFBA;
    if (pNVar3 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03535c68;
    Nekki_SF2_GUI_Menu_MainMenu__SetNormalViewMode(pNVar3,true,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__OMHIOGJACDI(__this,method_01);
    pNVar4 = (__this->fields)._ItemProperties;
    if (pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_03535c68;
    Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling(pNVar4,true,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._PanelsContainer;
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_03535c68;
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    DG_Tweening_ShortcutExtensions__DOLocalMoveX
              (pUVar6,(__this->fields).FBBJFCLGAJE,(__this->fields)._ChangeModeDuration,false,
               (MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
  if (__this_01 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_Mode
              (__this_01,(__this->fields).HLKBICFHFJM,(MethodInfo *)0x0);
    return;
  }
LAB_03535c68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

