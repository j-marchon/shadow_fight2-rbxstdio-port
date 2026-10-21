// Nekki.SF2.GUI.Dialogs.NotificationsGame$$HILHBNCHAAG @ RVA 0x30F7EB4

System_String_o *
Nekki_SF2_GUI_Dialogs_NotificationsGame__HILHBNCHAAG
          (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566478 & 1) == 0) {
    FUN_01bab630(&StringLiteral_21621);
    FUN_01bab630(&StringLiteral_5972);
    DAT_04566478 = 1;
  }
  puVar1 = &StringLiteral_5972;
  if (OGPGLGPMEPD != 0) {
    puVar1 = &StringLiteral_21621;
  }
  return (System_String_o *)*puVar1;
}

