// Nekki.SF2.GUI.DebugModules.ConsoleUI$$GNKEIGHLPEE @ RVA 0x353CA24

void Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  __this_00 = (__this->fields)._scrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

