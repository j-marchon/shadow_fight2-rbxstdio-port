// ILNFICAMFCI$$DLBGAPAPJHA @ RVA 0x325C114

bool ILNFICAMFCI__DLBGAPAPJHA(int32_t KIJGFOBMEMN,MethodInfo *method)

{
  bool bVar1;
  ILNFICAMFCI_c *pIVar2;
  System_String_o **ppSVar3;
  BEPJMNAHCAD_o *__this;
  MMDDDDFHOLG_o *__this_00;
  MethodInfo *extraout_x1;
  bool CLKNKKAIMLF;
  NGKBNOEJLPH_o *pNVar4;
  CAAJMGKIPIE_o *pCVar5;
  OLKKAIFGGAK_o *pOVar6;
  PJKHAJKEHEL_o *pPVar7;
  FCJBEKHDLAF_o *__this_01;
  System_String_o *pSVar8;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar9;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar10;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_02;
  
  if ((DAT_0456718d & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_12871);
    DAT_0456718d = 1;
    method = extraout_x1;
  }
  pIVar2 = ILNFICAMFCI_TypeInfo;
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    pIVar2 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564(ILNFICAMFCI_TypeInfo,method);
  }
  bVar1 = ILNFICAMFCI__ABHJLMEPMBF((MethodInfo *)pIVar2);
  if (!bVar1) {
    return false;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ == false) {
    return false;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_01 == (FCJBEKHDLAF_o *)0x0) goto LAB_0335c5a4;
  if (((KIJGFOBMEMN & 0xfffffffdU) != 1) && ((__this_01->fields).PEELENPNLHJ != 2)) {
    if (KIJGFOBMEMN != 0x19) {
      return false;
    }
switchD_0335c284_caseD_19:
    pIVar2 = ILNFICAMFCI_TypeInfo;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      pIVar2 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564();
    }
    ILNFICAMFCI__PEOFPPDIEEF((MethodInfo *)pIVar2);
    return true;
  }
  switch(KIJGFOBMEMN) {
  case 1:
    (__this_01->fields).MDJMIPGAJLL = (bool_conflict)((__this_01->fields).MDJMIPGAJLL ^ 1);
    break;
  case 2:
    (__this_01->fields).IIOMDDLGPIK = (bool_conflict)((__this_01->fields).IIOMDDLGPIK ^ 1);
    break;
  case 3:
    if ((__this_01->fields).MDJMIPGAJLL != false) {
      FCJBEKHDLAF__BDHAMOEKNNK(__this_01,(MethodInfo *)0x0);
    }
    break;
  case 4:
    FCJBEKHDLAF__GLOJOHKGALF(__this_01,false,false,(MethodInfo *)0x0);
    break;
  case 5:
    CLKNKKAIMLF = true;
    bVar1 = false;
    goto LAB_0335c310;
  case 6:
    bVar1 = true;
    CLKNKKAIMLF = false;
    goto LAB_0335c310;
  case 7:
    bVar1 = true;
    CLKNKKAIMLF = true;
LAB_0335c310:
    FCJBEKHDLAF__GLOJOHKGALF(__this_01,bVar1,CLKNKKAIMLF,(MethodInfo *)0x0);
    return true;
  case 9:
    FCJBEKHDLAF__MHKENGKHDKD(__this_01,(System_Nullable_float__o)0x0,(MethodInfo *)0x0);
    break;
  case 10:
    FCJBEKHDLAF__GHJKEOGGFBM(__this_01,(MethodInfo *)0x0);
    break;
  case 0xc:
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF,(MethodInfo *)0x0);
    pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
    if (bVar1) {
      if (((pOVar6 != (OLKKAIFGGAK_o *)0x0) &&
          (pNVar4 = (pOVar6->fields).ADGFKAPOIFN, pNVar4 != (NGKBNOEJLPH_o *)0x0)) &&
         (pCVar5 = (pNVar4->fields)._MPABEMCEHCL_k__BackingField, pCVar5 != (CAAJMGKIPIE_o *)0x0)) {
        pSVar8 = (pCVar5->fields).DEKCPPOJFEH;
        if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        ppSVar3 = &ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF;
        *ppSVar3 = pSVar8;
        thunk_FUN_01c20e04(ppSVar3,pSVar8);
        pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
        if (pOVar6 != (OLKKAIFGGAK_o *)0x0) {
          OLKKAIFGGAK__CIBLINMCKDK(pOVar6,StringLiteral_12871,(MethodInfo *)0x0);
          return true;
        }
      }
    }
    else {
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pOVar6 != (OLKKAIFGGAK_o *)0x0) {
                    /* try { // try from 0335c574 to 0345c763 has its CatchHandler @ 0335c574
                       catch() { ... } // from try @ 0335c574 with catch @ 0335c574
                       catch() { ... } // from try @ 0335c89c with catch @ 0335c574
                       catch() { ... } // from try @ 0335c940 with catch @ 0335c574
                       catch() { ... } // from try @ 0335c948 with catch @ 0335c574
                       catch() { ... } // from try @ 0335c9f8 with catch @ 0335c574 */
        OLKKAIFGGAK__CIBLINMCKDK
                  (pOVar6,ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF,(MethodInfo *)0x0);
        ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF = string_TypeInfo->static_fields->Empty;
        thunk_FUN_01c20e04();
        return true;
      }
    }
    goto LAB_0335c5a4;
  case 0xd:
    FCJBEKHDLAF__MLPOHGPKKJJ(__this_01,(__this_01->fields).GDAKDNGDIKJ == false,(MethodInfo *)0x0);
    break;
  case 0xe:
    __this = (__this_01->fields).FAJCMHDLBEJ;
    if (__this == (BEPJMNAHCAD_o *)0x0) goto LAB_0335c5a4;
    BEPJMNAHCAD__EDOKJKEOIGD(__this,(MethodInfo *)0x0);
    break;
  case 0x12:
    pOVar6 = (__this_01->fields).LAMENNMGPBN;
    if (pOVar6 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__EHHDKBLFKAE(pOVar6,1,(MethodInfo *)0x0);
      pOVar6 = (__this_01->fields).LAMENNMGPBN;
      if (pOVar6 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__JPFGODGJKNP(pOVar6,(MethodInfo *)0x0);
        __this_00 = (__this_01->fields).POEGCOJFMDB;
        if (__this_00 != (MMDDDDFHOLG_o *)0x0) {
          MMDDDDFHOLG__CFEOMJALMBB
                    (__this_00,(__this_01->fields).LAMENNMGPBN,8,true,(NJPBBPOABKP_o *)0x0,
                     (MethodInfo *)0x0);
          return true;
        }
      }
    }
    goto LAB_0335c5a4;
  case 0x14:
    pOVar6 = (__this_01->fields).LAMENNMGPBN;
    if (pOVar6 == (OLKKAIFGGAK_o *)0x0) goto LAB_0335c5a4;
    OLKKAIFGGAK__HONGCGHLNDJ(pOVar6,(MethodInfo *)0x0);
    break;
  case 0x15:
    pNVar9 = (__this_01->fields).HIBPKNAIPLH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar9 = (__this_01->fields).HIBPKNAIPLH;
      if (pNVar9 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_0335c5a4;
      pNVar10 = (pNVar9->fields).FLKPJPEAJAJ;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      __this_02 = (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0;
      if (bVar1) {
        pNVar9 = (__this_01->fields).HIBPKNAIPLH;
        if ((pNVar9 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) ||
           (pNVar10 = (pNVar9->fields).FLKPJPEAJAJ,
           pNVar10 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0)) goto LAB_0335c5a4;
        __this_02 = (pNVar10->fields).leftModel;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (__this_02 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_0335c5a4;
        Nekki_SF2_GUI_Fight_ScreenModel__IncreaseStyleByValue(__this_02,1.0,(MethodInfo *)0x0);
      }
    }
    break;
  case 0x16:
    pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
    if (pOVar6 == (OLKKAIFGGAK_o *)0x0) goto LAB_0335c5a4;
    (pOVar6->fields)._DDFDFOGDLAL_k__BackingField =
         (bool_conflict)((pOVar6->fields)._DDFDFOGDLAL_k__BackingField ^ 1);
    break;
  case 0x17:
    pOVar6 = (__this_01->fields).LAMENNMGPBN;
    goto joined_r0x0335c534;
  case 0x18:
    pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
joined_r0x0335c534:
    if ((pOVar6 == (OLKKAIFGGAK_o *)0x0) ||
       (pPVar7 = (pOVar6->fields).FAPMJJBOFEF, pPVar7 == (PJKHAJKEHEL_o *)0x0)) {
LAB_0335c5a4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pPVar7->fields).HMDADENHOFD = (bool_conflict)((pPVar7->fields).HMDADENHOFD ^ 1);
    break;
  case 0x19:
    goto switchD_0335c284_caseD_19;
  }
  return true;
}

