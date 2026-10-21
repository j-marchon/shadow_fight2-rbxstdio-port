// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$BLFMANONEBE @ RVA 0x31998B8

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__BLFMANONEBE
          (int32_t OGPGLGPMEPD,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined8 *puVar1;
  
  if ((DAT_04566a96 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_14509);
    FUN_01bab630(&StringLiteral_20112);
    FUN_01bab630(&StringLiteral_20116);
    FUN_01bab630(&StringLiteral_20111);
    FUN_01bab630(&StringLiteral_6734);
    FUN_01bab630(&StringLiteral_20113);
    FUN_01bab630(&StringLiteral_20115);
    FUN_01bab630(&StringLiteral_19373);
    FUN_01bab630(&StringLiteral_20114);
    FUN_01bab630(&StringLiteral_20117);
    DAT_04566a96 = 1;
    method = extraout_x1;
  }
  if ((uint)OGPGLGPMEPD < 9) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_20112_03fc64c8)[OGPGLGPMEPD];
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6734,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_14509;
  }
  return (System_String_o *)*puVar1;
}

