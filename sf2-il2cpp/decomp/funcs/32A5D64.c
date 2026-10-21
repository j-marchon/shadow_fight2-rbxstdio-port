// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$GetPlayerWeapon @ RVA 0x32A5D64

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetPlayerWeapon
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,System_String_o *CDLKGCOIGNA,
          int32_t HEHMPFLAEGE,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  DOPEEDABNEK_o *__this_01;
  BNAIBAODKAK_o *pBVar5;
  BNAIBAODKAK_array *pBVar6;
  uint uVar7;
  
                    /* try { // try from 033a5d6c to 034a5e47 has its CatchHandler @ 033a5b90 */
  if ((DAT_045673f3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14837);
    DAT_045673f3 = 1;
  }
  lVar1 = 0x88;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x90;
  }
  __this_00 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
  if ((__this_00 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) &&
     (pHVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__get_PlayerWeapon(__this_00,(MethodInfo *)0x0),
     pHVar4 != (HOOAAGABMBL_o *)0x0)) {
    bVar3 = System_String__op_Equality
                      ((pHVar4->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_14837,
                       (MethodInfo *)0x0);
    if (bVar3) {
      pBVar6 = (__this->fields).DLCCJFCKAJL;
      if (pBVar6 == (BNAIBAODKAK_array *)0x0) goto LAB_033a5ec0;
      uVar2 = (uint)pBVar6->max_length;
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pBVar5 = pBVar6->m_Items[(int)uVar7];
          if (pBVar5 == (BNAIBAODKAK_o *)0x0) goto LAB_033a5ec0;
          bVar3 = System_String__op_Equality
                            ((pBVar5->fields).PKJEMIDJPAG,CDLKGCOIGNA,(MethodInfo *)0x0);
          if (bVar3) {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a5e64 to 034a5e6b has its CatchHandler @ 033a5f78 */
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 033a5e70 to 034a5e7f has its CatchHandler @ 033a5f6c */
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
                    /* try { // try from 033a5e90 to 034a5e93 has its CatchHandler @ 033a5f58 */
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a5e94 to 034a5ea3 has its CatchHandler @ 033a5f74 */
              thunk_FUN_01ba7564();
            }
            __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if (__this_01 != (DOPEEDABNEK_o *)0x0) {
              pHVar4 = DOPEEDABNEK__CKKIPBAIEMN
                                 (__this_01,(pBVar5->fields).MHBAKHIIJLP,(MethodInfo *)0x0);
              return pHVar4;
            }
            goto LAB_033a5ec0;
          }
          uVar2 = (uint)pBVar6->max_length;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar2);
      }
    }
                    /* try { // try from 033a5e48 to 034a5e4f has its CatchHandler @ 033a5f90 */
    return pHVar4;
  }
LAB_033a5ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

