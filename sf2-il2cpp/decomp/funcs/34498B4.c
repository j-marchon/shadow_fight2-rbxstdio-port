// NDPMLPGANCI$$ELJIPDIDPJD @ RVA 0x34498B4

void NDPMLPGANCI__ELJIPDIDPJD(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  int32_t HONPNKFABKF;
  long lVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  FFHKCJAOPLI_o *__this_01;
  int DFOADJEEDKK;
  MethodInfo *in_x5;
  GLINEGMOOBM_o *pGVar2;
  
  if ((DAT_04568259 & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568259 = 1;
  }
  pGVar2 = (__this->fields).KLPOKEJLDHG;
  if (pGVar2 != (GLINEGMOOBM_o *)0x0) {
    DFOADJEEDKK = (pGVar2->fields).DBMPKPJGIPI;
    if (DFOADJEEDKK != 4) {
      __this_01 = (FFHKCJAOPLI_o *)0x0;
LAB_035499ec:
      NDPMLPGANCI__EKPAFDJIAGI
                (__this,DFOADJEEDKK,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,true,
                 in_x5);
      return;
    }
    lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
      HONPNKFABKF = Nekki_SF2_GUI_Shop_ShopScene__get_CurrentSliderType
                              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8),
                               (MethodInfo *)0x0);
      lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620(lVar1);
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      if ((**(long **)(lVar1 + 0xb8) != 0) &&
         (__this_00 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar1 + 0xb8) + 0x178),
         __this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
        IKKAMAMLIKA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo
                                (__this_00,(MethodInfo *)0x0);
        __this_01 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
        in_x5 = (MethodInfo *)0x0;
        FFHKCJAOPLI___ctor(__this_01,HONPNKFABKF,IKKAMAMLIKA,(System_String_o *)0x0,
                           (System_String_o *)0x0,(MethodInfo *)0x0);
        DFOADJEEDKK = 4;
        goto LAB_035499ec;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

