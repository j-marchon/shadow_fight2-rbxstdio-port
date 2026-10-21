// AMLGCIBIOLF$$IGHPJAOOKAF @ RVA 0x331BD7C

void AMLGCIBIOLF__IGHPJAOOKAF(AMLGCIBIOLF_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456781a & 1) == 0) {
    FUN_01bab630(&Method_AMLGCIBIOLF_IGHPJAOOKAF__,KDLGNPCKLIJ);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_0456781a = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_0341bf28;
    Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
               (__this->fields).LKGMCFDHLPK,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
         (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) ||
       (__this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                               (MethodInfo *)0x0),
       __this_00 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) goto LAB_0341bf28;
    Nekki_SF2_GUI_Shop_InfoPanelContent__SetFlashingButtons
              (__this_00,(__this->fields).PLHGHGMGFKK,(MethodInfo *)0x0);
  }
  __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_01 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0341bf28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

