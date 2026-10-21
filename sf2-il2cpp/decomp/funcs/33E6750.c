// FCJBEKHDLAF$$PCKDILILPBJ @ RVA 0x33E6750

void FCJBEKHDLAF__PCKDILILPBJ
               (FCJBEKHDLAF_o *__this,int32_t HEHMPFLAEGE,bool CCOCAIEPCOJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
  if ((DAT_04567ecb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ecb = 1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_PreFight__SetPlayerPvpMode
                (pNVar2,HEHMPFLAEGE,CCOCAIEPCOJ,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

