// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$OnDestroy @ RVA 0x3300C88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
                    /* try { // try from 03400c90 to 03500cf7 has its CatchHandler @ 03400dac */
  if ((DAT_0456771c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456771c = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
                    /* try { // try from 03400cf8 to 03500d0f has its CatchHandler @ 03400728 */
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03400d10 to 03500d27 has its CatchHandler @ 03400d9c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
                    /* try { // try from 03400d28 to 03500d77 has its CatchHandler @ 03400728 */
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    HODGKDNOHLP = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03400d78 to 03500d87 has its CatchHandler @ 03400d9c */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll(pNVar2,HODGKDNOHLP,(MethodInfo *)0x0)
    ;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

