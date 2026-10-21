// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnShowLogClick @ RVA 0x353D6A8

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnShowLogClick
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568acd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&StringLiteral_12788);
    DAT_04568acd = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._buttonsContent;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._logContent;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->JODCCEKGOGE = false;
      pUVar3 = (__this->fields)._tabButtonText;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363d760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,StringLiteral_12788,(pUVar3->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

