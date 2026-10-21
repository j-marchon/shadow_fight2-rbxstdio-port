// CHDGOFBHAFI$$KPGCOFLGEAI @ RVA 0x3245F48

void CHDGOFBHAFI__KPGCOFLGEAI(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  CHDGOFBHAFI_o *pCVar4;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  undefined1 auVar5 [16];
  
  if ((DAT_045670b8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_045670b8 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).CMDMECMFCIK != 2) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    auVar5._8_8_ = method;
    auVar5._0_8_ = lVar3;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      auVar5 = FUN_01b81620(lVar3,method);
    }
    lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_033460b0;
      uVar2 = Nekki_SF2_GUI_Shop_ShopScene__get_CurrentSliderType
                        ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                         (MethodInfo *)0x0);
      if ((uVar2 & 0xfffffffe) == 6) {
        return;
      }
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar4 == (CHDGOFBHAFI_o *)0x0) {
LAB_033460b0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IHODMKCBNKJ = (pCVar4->fields).AABMLCNHHPN;
    if (((IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) &&
        (bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0), !bVar1)) &&
       (bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IHODMKCBNKJ,(MethodInfo *)0x0), !bVar1)) {
      EDFDANKEBGF__KDKLIPFALGJ((MethodInfo *)0x0);
      return;
    }
  }
  return;
}

