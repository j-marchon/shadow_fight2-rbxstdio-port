// Nekki.SF2.GUI.Fight.ViewerFight$$SetLockLifeUpdate @ RVA 0x35BEA7C

void Nekki_SF2_GUI_Fight_ViewerFight__SetLockLifeUpdate
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool FOFCAILEKJD,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  
  if ((DAT_04568eff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568eff = 1;
  }
  lVar1 = 0x58;
  if (!FOFCAILEKJD) {
    lVar1 = 0x60;
  }
  __this_00 = *(Nekki_SF2_GUI_Fight_ScreenModel_o **)((long)&__this->klass + lVar1);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenModel__SetLockLifeUpdate(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

