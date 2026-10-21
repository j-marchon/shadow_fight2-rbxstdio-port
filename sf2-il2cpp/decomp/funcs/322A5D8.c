// LPGPNBGHDBD$$NLJJHFHHKMF @ RVA 0x322A5D8

void LPGPNBGHDBD__NLJJHFHHKMF
               (Nekki_SF2_GUI_LabelAlias_o *HPACPFLKHPK,BECIPDJBAOG_o *KJADEEFANAL,
               int32_t NJBICBHLOMO,UnityEngine_Color_o EFJKPCADGJH,int32_t MEGOOCKNJOH,
               int32_t MKOINMONMKL,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)MEGOOCKNJOH;
  if ((DAT_04566f95 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04566f95 = 1;
  }
  if (NJBICBHLOMO < 1) {
    if (HPACPFLKHPK == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0332a6d4;
  }
  else {
    if (HPACPFLKHPK == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_0332a6d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_UI_Text__set_fontSize
              ((UnityEngine_UI_Text_o *)HPACPFLKHPK,NJBICBHLOMO,(MethodInfo *)0x0);
  }
  (*(HPACPFLKHPK->klass->vtable)._23_set_color.methodPtr)
            (CONCAT44((int)((ulong)EFJKPCADGJH.fields._0_8_ >> 0x20),EFJKPCADGJH.fields.r),
             CONCAT44((int)((ulong)EFJKPCADGJH.fields._4_8_ >> 0x20),EFJKPCADGJH.fields.g),
             CONCAT44((int)((ulong)EFJKPCADGJH.fields._8_8_ >> 0x20),EFJKPCADGJH.fields.b),
             CONCAT44((int)((ulong)register0x00005060 >> 0x20),EFJKPCADGJH.fields.a),HPACPFLKHPK,
             (HPACPFLKHPK->klass->vtable)._23_set_color.method);
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = LPGPNBGHDBD__NLJJHFHHKMF(KJADEEFANAL,MEGOOCKNJOH,MKOINMONMKL,method_00);
                    /* WARNING: Could not recover jumptable at 0x0332a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(HPACPFLKHPK->klass->vtable)._75_set_text.methodPtr)
            (HPACPFLKHPK,pSVar1,(HPACPFLKHPK->klass->vtable)._75_set_text.method);
  return;
}

