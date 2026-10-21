// Nekki.SF2.GUI.Menu.MenuScroll$$AEEDBFCIFIA @ RVA 0x338B904

void Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,float LNEPMKENPBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DG_Tweening_Tween_o **ppDVar2;
  
  if ((DAT_04567bdd & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_GetCurrentLength__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuScroll_KBAFINNJPGC__);
    DAT_04567bdd = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__CCPABLFBFFA(__this,method);
  if (0.0 < PNEIGGOFIOA) {
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__To(getter,setter,LNEPMKENPBG,PNEIGGOFIOA,(MethodInfo *)0x0);
    ppDVar2 = &(__this->fields).OGBOMAHLDKN;
    *ppDVar2 = (DG_Tweening_Tween_o *)pDVar1;
    thunk_FUN_01c20e04(ppDVar2,pDVar1);
    return;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__KBAFINNJPGC(__this,LNEPMKENPBG,method_00);
  return;
}

