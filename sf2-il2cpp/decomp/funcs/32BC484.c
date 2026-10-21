// MainMenuRaidRatingPanel$$SetBtnTop100IsFlashing @ RVA 0x32BC484

void MainMenuRaidRatingPanel__SetBtnTop100IsFlashing
               (MainMenuRaidRatingPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_0456749e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456749e = 1;
  }
  pNVar2 = (__this->fields)._btnTop100;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  x = (__this->fields).CEFPNGJALDO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (CJNHFNHJHPE)) {
    MainMenuRaidRatingPanel__MHNENMANPGF(__this,method_00);
  }
  pNVar2 = (__this->fields)._btnTop100;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    SFButton__set_IsFlashing((SFButton_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

