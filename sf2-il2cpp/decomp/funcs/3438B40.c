// Nekki.SF2.GUI.Shop.ShopScene$$PLCCEAFLBOM @ RVA 0x3438B40

void Nekki_SF2_GUI_Shop_ShopScene__PLCCEAFLBOM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *method_00;
  
  if ((DAT_045681ad & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_PLCCEAFLBOM__);
    DAT_045681ad = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    KKLJIDJBFEI__PILMCAFCLMN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__DHPIHCCDOGH(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO(__this,true,method_00);
      __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__KJGGEPNHOBK(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

