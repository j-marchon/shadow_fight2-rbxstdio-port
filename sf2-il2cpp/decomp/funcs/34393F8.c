// Nekki.SF2.GUI.Shop.ShopScene.NKMIILIGNOA$$MoveNext @ RVA 0x34393F8

bool Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA__MoveNext
               (Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_045681b7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045681b7 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI(__this_01,(HOOAAGABMBL_o *)0x0,6,in_x3);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    /* try { // try from 03539450 to 03639457 has its CatchHandler @ 035396b8 */
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = __this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
                    /* try { // try from 03539470 to 0363947b has its CatchHandler @ 035396b4 */
  }
  return false;
}

