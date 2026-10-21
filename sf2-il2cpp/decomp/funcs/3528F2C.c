// Nekki.SF2.GUI.DebugModules.ScreenDebug$$ShowDebugLine @ RVA 0x3528F2C

void Nekki_SF2_GUI_DebugModules_ScreenDebug__ShowDebugLine
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,System_String_o *HKJPKDKDKAG,
               System_String_o *EHNFGMGKCHO,UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *extraout_x1;
  
  if ((DAT_04568a0b & 1) == 0) {
    FUN_01bab630(EFJKPCADGJH.fields.r,EFJKPCADGJH.fields.g,EFJKPCADGJH.fields.b,EFJKPCADGJH.fields.a
                 ,&UnityEngine_Object_TypeInfo);
    DAT_04568a0b = 1;
    HKJPKDKDKAG = extraout_x1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,HKJPKDKDKAG);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

