// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$ELDJGIKPKKP @ RVA 0x3199720

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__ELDJGIKPKKP
          (int32_t OGPGLGPMEPD,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined8 *puVar1;
  
  if ((DAT_04566a95 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_14509);
    FUN_01bab630(&StringLiteral_18779);
    FUN_01bab630(&StringLiteral_18781);
    FUN_01bab630(&StringLiteral_18778);
    FUN_01bab630(&StringLiteral_18783);
    FUN_01bab630(&StringLiteral_18776);
    FUN_01bab630(&StringLiteral_18780);
    FUN_01bab630(&StringLiteral_6732);
    FUN_01bab630(&StringLiteral_18777);
    FUN_01bab630(&StringLiteral_18785);
    DAT_04566a95 = 1;
    method = extraout_x1;
  }
  if ((uint)OGPGLGPMEPD < 9) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_18777_03fc6480)[OGPGLGPMEPD];
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6732,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_14509;
  }
  return (System_String_o *)*puVar1;
}

