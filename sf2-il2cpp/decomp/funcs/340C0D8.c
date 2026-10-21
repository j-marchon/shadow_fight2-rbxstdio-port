// MGNPHCAAEIO$$HGEBEEICLLN @ RVA 0x340C0D8

void MGNPHCAAEIO__HGEBEEICLLN(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *__this;
  ACHLOMELAJE_o *__this_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  
  if ((DAT_0456803a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456803a = 1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar3 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    Nekki_SF2_GUI_Menu_MainMenu__UpdateDojoDiscipleButton(pNVar3,(MethodInfo *)0x0);
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this,(MethodInfo *)0x0);
      if (iVar2 == 3) {
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
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0350c274;
        bVar1 = ACHLOMELAJE__CIJFNGLHOIF(__this_00,(MethodInfo *)0x0);
      }
      else {
        bVar1 = false;
      }
      if (pNVar3 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__ShowDojoDiscipleButton(pNVar3,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0350c274:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

