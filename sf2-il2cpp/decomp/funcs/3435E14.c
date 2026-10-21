// Nekki.SF2.GUI.Shop.ShopScene$$ShowUI @ RVA 0x3435E14

void Nekki_SF2_GUI_Shop_ShopScene__ShowUI(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_01;
  
  if ((DAT_04568194 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04568194 = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields)._Background;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
  }
  if (__this_01 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
    Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
              (__this_01,
               (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->JMKOGEHDLIC).fields,
               (MethodInfo *)0x0);
    DG_Tweening_DOTweenModuleUI__DOFade((__this->fields)._ShopUIGroup,1.0,0.7,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._ShopUIGroup;
    if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

