// Nekki.SF2.GUI.Common.MenuControls$$InvokeHintTouchUp @ RVA 0x300FAD8

void Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchUp
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,
               MethodInfo *method)

{
  int32_t AAJGEHHPMGH;
  MethodInfo *in_x4;
  
  if ((DAT_04565b91 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    DAT_04565b91 = 1;
  }
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AAJGEHHPMGH = ECNCJPCKOLN__IDDDPCFIALP(OHLKNCPBCBL,(MethodInfo *)0x0);
  if (AAJGEHHPMGH != -1) {
    Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO(__this,0,BMPJIDHGCBN,AAJGEHHPMGH,in_x4);
    return;
  }
  return;
}

