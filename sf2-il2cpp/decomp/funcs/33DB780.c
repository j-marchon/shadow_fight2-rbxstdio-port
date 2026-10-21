// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$OnDestroy @ RVA 0x33DB780

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__OnDestroy
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IDMFMIPALLP;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

