// Nekki.SF2.GUI.Fight.PreFight$$ViewerStrike @ RVA 0x2FFD640

void Nekki_SF2_GUI_Fight_PreFight__ViewerStrike
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,float LINBBAKAFCP,
               int32_t JNFKICLFJMG,bool JHMMNIMBIKL,bool JFOKCHFLFJG,bool CPKEPNCILEN,
               bool JECKCMKCNCH,bool ABOGGPJGIAI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565af6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af6 = 1;
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
      Nekki_SF2_GUI_Fight_ViewerFight__Strike
                (pNVar2,CAMAHOAFAPK,LINBBAKAFCP,JNFKICLFJMG,JHMMNIMBIKL,JFOKCHFLFJG,CPKEPNCILEN,
                 JECKCMKCNCH,ABOGGPJGIAI,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

