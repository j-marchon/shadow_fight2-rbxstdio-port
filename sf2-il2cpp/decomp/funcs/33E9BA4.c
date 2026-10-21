// FCJBEKHDLAF$$JPJIJEGHMKL @ RVA 0x33E9BA4

void FCJBEKHDLAF__JPJIJEGHMKL
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               MMDDDDFHOLG_DOCBHLNBECF_o *DKAENNPDMIH,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04567edc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567edc = 1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0;
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034e9cdc;
    pNVar3 = (pNVar2->fields).FLKPJPEAJAJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    __this_00 = (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0;
    if (bVar1) {
      if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_034e9cdc;
      bVar1 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).HIBPKNAIPLH;
      if ((pNVar2 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) ||
         (pNVar3 = (pNVar2->fields).FLKPJPEAJAJ, pNVar3 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0)
         ) goto LAB_034e9cdc;
      if (bVar1) {
        __this_00 = (pNVar3->fields).leftModel;
      }
      else {
        __this_00 = (pNVar3->fields).rightModel;
      }
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar1) {
    return;
  }
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__AddEffectPerk
              (__this_00,DKAENNPDMIH,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
LAB_034e9cdc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

