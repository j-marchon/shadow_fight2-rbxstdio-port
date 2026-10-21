// KMFOEBNKLEO$$CJPOJPGLDMM @ RVA 0x32DCA90

void KMFOEBNKLEO__CJPOJPGLDMM
               (NDPMLPGANCI_o *DHMOPKGOBHL,int32_t HONPNKFABKF,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this;
  FFHKCJAOPLI_o *__this_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_045675ce & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_045675ce = 1;
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
    __this = (Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8);
    if (__this != (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
      if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItem(__this,HONPNKFABKF,IKKAMAMLIKA,(MethodInfo *)0x0)
        ;
        return;
      }
      Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,HONPNKFABKF,true,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
    FFHKCJAOPLI___ctor(__this_00,HONPNKFABKF,IKKAMAMLIKA,(System_String_o *)0x0,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
    if (DHMOPKGOBHL != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (DHMOPKGOBHL,4,(Il2CppObject *)__this_00,(System_Action_object__o *)0x0,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

