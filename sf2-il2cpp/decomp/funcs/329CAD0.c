// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$OnDisable @ RVA 0x329CAD0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__OnDisable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
  if ((DAT_045673a3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673a3 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    HODGKDNOHLP = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll
                (pNVar2,HODGKDNOHLP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

