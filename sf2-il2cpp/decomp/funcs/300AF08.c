// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowButton @ RVA 0x300AF08

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *a;
  
  if ((DAT_04565b72 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_4617);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_6589);
    FUN_01bab630(&StringLiteral_10823);
    DAT_04565b72 = 1;
  }
  pHVar2 = (__this->fields).BBODGCMLKFP;
  if ((pHVar2 == (HOOAAGABMBL_o *)0x0) || ((pHVar2->fields)._FHACLMPKGOM_k__BackingField != false))
  {
    return;
  }
  a = (pHVar2->fields)._GMPAEDFIIHF_k__BackingField;
  bVar1 = System_String__op_Equality(a,StringLiteral_4617,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__ShowConsumableButton(__this,method_00);
    return;
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_6589,(MethodInfo *)0x0);
  if (bVar1) {
    pHVar2 = (__this->fields).BBODGCMLKFP;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                (__this,(__this->fields).CJMBPDHIHLO,(pHVar2->fields)._DEKLMOAFMOI_k__BackingField,
                 (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),true,in_x4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_11073,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__ShowPaymentButton(__this,method_01);
    return;
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_10876,(MethodInfo *)0x0);
  method_03 = extraout_x1;
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(a,StringLiteral_10823,(MethodInfo *)0x0),
     method_03 = method_02, !bVar1)) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__ShowDefaultButton(__this,method_02);
    return;
  }
  Nekki_SF2_GUI_Shop_InfoPanelContent__ShowRaidButton(__this,method_03);
  return;
}

