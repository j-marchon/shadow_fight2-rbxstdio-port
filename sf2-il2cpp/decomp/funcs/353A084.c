// Nekki.SF2.GUI.LockScreen$$Lock @ RVA 0x353A084

bool Nekki_SF2_GUI_LockScreen__Lock(bool CMPKOOEKFKF,bool CCOCAIEPCOJ,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_LockScreen_o *pNVar2;
  
  if ((DAT_04568abe & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568abe = 1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566d6a == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04566d6a = '\x01';
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566d6a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
      DAT_04566d6a = '\x01';
    }
    if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_LockScreen_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_LockScreen__OAHAAAHHMOL(pNVar2,CMPKOOEKFKF,CCOCAIEPCOJ,in_x3);
  }
  return bVar1;
}

