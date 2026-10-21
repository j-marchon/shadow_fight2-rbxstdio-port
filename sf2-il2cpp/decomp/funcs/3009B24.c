// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowPaymentButton @ RVA 0x3009B24

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowPaymentButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *str2;
  IconLabelButton_o *BECCOGAMKJL;
  System_String_o *pSVar2;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *pHVar3;
  
  if ((DAT_04565b5a & 1) == 0) {
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_12834);
    DAT_04565b5a = 1;
  }
  pHVar3 = (__this->fields).BBODGCMLKFP;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((pHVar3->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_12834,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pHVar3 = (__this->fields).BBODGCMLKFP;
      if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
        BECCOGAMKJL = (__this->fields).CJMBPDHIHLO;
        pSVar2 = (pHVar3->fields)._DEKLMOAFMOI_k__BackingField;
        bVar1 = true;
LAB_03109c14:
        Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                  (__this,BECCOGAMKJL,pSVar2,
                   (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),bVar1,in_x4);
        return;
      }
    }
    else {
      pHVar3 = (__this->fields).BBODGCMLKFP;
      if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
        BECCOGAMKJL = (__this->fields).MDKMGENBAOJ;
        pSVar2 = HOOAAGABMBL__GFMPCIOBMBJ(pHVar3,(MethodInfo *)0x0);
        pHVar3 = (__this->fields).BBODGCMLKFP;
        if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
          str2 = HOOAAGABMBL__EHECKFKDKJD(pHVar3,(MethodInfo *)0x0);
          pSVar2 = System_String__Concat(pSVar2,StringLiteral_167,str2,(MethodInfo *)0x0);
          bVar1 = false;
          goto LAB_03109c14;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

