// TypeDefIndex 2849
// Namespace: 
// [Serializable]
// private sealed class ShopScene.<>c
// Fields:
//   public static readonly ShopScene.<>c <>9; // 0x0
//   public static Func<string, bool> <>9__83_0; // 0x8
//   public static Action<HOOAAGABMBL> <>9__123_0; // 0x10

// ===== internal void JAPJJMNLKOH(HOOAAGABMBL x)  [RVA 0x3439024]
// Nekki.SF2.GUI.Shop.ShopScene.<>c$$JAPJJMNLKOH @ RVA 0x3439024

void Nekki_SF2_GUI_Shop_ShopScene_<>c__JAPJJMNLKOH
               (Nekki_SF2_GUI_Shop_ShopScene___c_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  if (x != (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 03539008 with catch @ 03539030 */
    HOOAAGABMBL__GEBIJFANLGH(x,false,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 03539038 to 0363903f has its CatchHandler @ 03539054 */
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3439040]
// Nekki.SF2.GUI.Shop.ShopScene.<>c$$.cctor @ RVA 0x3439040

void Nekki_SF2_GUI_Shop_ShopScene_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
                    /* try { // try from 03539040 to 0363904b has its CatchHandler @ 03538aa8 */
                    /* try { // try from 0353904c to 03639053 has its CatchHandler @ 03539054 */
                    /* catch() { ... } // from try @ 03538fd8 with catch @ 03539054
                       catch() { ... } // from try @ 03539038 with catch @ 03539054
                       catch() { ... } // from try @ 0353904c with catch @ 03539054 */
  if ((DAT_045681b2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo);
                    /* try { // try from 03539068 to 036391b3 has its CatchHandler @ 03539068
                       catch() { ... } // from try @ 03539068 with catch @ 03539068
                       catch() { ... } // from try @ 03539218 with catch @ 03539068
                       catch() { ... } // from try @ 03539260 with catch @ 03539068
                       catch() { ... } // from try @ 03539290 with catch @ 03539068
                       catch() { ... } // from try @ 035392c0 with catch @ 03539068 */
    DAT_045681b2 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Shop_ShopScene___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool FAOCMDGMCFC(string x)  [RVA 0x34390B0]
// Nekki.SF2.GUI.Shop.ShopScene.<>c$$FAOCMDGMCFC @ RVA 0x34390B0

bool Nekki_SF2_GUI_Shop_ShopScene_<>c__FAOCMDGMCFC
               (Nekki_SF2_GUI_Shop_ShopScene___c_o *__this,System_String_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if ((DAT_045681b3 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_045681b3 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  if (x != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(x,value,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34390A8]
// Nekki.SF2.GUI.Shop.ShopScene.<>c$$.ctor @ RVA 0x34390A8

void Nekki_SF2_GUI_Shop_ShopScene_<>c___ctor
               (Nekki_SF2_GUI_Shop_ShopScene___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

