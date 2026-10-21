// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$OOFAPAPJHJF @ RVA 0x353FFC4

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__OOFAPAPJHJF
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,System_String_o *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *value;
  System_String_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar4;
  NCJBDBGIPNF_o *pNVar5;
  
  pNVar2 = __this;
  if ((DAT_04568aee & 1) == 0) {
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)FUN_01bab630(&StringLiteral_20424);
    DAT_04568aee = 1;
  }
  pNVar4 = (__this->fields)._editBox;
  if (pNVar4 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    value = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)
            PCOEHCPGBBG__OCJBAFGNLIE((pNVar4->fields).super.m_Text,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._editBox;
    pNVar2 = value;
    if ((pNVar4 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
       (__this_00 = (pNVar4->fields).super.m_Text,
       pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0,
       __this_00 != (System_String_o *)0x0)) {
      bVar1 = System_String__Equals(__this_00,(System_String_o *)value,(MethodInfo *)0x0);
      pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)(ulong)bVar1;
      pNVar4 = (__this->fields)._editBox;
      if (pNVar4 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        UnityEngine_UI_InputField__set_text
                  ((UnityEngine_UI_InputField_o *)pNVar4,(System_String_o *)value,(MethodInfo *)0x0)
        ;
        pNVar3 = (__this->fields)._error;
        pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,StringLiteral_20424,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          pNVar3 = (__this->fields)._error;
          pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)
                     (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                               (0,0,0,0x3f800000,pNVar3,(pNVar3->klass->vtable)._23_set_color.method
                               );
            pNVar5 = (__this->fields).GIAMLPMHEDN;
            if (pNVar5 != (NCJBDBGIPNF_o *)0x0) {
              bVar1 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                                (__this,(pNVar5->fields).GCDPLFELIBF,method_00);
              pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)(ulong)bVar1;
              pNVar5 = (__this->fields).GIAMLPMHEDN;
              if (pNVar5 != (NCJBDBGIPNF_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                          (__this,(pNVar5->fields).MLPDIICEKIO,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pNVar2);
}

