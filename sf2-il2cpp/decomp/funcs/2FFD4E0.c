// Nekki.SF2.GUI.Fight.PreFight$$CreateRound @ RVA 0x2FFD4E0

void Nekki_SF2_GUI_Fight_PreFight__CreateRound
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t CJNHFNHJHPE,bool HOOGEGENGCG,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar3;
  
  if ((DAT_04565af4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af4 = 1;
  }
  pNVar3 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).LJAILGNLPAB;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fd5b4;
    Nekki_SF2_GUI_Fight_ScreenFight__CreateRound(pNVar3,CJNHFNHJHPE,HOOGEGENGCG,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ViewerFight__Reset(pNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_030fd5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

