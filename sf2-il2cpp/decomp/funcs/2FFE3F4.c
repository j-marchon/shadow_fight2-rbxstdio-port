// Nekki.SF2.GUI.Fight.PreFight$$SetPause @ RVA 0x2FFE3F4

void Nekki_SF2_GUI_Fight_PreFight__SetPause
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565b07 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b07 = 1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).FNHHIEKCLPI = CJNHFNHJHPE;
  }
  return;
}

