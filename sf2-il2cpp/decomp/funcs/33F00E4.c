// FCJBEKHDLAF$$CINCEOMNICG @ RVA 0x33F00E4

void FCJBEKHDLAF__CINCEOMNICG(FCJBEKHDLAF_o *__this,IGPDCHBJAPD_o *GGKBMKIPCJH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
  if ((DAT_04567f01 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f01 = 1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  (__this->fields).MDJMIPGAJLL = true;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_PreFight__OpenEndRaidFinalFightScreen(pNVar2,GGKBMKIPCJH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

