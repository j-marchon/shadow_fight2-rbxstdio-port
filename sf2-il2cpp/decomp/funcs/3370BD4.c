// BAOGEGACLOH$$IKDPMKOIDMP @ RVA 0x3370BD4

void BAOGEGACLOH__IKDPMKOIDMP(BAOGEGACLOH_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  NFFDIPBFJHP_o *pNVar3;
  EEGDOGKBLNG_o *pEVar4;
  PLIIGOCLJDL_o *pPVar5;
  CFEJGBOOCOG_o *pCVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *pNVar9;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  GLPEFEEGCPM_o *pGVar10;
  FADHMEJJCPO_o *pFVar11;
  CFEJGBOOCOG_c *pCVar12;
  ACHLOMELAJE_o *pAVar13;
  LPAPAMPGDFN_o *pLVar14;
  ulong uVar15;
  int32_t *piVar16;
  
  if ((DAT_04567b21 & 1) == 0) {
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21870);
    DAT_04567b21 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar3 != (NFFDIPBFJHP_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if (pNVar3 == (NFFDIPBFJHP_o *)0x0) goto LAB_03470ef4;
    if ((pNVar3->fields)._OHJMKJNDJPN_k__BackingField != (GLPEFEEGCPM_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if ((pNVar3 == (NFFDIPBFJHP_o *)0x0) ||
         (pGVar10 = (pNVar3->fields)._OHJMKJNDJPN_k__BackingField, pGVar10 == (GLPEFEEGCPM_o *)0x0))
      goto LAB_03470ef4;
      if ((pGVar10->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
        if ((((pNVar3 == (NFFDIPBFJHP_o *)0x0) ||
             (pGVar10 = (pNVar3->fields)._OHJMKJNDJPN_k__BackingField,
             pGVar10 == (GLPEFEEGCPM_o *)0x0)) ||
            (pFVar11 = (pGVar10->fields).PBBGNHKFEPG, pFVar11 == (FADHMEJJCPO_o *)0x0)) ||
           (pEVar4 == (EEGDOGKBLNG_o *)0x0)) goto LAB_03470ef4;
        (pEVar4->fields)._DHPJJLCDAJD_k__BackingField = (pFVar11->fields).PDOMCPONBNB;
        pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
        if (pPVar5 == (PLIIGOCLJDL_o *)0x0) goto LAB_03470ef4;
        PLIIGOCLJDL__HBBDJMCMNDE(pPVar5,(MethodInfo *)0x0);
        pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
        if (pPVar5 == (PLIIGOCLJDL_o *)0x0) goto LAB_03470ef4;
        PLIIGOCLJDL__MJFIDBMOKCM(pPVar5,(MethodInfo *)0x0);
      }
    }
  }
                    /* try { // try from 03470d2c to 03570deb has its CatchHandler @ 03470d2c
                       catch() { ... } // from try @ 03470d2c with catch @ 03470d2c
                       catch() { ... } // from try @ 03470e14 with catch @ 03470d2c
                       catch() { ... } // from try @ 03470e68 with catch @ 03470d2c
                       catch() { ... } // from try @ 03470ea8 with catch @ 03470d2c */
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar6 = IFAMAAGNCBJ__OBKGLDJEIDN((MethodInfo *)0x0);
  if (pCVar6 != (CFEJGBOOCOG_o *)0x0) {
    pCVar12 = pCVar6->klass;
    uVar1._0_1_ = (pCVar12->_2).rank;
    uVar1._1_1_ = (pCVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar1;
    if (uVar15 != 0) {
      piVar16 = &((pCVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
          pVVar7 = pCVar12->vtable + (*piVar16 + 1);
          goto LAB_03470d9c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CFEJGBOOCOG_TypeInfo,1);
LAB_03470d9c:
    lVar8 = (*pVVar7->methodPtr)(pCVar6,pVVar7->method);
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0x40) == '\0') {
        __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03470ef4;
        bVar2 = Nekki_SF2_Core_Quests_QuestsManager__ExistsQuestsWithActOrShowVideoAction
                          (__this_00,(MethodInfo *)0x0);
        if (bVar2) {
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_21870,(MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 03470dec to 03570df3 has its CatchHandler @ 03470e4c */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03470dfc to 03570e13 has its CatchHandler @ 03470e48 */
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
                    /* try { // try from 03470e14 to 03570e63 has its CatchHandler @ 03470d2c */
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar13 == (ACHLOMELAJE_o *)0x0) ||
             (pLVar14 = (pAVar13->fields).LMCDOMHENMC, pLVar14 == (LPAPAMPGDFN_o *)0x0))
          goto LAB_03470ef4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03470dfc with catch @ 03470e48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03470dec with catch @ 03470e4c
                        */
          if ((pLVar14->fields).AMIMEMOELHE == 0x32) {
                    /* try { // try from 03470e64 to 03570e67 has its CatchHandler @ 03470e90 */
            if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03470e68 to 03570e9f has its CatchHandler @ 03470d2c */
              thunk_FUN_01ba7564();
            }
            if (DAT_04565ff1 == '\0') {
              FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
              DAT_04565ff1 = '\x01';
            }
                    /* catch() { ... } // from try @ 03470e64 with catch @ 03470e90 */
            if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03470ea0 to 03570ea7 has its CatchHandler @ 03470ebc */
                    /* try { // try from 03470ea8 to 03570eb3 has its CatchHandler @ 03470d2c */
            if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
              JJPNLEPEAFM__HMBOKGADCGK((MethodInfo *)0x0);
              pNVar9 = JJPNLEPEAFM__BAPCFKAPNEK((__this->fields).MAIMCOJJJCM,(MethodInfo *)0x0);
              (__this->fields).ILCGLGPADOK = pNVar9;
              thunk_FUN_01c20e04();
              BAOGEGACLOH__BPHLFABNOLH(__this,method_00);
              return;
            }
          }
        }
      }
                    /* try { // try from 03470eb4 to 03570ebb has its CatchHandler @ 03470ebc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03470ea0 with catch @ 03470ebc
                       catch(type#2 @ 00000000) { ... } // from try @ 03470eb4 with catch @ 03470ebc
                        */
      OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03470ef4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

