// Nekki.SF2.GUI.Shop.InfoPanelContent$$AOHAKEEHGKG @ RVA 0x300658C

void Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o *BECCOGAMKJL,
               System_String_o *EHNFGMGKCHO,UnityEngine_Color_o EFJKPCADGJH,bool JCLPIKHEKBB,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04565b6b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b6b = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)BECCOGAMKJL,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((BECCOGAMKJL != (IconLabelButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)BECCOGAMKJL,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    LabelButton__set_Color((LabelButton_o *)BECCOGAMKJL,EFJKPCADGJH,(MethodInfo *)0x0);
    if (JCLPIKHEKBB) {
      LabelButton__set_Alias((LabelButton_o *)BECCOGAMKJL,EHNFGMGKCHO,(MethodInfo *)0x0);
      method_00 = extraout_x1;
    }
    else {
      LabelButton__set_Text((LabelButton_o *)BECCOGAMKJL,EHNFGMGKCHO,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Shop_InfoPanelContent__ECPADJDPHLL(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

