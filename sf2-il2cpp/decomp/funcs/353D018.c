// Nekki.SF2.GUI.DebugModules.ConsoleUI$$SelectPrevCommand @ RVA 0x353D018

void Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectPrevCommand
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_c *pNVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_string__o *pSVar4;
  UnityEngine_UI_InputField_o *pUVar5;
  
  if ((DAT_04568ad4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568ad4 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
  pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar4->fields)._size < 1) {
      return;
    }
    iVar1 = (__this->fields).IABNCNEEGOE + -1;
    (__this->fields).IABNCNEEGOE = iVar1;
    if (iVar1 < 0) {
      if ((pNVar2->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(pNVar2,method);
        pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
        pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
        method = extraout_x1_01;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d140;
      }
      (__this->fields).IABNCNEEGOE = (pSVar4->fields)._size + -1;
    }
    pUVar5 = (__this->fields)._Input;
    if ((pNVar2->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pNVar2,method);
      pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
    }
    pSVar4 = pNVar2->static_fields->LIPCEDJDHIL;
    if ((pSVar4 != (System_Collections_Generic_List_string__o *)0x0) &&
       (pSVar3 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,
                            (__this->fields).IABNCNEEGOE,
                            Method_System_Collections_Generic_List<string>_get_Item__),
       pUVar5 != (UnityEngine_UI_InputField_o *)0x0)) {
      UnityEngine_UI_InputField__set_text(pUVar5,pSVar3,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._Input;
      if ((pUVar5 != (UnityEngine_UI_InputField_o *)0x0) &&
         (pSVar3 = (pUVar5->fields).m_Text, pSVar3 != (System_String_o *)0x0)) {
        UnityEngine_UI_InputField__set_caretPosition
                  (pUVar5,(pSVar3->fields)._stringLength,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0363d140:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

