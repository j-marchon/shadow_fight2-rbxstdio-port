// Nekki.SF2.GUI.Fight.PreFight$$ClosePauseScreen @ RVA 0x2FFDFC4

void Nekki_SF2_GUI_Fight_PreFight__ClosePauseScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PauseScreen_o **ppNVar2;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  Nekki_SF2_GUI_Fight_PauseScreen_o *x;
  
  if ((DAT_04565b04 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b04 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).IHNMJKLMFMA;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 == (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) goto LAB_030fe0a4;
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    *ppNVar2 = (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar2,0);
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
LAB_030fe0a4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_ViewerFight__SetTimerForLastRaidRound(pNVar3,(MethodInfo *)0x0);
  }
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}

