// FCJBEKHDLAF$$DBNFJODELLP @ RVA 0x33ECBA4

void FCJBEKHDLAF__DBNFJODELLP
               (FCJBEKHDLAF_o *__this,PJKHAJKEHEL_o *FIJLCCEJANF,PJKHAJKEHEL_o *DIJDCNOLDOK,
               int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  MNLIBPAOCLG_o *__this_00;
  KAHMAJKJMBK_o *__this_01;
  CNIGOFCKBGI_o *pCVar6;
  OLKKAIFGGAK_o *pOVar7;
  PBAKFOBIHEG_o *pPVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool_conflict bVar10;
  int32_t iVar11;
  BEPJMNAHCAD_o *pBVar12;
  PJKHAJKEHEL_o *pPVar13;
  PBAKFOBIHEG_c *pPVar14;
  ulong uVar15;
  int32_t *piVar16;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar17;
  System_Collections_IEnumerator_o *pSVar18;
  float fVar19;
  float fVar20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  
  method_01 = (MethodInfo *)(ulong)(uint)ACCIHBHMFPN;
  if ((DAT_04567f12 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_6427);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567f12 = 1;
  }
  pBVar12 = (__this->fields).FAJCMHDLBEJ;
  if ((pBVar12 == (BEPJMNAHCAD_o *)0x0) ||
     (__this_00 = (pBVar12->fields).LIICCFBEOLC, __this_00 == (MNLIBPAOCLG_o *)0x0))
  goto LAB_034ecf8c;
  MNLIBPAOCLG__HFCJLBGBGPI(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).AMJGAIMHDLO;
  if (__this_01 == (KAHMAJKJMBK_o *)0x0) goto LAB_034ecf8c;
  (__this_01->fields).JIKKMEONEDH = false;
  KAHMAJKJMBK__PIFKCAHHGIO(__this_01,(MethodInfo *)0x0);
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_6427,StringLiteral_1,(MethodInfo *)0x0);
  if (ACCIHBHMFPN - 2U < 3) {
    pCVar6 = (__this->fields).KKJBIHIFJOE;
    if ((pCVar6 == (CNIGOFCKBGI_o *)0x0) ||
       (iVar5 = (*(pCVar6->klass->vtable)._14_PKEKLILIONG.methodPtr)
                          (pCVar6,(pCVar6->klass->vtable)._14_PKEKLILIONG.method), iVar5 != 1)) {
      DIJDCNOLDOK = (__this->fields).KCHOEJOHIMM;
      FIJLCCEJANF = (__this->fields).JEDELFOBLEN;
      (__this->fields).HMFDJCBMCCL = false;
    }
    else {
      FIJLCCEJANF = (__this->fields).KCHOEJOHIMM;
      DIJDCNOLDOK = (__this->fields).JEDELFOBLEN;
    }
LAB_034ecd94:
    if (FIJLCCEJANF == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
LAB_034ecd98:
    iVar11 = (FIJLCCEJANF->fields).GPLLAHCFFIH;
LAB_034ecd9c:
    (FIJLCCEJANF->fields).GPLLAHCFFIH = iVar11 + 1;
    (FIJLCCEJANF->fields).DONKDCJLBPN = true;
                    /* try { // try from 034ecdac to 035ecdb3 has its CatchHandler @ 034eced0 */
    if (DIJDCNOLDOK == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
    bVar10 = false;
  }
  else {
    if (ACCIHBHMFPN != 6) goto LAB_034ecd94;
    FIJLCCEJANF = (__this->fields).KCHOEJOHIMM;
    if (FIJLCCEJANF == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
    local_70.fakeValueActive = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_70.inited = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.inited;
    local_70._18_2_ = *(undefined2 *)&(FIJLCCEJANF->fields).JNFNFEJAGGN.fields.field_0x12;
    local_70.hiddenValueOldByte4.fields =
         (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_70.fakeValue = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.fakeValue;
    local_70.currentCryptoKey = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_70.hiddenValue = (FIJLCCEJANF->fields).JNFNFEJAGGN.fields.hiddenValue;
    DIJDCNOLDOK = (__this->fields).JEDELFOBLEN;
    fVar19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                        (MethodInfo *)0x0);
    pPVar13 = (__this->fields).JEDELFOBLEN;
    if (pPVar13 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
    local_90.fakeValueActive = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_90.inited = (pPVar13->fields).JNFNFEJAGGN.fields.inited;
    local_90._18_2_ = *(undefined2 *)&(pPVar13->fields).JNFNFEJAGGN.fields.field_0x12;
    local_90.hiddenValueOldByte4.fields =
         (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_90.fakeValue = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValue;
    local_90.currentCryptoKey = (pPVar13->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_90.hiddenValue = (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValue;
    fVar20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                        (MethodInfo *)0x0);
    if (fVar20 < fVar19) goto LAB_034ecd98;
    pPVar13 = (__this->fields).KCHOEJOHIMM;
    if (pPVar13 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
    local_b0.fakeValueActive = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_b0.inited = (pPVar13->fields).JNFNFEJAGGN.fields.inited;
    local_b0._18_2_ = *(undefined2 *)&(pPVar13->fields).JNFNFEJAGGN.fields.field_0x12;
    local_b0.hiddenValueOldByte4.fields =
         (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_b0.fakeValue = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValue;
    local_b0.currentCryptoKey = (pPVar13->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_b0.hiddenValue = (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValue;
    fVar19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,
                        (MethodInfo *)0x0);
    pPVar13 = (__this->fields).JEDELFOBLEN;
    if (pPVar13 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
    local_d0.fakeValueActive = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_d0.inited = (pPVar13->fields).JNFNFEJAGGN.fields.inited;
    local_d0._18_2_ = *(undefined2 *)&(pPVar13->fields).JNFNFEJAGGN.fields.field_0x12;
    local_d0.hiddenValueOldByte4.fields =
         (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_d0.fakeValue = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValue;
    local_d0.currentCryptoKey = (pPVar13->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_d0.hiddenValue = (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValue;
    fVar20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_d0,
                        (MethodInfo *)0x0);
    if (fVar19 < fVar20) {
      FIJLCCEJANF = (__this->fields).JEDELFOBLEN;
      if (FIJLCCEJANF == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
      iVar11 = (FIJLCCEJANF->fields).GPLLAHCFFIH;
      DIJDCNOLDOK = (__this->fields).KCHOEJOHIMM;
      goto LAB_034ecd9c;
    }
    bVar10 = true;
    (FIJLCCEJANF->fields).DONKDCJLBPN = true;
    if (DIJDCNOLDOK == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecf8c;
  }
  (DIJDCNOLDOK->fields).DONKDCJLBPN = bVar10;
                    /* try { // try from 034ecdc0 to 035ecdcb has its CatchHandler @ 034ececc */
  (FIJLCCEJANF->fields).LMKHOJFOPEB = true;
  (DIJDCNOLDOK->fields).LMKHOJFOPEB = true;
                    /* try { // try from 034ecdcc to 035ecebf has its CatchHandler @ 034ecb8c */
  (FIJLCCEJANF->fields).KNDEADMMCPO = ACCIHBHMFPN;
  (DIJDCNOLDOK->fields).KNDEADMMCPO = ACCIHBHMFPN;
  pNVar17 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pNVar17 = (__this->fields).HIBPKNAIPLH;
    if (pNVar17 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034ecf8c;
    Nekki_SF2_GUI_Fight_PreFight__ViewerUpdateVictorys(pNVar17,(MethodInfo *)0x0);
  }
  method_00 = (MethodInfo *)0x0;
  (__this->fields).GDAKDNGDIKJ = false;
  FCJBEKHDLAF__EPLFGHIGEAH(__this,false,false,method_01);
  pOVar7 = (__this->fields).LAMENNMGPBN;
  if (pOVar7 != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__HKOFNNIMLNM(pOVar7,(MethodInfo *)0x0);
    pOVar7 = (__this->fields).CLEKIBBCAOJ;
    if (pOVar7 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__HKOFNNIMLNM(pOVar7,(MethodInfo *)0x0);
      FCJBEKHDLAF__KENPEBLGMIN(__this,3,method_00);
      pPVar8 = CoroutineManager__get_Current((MethodInfo *)0x0);
      if (pPVar8 != (PBAKFOBIHEG_o *)0x0) {
        pPVar14 = pPVar8->klass;
        pSVar18 = (__this->fields).AFIFGCCDGNF;
        uVar2._0_1_ = (pPVar14->_2).rank;
        uVar2._1_1_ = (pPVar14->_2).minimumAlignment;
        uVar15 = (ulong)uVar2;
        if (uVar15 != 0) {
          piVar16 = &((pPVar14->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar9 = pPVar14->vtable + (*piVar16 + 1);
              goto LAB_034ecebc;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar8,PBAKFOBIHEG_TypeInfo,1);
LAB_034ecebc:
                    /* try { // try from 034ecec0 to 035ecec3 has its CatchHandler @ 034ecec8 */
                    /* try { // try from 034ecec4 to 035ecee7 has its CatchHandler @ 034ecb8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ecec0 with catch @ 034ecec8
                        */
        (*pVVar9->methodPtr)(pPVar8,pSVar18,pVVar9->method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ecdc0 with catch @ 034ececc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ecdac with catch @ 034eced0
                        */
        (__this->fields).AFIFGCCDGNF = (System_Collections_IEnumerator_o *)0x0;
        thunk_FUN_01c20e04(&(__this->fields).AFIFGCCDGNF,0);
        pPVar8 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pPVar8 != (PBAKFOBIHEG_o *)0x0) {
                    /* try { // try from 034ecee8 to 035eceeb has its CatchHandler @ 034ecf14 */
          pPVar14 = pPVar8->klass;
                    /* try { // try from 034eceec to 035ecf23 has its CatchHandler @ 034ecb8c */
          pSVar18 = (__this->fields).DDNIIBGKMNB;
          uVar3._0_1_ = (pPVar14->_2).rank;
          uVar3._1_1_ = (pPVar14->_2).minimumAlignment;
          uVar15 = (ulong)uVar3;
          ppSVar1 = &(__this->fields).DDNIIBGKMNB;
          if (uVar15 != 0) {
            piVar16 = &((pPVar14->_1).interfaceOffsets)->offset;
            do {
                    /* catch() { ... } // from try @ 034ecee8 with catch @ 034ecf14 */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 034ecf38 to 035ecf3f has its CatchHandler @ 034ecf40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034ecf24 with catch @ 034ecf40
                       catch(type#2 @ 00000000) { ... } // from try @ 034ecf38 with catch @ 034ecf40
                        */
                pVVar9 = pPVar14->vtable + (*piVar16 + 1);
                goto LAB_034ecf44;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
                    /* try { // try from 034ecf24 to 035ecf2b has its CatchHandler @ 034ecf40 */
                    /* try { // try from 034ecf2c to 035ecf37 has its CatchHandler @ 034ecb8c */
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar8,PBAKFOBIHEG_TypeInfo,1);
LAB_034ecf44:
          (*pVVar9->methodPtr)(pPVar8,pSVar18,pVVar9->method);
          *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
          thunk_FUN_01c20e04(ppSVar1,0);
          return;
        }
      }
    }
  }
LAB_034ecf8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

