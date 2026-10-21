// Nekki.SF2.GUI.Shop.ShopScene.AGBLGHMBIPJ$$MoveNext @ RVA 0x34392F0

bool Nekki_SF2_GUI_Shop_ShopScene_AGBLGHMBIPJ__MoveNext
               (Nekki_SF2_GUI_Shop_ShopScene_AGBLGHMBIPJ_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_045681b6 & 1) == 0) {
    auVar3 = FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045681b6 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
    }
    Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO(__this_01,true,in_x2);
    (__this_01->fields).IMJDKMADNGL = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(&(__this_01->fields).IMJDKMADNGL,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = __this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

