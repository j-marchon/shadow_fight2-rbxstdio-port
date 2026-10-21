// Nekki.SF2.GUI.Fight.PreFight$$CreateWinner @ RVA 0x2FFDDB8

void Nekki_SF2_GUI_Fight_PreFight__CreateWinner
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool MEDOMNAEFNH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar3;
  
  if ((DAT_04565b01 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b01 = 1;
  }
  pNVar3 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).LJAILGNLPAB;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fde98;
    Nekki_SF2_GUI_Fight_ScreenFight__CreateWinner(pNVar3,MEDOMNAEFNH,(MethodInfo *)0x0);
  }
  if (MEDOMNAEFNH) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).FLKPJPEAJAJ;
      if ((pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) &&
         (__this_00 = Nekki_SF2_GUI_Fight_ViewerFight__GetScreenModel(pNVar2,0,(MethodInfo *)0x0),
         __this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0)) {
        Nekki_SF2_GUI_Fight_ScreenModel__ShowPerfect(__this_00,(MethodInfo *)0x0);
        return;
      }
LAB_030fde98:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

