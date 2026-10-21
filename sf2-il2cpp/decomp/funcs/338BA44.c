// Nekki.SF2.GUI.Menu.MenuScroll$$CCPABLFBFFA @ RVA 0x338BA44

void Nekki_SF2_GUI_Menu_MenuScroll__CCPABLFBFFA
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).OGBOMAHLDKN;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

