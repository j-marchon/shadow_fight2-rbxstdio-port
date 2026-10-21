// Nekki.SF2.GUI.Fight.ScreenModel$$ShowActivePerkInfo @ RVA 0x355EC94

void Nekki_SF2_GUI_Fight_ScreenModel__ShowActivePerkInfo
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *pNVar2;
  
  if ((DAT_04568bab & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bab = 1;
  }
  pNVar2 = (__this->fields)._activePerkModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._activePerkModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__AddActivePerkItem(pNVar2,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

