// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$FHGHCEKLLOK @ RVA 0x32B571C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__FHGHCEKLLOK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,
               System_String_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  
  pNVar2 = (__this->fields)._editBoxForClanName;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    bVar1 = PCOEHCPGBBG__KCDAEMMGHNM((pNVar2->fields).super.m_Text,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MPNLJKCHCKP(__this,~(uint)bVar1 & 1,method);
    pNVar2 = (__this->fields)._editBoxForClanName;
    if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      value = PCOEHCPGBBG__OCJBAFGNLIE((pNVar2->fields).super.m_Text,(MethodInfo *)0x0);
      UnityEngine_UI_InputField__set_text
                ((UnityEngine_UI_InputField_o *)pNVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

