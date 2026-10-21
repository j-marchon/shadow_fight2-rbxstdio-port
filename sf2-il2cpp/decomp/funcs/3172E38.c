// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$Update @ RVA 0x3172E38

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Update
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_0456693a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456693a = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IIFBHJCLOPC(__this,method_00);
    pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
      x = (pGVar2->fields)._AOOFDKJAALA_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        if (bVar1) {
          Nekki_SF2_GUI_Menu_MainMenu__Show(__this_00,(MethodInfo *)0x0);
          return;
        }
        Nekki_SF2_GUI_Menu_MainMenu__Hide(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

