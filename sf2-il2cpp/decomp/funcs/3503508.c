// ELMGFLNCPAB$$KJDBNFPFICE @ RVA 0x3503508

void ELMGFLNCPAB__KJDBNFPFICE(ELMGFLNCPAB_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_PerksPanel_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  undefined1 auVar3 [16];
  
  if ((DAT_04568875 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568875 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x178), lVar2 != 0)) {
    x = *(UnityEngine_Object_o **)(lVar2 + 0x78);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((((**(long **)(lVar2 + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x178), lVar2 != 0)) &&
        (lVar2 = *(long *)(lVar2 + 0x78), lVar2 != 0)) &&
       (__this_00 = *(Nekki_SF2_GUI_Shop_PerksPanel_o **)(lVar2 + 0xa8),
       __this_00 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0)) {
      Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHintByIndex
                (__this_00,(__this->fields).AJFBKLNHMDG,SUB41((__this->fields).FANDONIBLKC,0),false,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

