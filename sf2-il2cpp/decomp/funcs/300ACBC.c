// Nekki.SF2.GUI.Shop.InfoPanelContent$$CNLCOHAHEPN @ RVA 0x300ACBC

/* WARNING: Type propagation algorithm not settling */

IconLabelButton_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o *IMFNGNGIIAM,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04565b61 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b61 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)IMFNGNGIIAM,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if ((IMFNGNGIIAM == (IconLabelButton_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)IMFNGNGIIAM,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((bVar1) && ((IMFNGNGIIAM->fields).super.super.super.super.super.m_Interactable != false)) {
      return IMFNGNGIIAM;
    }
  }
  return (IconLabelButton_o *)0x0;
}

