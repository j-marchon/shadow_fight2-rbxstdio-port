// Nekki.SF2.GUI.Shop.PerkProgressBar$$OLOBIPCHMCC @ RVA 0x3117D44

void Nekki_SF2_GUI_Shop_PerkProgressBar__OLOBIPCHMCC
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  float fVar1;
  float value;
  float fVar2;
  
  __this_00 = (__this->fields).super.Stripe;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    value = (__this->fields).super.super.LBDAPHMEAKC;
    fVar1 = (__this->fields).super.super.JGFKHMMNJBA;
    fVar2 = (__this->fields).super.super.FGFINIPCGAL;
    if (fVar1 <= value) {
      value = fVar1;
    }
    if (fVar1 < fVar2) {
      value = fVar2;
    }
    UnityEngine_UI_Image__set_fillAmount
              ((UnityEngine_UI_Image_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

