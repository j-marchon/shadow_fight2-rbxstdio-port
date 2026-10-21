// TypeDefIndex 3310
// Namespace: 
// [CompilerGenerated]
// private sealed class RecipePropertiesUI.CKEPNGDDILH
// Fields:
//   public Action<GameObject> p_onPerkClickAction; // 0x10
//   public RecipePropertyUI propertyUI; // 0x18

// ===== public void .ctor()  [RVA 0x3523A6C]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI.CKEPNGDDILH$$.ctor @ RVA 0x3523A6C

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_CKEPNGDDILH___ctor
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_CKEPNGDDILH_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void FOJLCKLPFGB()  [RVA 0x3523B04]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI.CKEPNGDDILH$$FOJLCKLPFGB @ RVA 0x3523B04

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_CKEPNGDDILH__FOJLCKLPFGB
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_CKEPNGDDILH_o *__this,MethodInfo *method
               )

{
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *pNVar2;
  UnityEngine_UI_Button_o *__this_00;
  System_Action_GameObject__o *pSVar3;
  
  pNVar2 = (__this->fields).propertyUI;
  if ((pNVar2 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *)0x0) &&
     (__this_00 = (pNVar2->fields)._PropertyButton, __this_00 != (UnityEngine_UI_Button_o *)0x0)) {
    pSVar3 = (__this->fields).p_onPerkClickAction;
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pSVar3 != (System_Action_GameObject__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03623b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,pUVar1,(pSVar3->fields).super.super.method
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

