// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$FNMNFEGFOEK @ RVA 0x32B56E8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__FNMNFEGFOEK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_00;
  
  __this_00 = (__this->fields)._editBoxForClanName;
  if ((__this_00 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
     (pSVar1 = (__this_00->fields).super.m_Text, pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

