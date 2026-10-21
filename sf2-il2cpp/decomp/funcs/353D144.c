// Nekki.SF2.GUI.DebugModules.ConsoleUI$$SelectNextCommand @ RVA 0x353D144

void Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectNextCommand
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_c *pNVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_UI_InputField_o *pUVar4;
  
  if ((DAT_04568acb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568acb = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
  __this_00 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      return;
    }
    iVar1 = (__this->fields).IABNCNEEGOE + 1;
    (__this->fields).IABNCNEEGOE = iVar1;
    if ((pNVar2->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pNVar2,method);
      __this_00 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
      pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
      method = extraout_x1_01;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d270;
    }
    if ((__this_00->fields)._size <= iVar1) {
      (__this->fields).IABNCNEEGOE = 0;
    }
    pUVar4 = (__this->fields)._Input;
    if ((pNVar2->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pNVar2,method);
      __this_00 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d270;
    }
    pSVar3 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).IABNCNEEGOE,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    if (pUVar4 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_text(pUVar4,pSVar3,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Input;
      if ((pUVar4 != (UnityEngine_UI_InputField_o *)0x0) &&
         (pSVar3 = (pUVar4->fields).m_Text, pSVar3 != (System_String_o *)0x0)) {
        UnityEngine_UI_InputField__set_caretPosition
                  (pUVar4,(pSVar3->fields)._stringLength,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0363d270:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

