// FCJBEKHDLAF$$KKKKBBHCMMA @ RVA 0x33E67F0

void FCJBEKHDLAF__KKKKBBHCMMA(FCJBEKHDLAF_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04567ecc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ecc = 1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
    pNVar3 = (pNVar2->fields).FLKPJPEAJAJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if ((pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) &&
       (pNVar3 = (pNVar2->fields).FLKPJPEAJAJ, pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0))
    {
      Nekki_SF2_GUI_Fight_ViewerFight__SetLockLifeUpdate(pNVar3,true,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).HIBPKNAIPLH;
      if ((pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) &&
         (pNVar3 = (pNVar2->fields).FLKPJPEAJAJ, pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0)
         ) {
        Nekki_SF2_GUI_Fight_ViewerFight__SetLockLifeUpdate
                  (pNVar3,false,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

