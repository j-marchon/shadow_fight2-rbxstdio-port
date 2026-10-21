// Nekki.SF2.GUI.Fight.PreFight$$get_TimePassedFrames @ RVA 0x2FFDBBC

int32_t Nekki_SF2_GUI_Fight_PreFight__get_TimePassedFrames
                  (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar4;
  
  if ((DAT_04565afe & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565afe = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
  pNVar4 = (__this->fields).FLKPJPEAJAJ;
  if (pNVar4 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_Fight_ViewerFight__get_RoundTimeTotalFrames(pNVar4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar4 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pNVar4->fields).GJOBKIBMLHC.fields,(MethodInfo *)0x0);
      return iVar2 - iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

