// TypeDefIndex 2850
// Namespace: 
// [CompilerGenerated]
// private sealed class ShopScene.EKBJDMFHOME
// Fields:
//   public ShopScene <>4__this; // 0x10
//   public PerksPanel perksPanel; // 0x18

// ===== internal void JJAPLLEBOHJ()  [RVA 0x343911C]
// Nekki.SF2.GUI.Shop.ShopScene.EKBJDMFHOME$$JJAPLLEBOHJ @ RVA 0x343911C

void Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME__JJAPLLEBOHJ
               (Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ShopScene_o *pNVar1;
  MethodInfo *in_x3;
  
  if ((DAT_045681b4 & 1) == 0) {
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_045681b4 = 1;
  }
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
    Nekki_SF2_GUI_Shop_ShopScene__HAIAOFHBGAP(pNVar1,(__this->fields).perksPanel,false,in_x3);
    pNVar1 = (__this->fields).__4__this;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
      DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                ((Il2CppObject *)(pNVar1->fields).OOIFAHNCKAO,-1,0,
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3435240]
// Nekki.SF2.GUI.Shop.ShopScene.EKBJDMFHOME$$.ctor @ RVA 0x3435240

void Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME___ctor
               (Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

