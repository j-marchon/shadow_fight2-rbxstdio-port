// Nekki.SF2.GUI.Pvp.SelectModule$$PCJCDPOMJJN @ RVA 0x3177C28

void Nekki_SF2_GUI_Pvp_SelectModule__PCJCDPOMJJN
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t HEHMPFLAEGE,bool IFNFDFALLMG,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str3;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  long lVar3;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar4;
  Nekki_SF2_GUI_Pvp_SelectModule_o *extraout_x0;
  Nekki_SF2_GUI_Pvp_SelectModule_o *extraout_x0_00;
  Nekki_SF2_GUI_Pvp_SelectModule_o *__this_01;
  UnityEngine_UI_Image_o *pUVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  byte bVar7;
  UnityEngine_GameObject_c *pUVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  System_Enum_o local_50;
  int32_t local_40;
  bool local_34 [4];
  
  local_34[0] = IFNFDFALLMG;
  if ((DAT_0456695f & 1) == 0) {
    FUN_01bab630(&AMJPDLOCCNP_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    FUN_01bab630(&StringLiteral_11790);
    FUN_01bab630(&StringLiteral_171);
    DAT_0456695f = 1;
  }
  if (HEHMPFLAEGE == 0) {
    if (((__this->fields).FPFGDOBNLCP & IFNFDFALLMG) != 0) {
      return;
    }
LAB_03277cc8:
    bVar7 = 0;
  }
  else {
    if (HEHMPFLAEGE != 1) goto LAB_03277cc8;
    bVar7 = (__this->fields).FODJGPABKLP;
  }
  if ((IFNFDFALLMG & bVar7) == 0) {
    local_50.klass = (System_Enum_c *)AMJPDLOCCNP_TypeInfo;
    local_50.monitor = (void *)0xffffffffffffffff;
    local_40 = HEHMPFLAEGE;
    pSVar2 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo);
    }
    str3 = System_Boolean__ToString(SUB81(local_34,0),(MethodInfo *)0x0);
    pSVar2 = System_String__Concat
                       (StringLiteral_11790,pSVar2,StringLiteral_171,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._selectTable;
    if (__this_00 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_03277f00;
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__SelectCurrentItem
              (__this_00,HEHMPFLAEGE,local_34[0],(MethodInfo *)0x0);
    uVar6 = extraout_x1;
    if (local_34[0] != false) {
      EDFDANKEBGF__EEPCFJIEALL((MethodInfo *)0x0);
      uVar6 = extraout_x1_00;
    }
    if (HEHMPFLAEGE == 0) {
      (__this->fields).FPFGDOBNLCP = local_34[0];
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(*(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20) + 0x135) &
          1) == 0) {
        auVar9 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(auVar9._0_8_ + 0xc0) + 0x10);
      auVar10._8_8_ = auVar9._8_8_;
      auVar10._0_8_ = lVar3;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        auVar10 = FUN_01b81620();
      }
      pUVar8 = (auVar10._0_8_[1].fields.selectCellPrefab)->klass;
      if (pUVar8 == (UnityEngine_GameObject_c *)0x0) goto LAB_03277f00;
      pNVar4 = (Nekki_SF2_GUI_Pvp_PvPHintController_o *)(pUVar8->_2).typeHierarchy;
      if ((__this->fields).FPFGDOBNLCP == false) {
        bVar1 = true;
      }
      else {
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP(auVar10._0_8_,auVar10._8_8_);
        bVar1 = !bVar1;
      }
      if (pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0) goto LAB_03277f00;
      Nekki_SF2_GUI_Pvp_PvPHintController__SetLeftHintListAnimationAvailable
                (pNVar4,bVar1,(MethodInfo *)0x0);
      __this_01 = extraout_x0_00;
      method_00 = extraout_x1_02;
    }
    else {
      (__this->fields).FODJGPABKLP = local_34[0];
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((**(long **)(lVar3 + 0xb8) == 0) ||
         (pNVar4 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar3 + 0xb8) + 200),
         pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) goto LAB_03277f00;
      Nekki_SF2_GUI_Pvp_PvPHintController__SetRightHintListAnimationAvailable
                (pNVar4,(__this->fields).FODJGPABKLP == false,(MethodInfo *)0x0);
      __this_01 = extraout_x0;
      method_00 = extraout_x1_01;
    }
    if (((__this->fields).FPFGDOBNLCP != false) &&
       (((__this->fields).FODJGPABKLP != false ||
        (bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP(__this_01,method_00), !bVar1)))) {
                    /* try { // try from 03277e9c to 03377fb3 has its CatchHandler @ 03277e9c
                       catch() { ... } // from try @ 03277e9c with catch @ 03277e9c
                       catch() { ... } // from try @ 032780f8 with catch @ 03277e9c
                       catch() { ... } // from try @ 0327815c with catch @ 03277e9c
                       catch() { ... } // from try @ 032781a4 with catch @ 03277e9c
                       catch() { ... } // from try @ 032781e4 with catch @ 03277e9c
                       catch() { ... } // from try @ 03278230 with catch @ 03277e9c
                       catch() { ... } // from try @ 03278254 with catch @ 03277e9c
                       catch() { ... } // from try @ 03278294 with catch @ 03277e9c */
      (*(__this->klass->vtable)._10_LLGCACMKNAN.methodPtr)
                (__this,(__this->klass->vtable)._10_LLGCACMKNAN.method);
    }
    if (local_34[0] == false) {
      pUVar5 = (__this->fields)._shadowImage;
      (__this->fields).HIHIILLMINJ = -1.0;
      if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) {
LAB_03277f00:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                (0,0,0,0,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
      DG_Tweening_ShortcutExtensions__DOPause
                ((UnityEngine_Component_o *)(__this->fields)._shadowImage,(MethodInfo *)0x0);
    }
  }
  return;
}

