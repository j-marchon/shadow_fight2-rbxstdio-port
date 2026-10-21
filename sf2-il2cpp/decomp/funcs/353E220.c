// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnChange @ RVA 0x353E220

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnChange
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 uVar2;
  UnityEngine_UI_InputField_o *__this_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363e208 with catch @ 0363e224
                       catch(type#2 @ 00000000) { ... } // from try @ 0363e21c with catch @ 0363e224
                        */
  if ((DAT_04568ada & 1) == 0) {
    FUN_01bab630(&StringLiteral_16242);
    auVar3 = FUN_01bab630(&StringLiteral_1);
    DAT_04568ada = 1;
  }
  uVar2 = auVar3._0_8_;
  __this_00 = (__this->fields)._Input;
  if ((__this_00 != (UnityEngine_UI_InputField_o *)0x0) &&
     (pSVar1 = (__this_00->fields).m_Text, uVar2 = 0, pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Replace(pSVar1,StringLiteral_16242,StringLiteral_1,(MethodInfo *)0x0);
    UnityEngine_UI_InputField__set_text(__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar3._8_8_);
}

