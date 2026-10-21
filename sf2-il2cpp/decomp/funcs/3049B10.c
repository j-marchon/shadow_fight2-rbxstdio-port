// EGMONPGHHDP$$MEDCMFMKLED @ RVA 0x3049B10

void EGMONPGHHDP__MEDCMFMKLED(EGMONPGHHDP_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  JMDPBFOCHHP_CKEMIAEPGKD_array *pJVar4;
  EGMONPGHHDP_o *__this_01;
  ACHLOMELAJE_o *pAVar5;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar6;
  MethodInfo *method_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar7;
  JMDPBFOCHHP_CKEMIAEPGKD_o *extraout_x1;
  JMDPBFOCHHP_CKEMIAEPGKD_o *extraout_x1_00;
  MethodInfo *pMVar8;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  System_String_o *pSVar9;
  byte bVar10;
  
  if ((DAT_04565dfe & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EGMONPGHHDP_MEDCMFMKLED__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3321);
    FUN_01bab630(&StringLiteral_3319);
    FUN_01bab630(&StringLiteral_15926);
    FUN_01bab630(&StringLiteral_3316);
    FUN_01bab630(&StringLiteral_15930);
    FUN_01bab630(&StringLiteral_3320);
    FUN_01bab630(&StringLiteral_16776);
    FUN_01bab630(&StringLiteral_3322);
    FUN_01bab630(&StringLiteral_3323);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_3317);
    FUN_01bab630(&StringLiteral_1606);
    DAT_04565dfe = 1;
  }
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 == (FKDLCJJOGIP_o *)0x0) goto LAB_0314a238;
  pMVar8 = (MethodInfo *)0x0;
  FKDLCJJOGIP__DAGFKDGOBBF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  pJVar4 = EGMONPGHHDP__BILAAEOFDBJ(__this,method_00);
  if (pJVar4 == (JMDPBFOCHHP_CKEMIAEPGKD_array *)0x0) goto LAB_0314a238;
  uVar3 = (uint)pJVar4->max_length;
  if (uVar3 == 0) goto LAB_0314a23c;
  pJVar7 = pJVar4->m_Items[0];
  if (pJVar7 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
    if (uVar3 < 2) goto LAB_0314a23c;
                    /* try { // try from 03149c84 to 03249deb has its CatchHandler @ 03149c84
                       catch() { ... } // from try @ 03149c84 with catch @ 03149c84
                       catch() { ... } // from try @ 03149ec4 with catch @ 03149c84
                       catch() { ... } // from try @ 03149f10 with catch @ 03149c84
                       catch() { ... } // from try @ 03149f74 with catch @ 03149c84 */
    if ((pJVar4->m_Items[1] == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) &&
       (iVar2 = EGMONPGHHDP__BAOGFDIDOMJ(__this,pJVar7,pMVar8), pJVar7 = extraout_x1, 0 < iVar2)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (__this_01 == (EGMONPGHHDP_o *)0x0) goto LAB_0314a238;
      EGMONPGHHDP__MJPJLODOPOH(__this_01,-1,(System_Action_o *)0x0,StringLiteral_16776,in_x4);
      pJVar7 = extraout_x1_00;
    }
  }
  pJVar7 = EGMONPGHHDP__OKBKFJKEAAG(__this,(MethodInfo *)pJVar7);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314a238;
  pMVar6 = ACHLOMELAJE__HKIEGNBOFCD(pAVar5,StringLiteral_15926,0,(MethodInfo *)0x0);
  if (pMVar6 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
    if (pJVar7 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
      bVar1 = System_String__op_Inequality
                        ((System_String_o *)0x0,(pJVar7->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar10 = 0;
        pSVar9 = (System_String_o *)0x0;
        goto LAB_0314a08c;
      }
LAB_03149fbc:
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0)
      {
        FUN_03f935d0(&PTR_KAMBBJFPLGM_TypeInfo_04232000);
        return;
      }
      goto LAB_0314a238;
    }
    pSVar9 = (System_String_o *)0x0;
LAB_0314a07c:
    bVar10 = 1;
  }
  else {
    pSVar9 = (pMVar6->fields).JAICMIMBIOA;
    if (pJVar7 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) goto LAB_0314a07c;
    bVar1 = System_String__op_Inequality(pSVar9,(pJVar7->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar6->fields).JAICMIMBIOA,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314a238;
        ACHLOMELAJE__HEMDIAFAMAO(pAVar5,StringLiteral_3323,false,0,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 03149dec to 03249dfb has its CatchHandler @ 03149f30 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
                    /* try { // try from 03149e00 to 03249e13 has its CatchHandler @ 03149f34 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314a238;
                    /* try { // try from 03149e3c to 03249e43 has its CatchHandler @ 03149f20 */
        ACHLOMELAJE__LMJFPPDAPBF(pAVar5,StringLiteral_3321,StringLiteral_1,0,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03149e58 to 03249e5b has its CatchHandler @ 03149f10 */
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03149e74 to 03249e7b has its CatchHandler @ 03149f1c */
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314a238;
                    /* try { // try from 03149e8c to 03249e9b has its CatchHandler @ 03149f18 */
        ACHLOMELAJE__LMJFPPDAPBF(pAVar5,StringLiteral_3320,StringLiteral_1,0,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
                    /* try { // try from 03149eb8 to 03249ec3 has its CatchHandler @ 03149f14 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
                    /* try { // try from 03149ec4 to 03249f0b has its CatchHandler @ 03149c84 */
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314a238;
        ACHLOMELAJE__LMJFPPDAPBF(pAVar5,StringLiteral_3322,StringLiteral_1,0,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
                    /* try { // try from 03149f0c to 03249f0f has its CatchHandler @ 03149f24 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149e58 with catch @ 03149f10
                       try { // try from 03149f10 to 03249f4b has its CatchHandler @ 03149c84 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149eb8 with catch @ 03149f14
                        */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149e8c with catch @ 03149f18
                        */
          thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149e74 with catch @ 03149f1c
                        */
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149e3c with catch @ 03149f20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149f0c with catch @ 03149f24
                        */
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314a238;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149dec with catch @ 03149f30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149e00 with catch @ 03149f34
                        */
        ACHLOMELAJE__LMJFPPDAPBF(pAVar5,StringLiteral_3316,StringLiteral_1,0,(MethodInfo *)0x0);
                    /* try { // try from 03149f4c to 03249f4f has its CatchHandler @ 03149f5c */
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 03149f4c with catch @ 03149f5c */
          DAT_04565b7d = '\x01';
        }
                    /* try { // try from 03149f68 to 03249f73 has its CatchHandler @ 03149f88 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
                    /* try { // try from 03149f74 to 03249f7f has its CatchHandler @ 03149c84 */
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03149f80 to 03249f87 has its CatchHandler @ 03149f88 */
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0314a238;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03149f68 with catch @ 03149f88
                       catch(type#2 @ 00000000) { ... } // from try @ 03149f80 with catch @ 03149f88
                        */
        ACHLOMELAJE__LMJFPPDAPBF(pAVar5,StringLiteral_3317,StringLiteral_1,0,(MethodInfo *)0x0);
      }
      goto LAB_03149fbc;
    }
    bVar10 = 0;
  }
LAB_0314a08c:
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 == (ACHLOMELAJE_o *)0x0) {
LAB_0314a238:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar8 = (MethodInfo *)0x0;
  pMVar6 = ACHLOMELAJE__HKIEGNBOFCD(pAVar5,StringLiteral_15930,0,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar9,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((int)pJVar4->max_length == 0) {
LAB_0314a23c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (pJVar4->m_Items[0] != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
      if (pMVar6 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        pSVar9 = (System_String_o *)0x0;
      }
      else {
        pSVar9 = (pMVar6->fields).JAICMIMBIOA;
      }
      method_01 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Inequality(pSVar9,StringLiteral_1606,(MethodInfo *)0x0);
      if ((bVar10 & bVar1) == 1) {
        if ((int)pJVar4->max_length != 0) {
          uVar3 = EGMONPGHHDP__AKDNGOBCGHB(__this,pJVar4->m_Items[0],method_01);
          EGMONPGHHDP__LJAGKBMCPGO((EGMONPGHHDP_o *)(ulong)uVar3,uVar3 + 1,false,pMVar8);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
            ACHLOMELAJE__HEMDIAFAMAO(pAVar5,StringLiteral_3323,true,0,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar5,false,(MethodInfo *)0x0);
              return;
            }
          }
          goto LAB_0314a238;
        }
        goto LAB_0314a23c;
      }
    }
  }
  return;
}

