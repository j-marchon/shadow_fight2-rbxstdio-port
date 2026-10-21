// Nekki.SF2.GUI.Shop.ShopScene$$TryClearAtlasCacheItemImages @ RVA 0x3436F70

void Nekki_SF2_GUI_Shop_ShopScene__TryClearAtlasCacheItemImages
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Func_string__bool__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  System_Func_string__bool__o *IMNBAFCEDMA;
  
  if ((DAT_04568198 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_<>c_FAOCMDGMCFC__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo);
    DAT_04568198 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03536fd4 to 03636ff7 has its CatchHandler @ 0353714c */
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE != false) {
                    /* try { // try from 03536ff8 to 036370ef has its CatchHandler @ 035367a8 */
    if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    IMNBAFCEDMA = Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__83_0;
    if (IMNBAFCEDMA == (System_Func_string__bool__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IMNBAFCEDMA = (System_Func_string__bool__o *)
                    thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__83_0;
      *ppSVar1 = IMNBAFCEDMA;
      thunk_FUN_01c20e04(ppSVar1,IMNBAFCEDMA);
      method = extraout_x1_02;
    }
    if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_03;
    }
    AMHFFFODDOC__LLMNJNIKDGK(IMNBAFCEDMA,method);
    UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
    return;
  }
  return;
}

