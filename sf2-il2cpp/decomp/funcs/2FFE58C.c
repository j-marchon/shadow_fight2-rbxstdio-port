// Nekki.SF2.GUI.Fight.PreFight$$UpdatePointsTable @ RVA 0x2FFE58C

void Nekki_SF2_GUI_Fight_PreFight__UpdatePointsTable
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t HLGODJGOMPL,int32_t JJIMOBDENPB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b0a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b0a = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__UpdatePointsTable
                (pNVar2,HLGODJGOMPL,JJIMOBDENPB,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

