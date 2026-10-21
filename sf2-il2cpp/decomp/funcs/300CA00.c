// Nekki.SF2.GUI.Shop.InfoPanelContent.<>c$$OFLICMNNNPA @ RVA 0x300CA00

bool Nekki_SF2_GUI_Shop_InfoPanelContent_<>c__OFLICMNNNPA
               (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *__this,IconLabelButton_o *button,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04565b89 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b89 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)button,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((button != (IconLabelButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)button,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

