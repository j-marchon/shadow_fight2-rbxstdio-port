// Nekki.SF2.GUI.Common.MenuControls$$InvokeHintTouchDown @ RVA 0x300FFB0

void Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchDown
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,
               MethodInfo *method)

{
  int32_t AAJGEHHPMGH;
  MethodInfo *in_x5;
  
  if ((DAT_04565b9a & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    DAT_04565b9a = 1;
  }
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AAJGEHHPMGH = ECNCJPCKOLN__IDDDPCFIALP(OHLKNCPBCBL,(MethodInfo *)0x0);
  if (AAJGEHHPMGH != -1) {
    Nekki_SF2_GUI_Common_MenuControls__IBCPKNBPEBE(__this,0,BMPJIDHGCBN,AAJGEHHPMGH,false,in_x5);
    return;
  }
  return;
}

