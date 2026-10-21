// Nekki.SF2.GUI.Fight.PreFight$$GetStatistic @ RVA 0x2FFDA9C

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_PreFight__GetStatistic
          (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  GOJLGHMMDBO_o *pGVar2;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565afc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565afc = 1;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      pGVar2 = Nekki_SF2_GUI_Fight_ViewerFight__GetStatistic(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      return pGVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (GOJLGHMMDBO_o *)0x0;
}

