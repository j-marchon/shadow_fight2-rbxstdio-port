// PAOMOCCOFDE$$IPMJMPDBEJH @ RVA 0x33A2334

void PAOMOCCOFDE__IPMJMPDBEJH(PAOMOCCOFDE_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if ((DAT_04567cc3 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04567cc3 = 1;
  }
  AKJJAPEHKCG__HJDDBKPCAFJ
            ((UnityEngine_UI_Selectable_o *)(__this->fields).GPELNIEGMJG,(MethodInfo *)0x0);
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if (((**(long **)(lVar1 + 0xb8) != 0) &&
      (lVar1 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x178), lVar1 != 0)) &&
     (__this_00 = *(UnityEngine_Component_o **)(lVar1 + 0x28),
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    AKJJAPEHKCG__HJDDBKPCAFJ(LAIGNDBNBJG,(MethodInfo *)0x0);
    PAOMOCCOFDE__KIPCFNBAHMJ(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

