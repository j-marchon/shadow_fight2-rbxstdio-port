// Nekki.SF2.GUI.Fight.PreFight$$ViewerInit @ RVA 0x2FFEEDC

void Nekki_SF2_GUI_Fight_PreFight__ViewerInit
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,JIMKCICMMIL_o *ODIAFMNGOLA,
               PJKHAJKEHEL_o *CGEHDIHFMEE,PJKHAJKEHEL_o *EOBHGAMOGJF,bool BFANHMIHMGA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b17 = 1;
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
      Nekki_SF2_GUI_Fight_ViewerFight__Init
                (pNVar2,ODIAFMNGOLA,CGEHDIHFMEE,EOBHGAMOGJF,BFANHMIHMGA,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

