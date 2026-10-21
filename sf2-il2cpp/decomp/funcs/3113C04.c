// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$MMPLIGDLCJF @ RVA 0x3113C04

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_SimpleScroll_o *x;
  
  if ((DAT_045665a0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045665a0 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).PDHMLFAMNCO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

