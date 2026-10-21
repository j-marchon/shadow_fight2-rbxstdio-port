// Nekki.SF2.GUI.Dialogs.Raids.LinkAccountDialog$$OOFAPAPJHJF @ RVA 0x31709D8

void Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog__OOFAPAPJHJF
               (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_o *__this,System_String_o *IMMNELPBGIF
               ,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_02;
  
  __this_02 = (__this->fields).super._editBox;
  if ((__this_02 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
     (pSVar1 = (__this_02->fields).super.m_Text, pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__ToUpper(pSVar1,(MethodInfo *)0x0);
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)__this_02,pSVar1,(MethodInfo *)0x0);
    __this_00 = (__this->fields).super._error;
    if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

