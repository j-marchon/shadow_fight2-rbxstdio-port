// Nekki.SF2.GUI.Fight.PreFight$$IsTimeOut @ RVA 0x2FFDE9C

bool Nekki_SF2_GUI_Fight_PreFight__IsTimeOut
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565b02 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b02 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pNVar3->fields).MOBINBAJICJ.fields,(MethodInfo *)0x0);
    bVar1 = iVar2 < 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

