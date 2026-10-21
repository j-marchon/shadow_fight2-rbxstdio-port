// Nekki.SF2.GUI.Fight.PreFight$$ViewerUpdateHotGroundTimer @ RVA 0x2FFD440

void Nekki_SF2_GUI_Fight_PreFight__ViewerUpdateHotGroundTimer
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t LFJGFLNMBMC,int32_t HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565af3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af3 = 1;
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
      Nekki_SF2_GUI_Fight_ViewerFight__UpdateHotGroundTimer
                (pNVar2,LFJGFLNMBMC,HEHMPFLAEGE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

