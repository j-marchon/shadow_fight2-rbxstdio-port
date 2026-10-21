// FCJBEKHDLAF$$POHOPBLOBIP @ RVA 0x33E5D68

void FCJBEKHDLAF__POHOPBLOBIP(FCJBEKHDLAF_o *__this,int32_t IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  FCJBEKHDLAF_o *pFVar3;
  AFFHKININGD_o *pAVar4;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar5;
  
  if ((DAT_04567eca & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo,IMMNELPBGIF);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eca = 1;
  }
  pNVar5 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar5 = (__this->fields).HIBPKNAIPLH;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034e5f08;
    iVar2 = Nekki_SF2_GUI_Fight_PreFight__get_Type(pNVar5,(MethodInfo *)0x0);
    if (iVar2 - 2U < 2) {
      FCJBEKHDLAF__MFKBMJDELMB(__this,method_00);
      pNVar5 = (__this->fields).HIBPKNAIPLH;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 034e5e58 to 035e5e7f has its CatchHandler @ 034e6418 */
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
        if (pFVar3 != (FCJBEKHDLAF_o *)0x0) {
          if ((pFVar3->fields).FBFPLEFCDOK == (AFFHKININGD_o *)0x0) {
            return;
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
            if (pFVar3 == (FCJBEKHDLAF_o *)0x0) goto LAB_034e5f08;
          }
          pAVar4 = (pFVar3->fields).FBFPLEFCDOK;
          if (pAVar4 != (AFFHKININGD_o *)0x0) {
            if ((pAVar4->fields).JDNKKGPNHPB != 0x14) {
              return;
            }
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
                    /* try { // try from 034e5eb4 to 035e5edf has its CatchHandler @ 034e6410 */
              pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
              if (pFVar3 == (FCJBEKHDLAF_o *)0x0) goto LAB_034e5f08;
            }
            pAVar4 = (pFVar3->fields).FBFPLEFCDOK;
            if (pAVar4 != (AFFHKININGD_o *)0x0) {
              CJNHFNHJHPE = AFFHKININGD__CJPIFPJMENP(pAVar4,(MethodInfo *)0x0);
              bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
              if (bVar1) {
                return;
              }
              pNVar5 = (__this->fields).HIBPKNAIPLH;
              if (pNVar5 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                Nekki_SF2_GUI_Fight_PreFight__CreateFightRule(pNVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
LAB_034e5f08:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    else {
      if (iVar2 == 5) {
        FCJBEKHDLAF__FDJPCCHKIEM(__this,method_00);
        return;
      }
      if (iVar2 == 1) {
        FCJBEKHDLAF__FDDKGLOPBEG(__this,method_00);
        return;
      }
    }
  }
  return;
}

