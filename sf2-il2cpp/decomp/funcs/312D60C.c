// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$ResetSelection @ RVA 0x312D60C

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  MethodInfo *in_x4;
  
  iVar1 = (__this->fields).KGLMELJBHJL;
  iVar2 = (__this->fields).FLHKJAKLFPH;
  if (DAT_0456033b == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456033b = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetSelection
            (__this,HEHMPFLAEGE,iVar1 - iVar3 * iVar2,(int)(float)iVar3,0.0,in_x4);
  return;
}

