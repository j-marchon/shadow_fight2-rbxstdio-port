// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$IONKKHOGGJM @ RVA 0x330BF28

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__IONKKHOGGJM
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  MJHMHBEJFBH_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567787 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    DAT_04567787 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  bVar1 = MGNPHCAAEIO__BJIAIGCNFDJ((MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    __this_01 = (MJHMHBEJFBH_o *)thunk_FUN_01bda818(MJHMHBEJFBH_TypeInfo);
    MJHMHBEJFBH___ctor(__this_01,4,(MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_00,7,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,false,
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

