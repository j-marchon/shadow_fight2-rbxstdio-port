// Nekki.SF2.GUI.Shop.ShopScene.FJEEGDDJFKE$$MoveNext @ RVA 0x34391EC

bool Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE__MoveNext
               (Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  
  if ((DAT_045681b5 & 1) == 0) {
                    /* try { // try from 03539208 to 03639217 has its CatchHandler @ 03539270 */
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045681b5 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03539218 to 03639257 has its CatchHandler @ 03539068 */
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03539258 with catch @ 03539268
                        */
    __this_01 = (__this->fields).__4__this;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035391d0 with catch @ 0353926c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03539208 with catch @ 03539270
                        */
    (__this->fields).__1__state = -1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035391b4 with catch @ 03539274
                        */
    if (__this_01 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefresh(__this_01,method);
    (__this_01->fields).GBPDKLANGLP = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 0353928c to 0363928f has its CatchHandler @ 035392b0 */
    thunk_FUN_01c20e04(&(__this_01->fields).GBPDKLANGLP,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = __this_00;
                    /* try { // try from 03539258 to 0363925b has its CatchHandler @ 03539268 */
    thunk_FUN_01c20e04(ppIVar2,__this_00);
                    /* try { // try from 0353925c to 0363925f has its CatchHandler @ 03539264 */
                    /* try { // try from 03539260 to 0363928b has its CatchHandler @ 03539068 */
    (__this->fields).__1__state = 1;
    return true;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353925c with catch @ 03539264
                        */
  }
                    /* try { // try from 03539290 to 036392b7 has its CatchHandler @ 03539068 */
  return false;
}

