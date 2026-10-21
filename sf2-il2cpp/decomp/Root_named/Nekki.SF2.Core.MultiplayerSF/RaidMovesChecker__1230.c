// Original name: Nekki.SF2.Core.MultiplayerSF.RaidMovesChecker  (obfuscated NJNCPNBIPCD)
// TypeDefIndex 1230
// Namespace: 
// public class RaidMovesChecker
// Fields:
//   private const int LHCMDCFMFAM = 30;
//   private static RaidMovesChecker CBDMFFMCJBK; // 0x0
//   private static bool <EGONDPGBNLJ>k__BackingField; // 0x8
//   public KJNCNBJIJPC LEDBMKOBNDM; // 0x10
//   private HOOAAGABMBL PJKFHNAHDEK; // 0x18
//   private KKEKJDLEJIL MFFEOOLICJE; // 0x20
//   private int HMDOBHEEHKM; // 0x28
//   private int FDCEMGNCPCI; // 0x2C
//   private int LCJAAPPDFJJ; // 0x30
//   private float PACHINKIODC; // 0x34
//   private int ICOPCAKPPCJ; // 0x38
//   private int BJEIJEJKHJO; // 0x3C
//   private bool FJKKGKCJMGB; // 0x40
//   private bool GKIMOMJACDC; // 0x41
//   public static float KCDGBMIGCND; // 0xC
//   public static float CGOPLAKCJDF; // 0x10
//   public static int DKDPLLLACKC; // 0x14
//   public static float MDCGJFFAJAP; // 0x18
//   public static int DPNIFBNEBLB; // 0x1C
//   public static int JHMDBNGCKNN; // 0x20

// ===== private void LLCONNGHGKD()  [RVA 0x31383E8]
// RaidMovesChecker$$LLCONNGHGKD @ RVA 0x31383E8

void RaidMovesChecker__LLCONNGHGKD(RaidMovesChecker_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  
  if ((DAT_04566711 & 1) == 0) {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04566711 = 1;
    method = extraout_x1;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04565ff1 = '\x01';
    method = extraout_x1_01;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  if (RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    RaidMovesChecker__JFHKDNJOIGN((RaidMovesChecker_o *)RaidMovesChecker_TypeInfo,method);
    return;
  }
  return;
}


// ===== private KKEKJDLEJIL JKEODODFIOD(KKEKJDLEJIL JGHIJMJNJLE)  [RVA 0x31387FC]
// RaidMovesChecker$$JKEODODFIOD @ RVA 0x31387FC

KKEKJDLEJIL_o *
RaidMovesChecker__JKEODODFIOD(RaidMovesChecker_o *__this,KKEKJDLEJIL_o *JGHIJMJNJLE,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  KKEKJDLEJIL_o *pKVar6;
  HOOAAGABMBL_o **ppHVar7;
  MethodInfo *pMVar8;
  MethodInfo *in_x4;
  Item_o *pDVar9;
  KKEKJDLEJIL_o **ppKVar10;
  System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ;
  HOOAAGABMBL_o *pHVar11;
  System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ_01;
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04566712 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_ACLHJACFNIN<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    DAT_04566712 = 1;
  }
  if (JGHIJMJNJLE == (KKEKJDLEJIL_o *)0x0) goto LAB_03238bb4;
  pKVar6 = KKEKJDLEJIL__FAOBHLCDKJI(JGHIJMJNJLE,(MethodInfo *)0x0);
  ppKVar10 = &(__this->fields).MFFEOOLICJE;
  *ppKVar10 = pKVar6;
  thunk_FUN_01c20e04(ppKVar10,pKVar6);
  if ((__this->fields).FJKKGKCJMGB == false) goto LAB_03238b10;
                    /* try { // try from 032388bc to 033388c3 has its CatchHandler @ 032389a0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032388cc to 033388d3 has its CatchHandler @ 03238998 */
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar9 == (Item_o *)0x0) goto LAB_03238bb4;
  GHAAKPDHIJJ = (pDVar9->fields).GNCBIPJFEGB;
                    /* try { // try from 0323890c to 0333893b has its CatchHandler @ 032389a4 */
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* try { // try from 0323893c to 0333898f has its CatchHandler @ 03238630 */
  if (pDVar9 == (Item_o *)0x0) goto LAB_03238bb4;
  GHAAKPDHIJJ_00 = (pDVar9->fields).DLDBBBCMJOC;
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar9 == (Item_o *)0x0) goto LAB_03238bb4;
  iVar1 = (__this->fields).BJEIJEJKHJO;
  GHAAKPDHIJJ_01 = (pDVar9->fields).OGOPJDCOPDF;
  if (0 < iVar1) {
                    /* try { // try from 03238990 to 03338993 has its CatchHandler @ 0323899c */
                    /* try { // try from 03238994 to 033389bb has its CatchHandler @ 03238630 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032388cc with catch @ 03238998
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03238990 with catch @ 0323899c
                        */
    GHAAKPDHIJJ = (System_Collections_Generic_List_HOOAAGABMBL__o *)
                  DJNBJHPDKDP__ACLHJACFNIN<object>
                            ((System_Collections_Generic_List_T__o *)GHAAKPDHIJJ,iVar1,
                             Method_DJNBJHPDKDP_ACLHJACFNIN<HOOAAGABMBL>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032388bc with catch @ 032389a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323890c with catch @ 032389a4
                        */
    GHAAKPDHIJJ_00 =
         (System_Collections_Generic_List_HOOAAGABMBL__o *)
         DJNBJHPDKDP__ACLHJACFNIN<object>
                   ((System_Collections_Generic_List_T__o *)GHAAKPDHIJJ_00,
                    (__this->fields).BJEIJEJKHJO,Method_DJNBJHPDKDP_ACLHJACFNIN<HOOAAGABMBL>__);
                    /* try { // try from 032389bc to 033389bf has its CatchHandler @ 032389e0 */
                    /* try { // try from 032389c0 to 033389e7 has its CatchHandler @ 03238630 */
    GHAAKPDHIJJ_01 =
         (System_Collections_Generic_List_HOOAAGABMBL__o *)
         DJNBJHPDKDP__ACLHJACFNIN<object>
                   ((System_Collections_Generic_List_T__o *)GHAAKPDHIJJ_01,
                    (__this->fields).BJEIJEJKHJO,Method_DJNBJHPDKDP_ACLHJACFNIN<HOOAAGABMBL>__);
  }
  if (((GHAAKPDHIJJ == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) ||
      (GHAAKPDHIJJ_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) ||
     (GHAAKPDHIJJ_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) goto LAB_03238bb4;
                    /* catch() { ... } // from try @ 032389bc with catch @ 032389e0 */
  iVar2 = (__this->fields).ICOPCAKPPCJ;
                    /* try { // try from 032389e8 to 033389ef has its CatchHandler @ 03238a04 */
                    /* try { // try from 032389f0 to 033389fb has its CatchHandler @ 03238630 */
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (__this->fields).FDCEMGNCPCI / iVar2;
  }
                    /* try { // try from 032389fc to 03338a03 has its CatchHandler @ 03238a04 */
  iVar2 = (GHAAKPDHIJJ_00->fields)._size + (GHAAKPDHIJJ->fields)._size +
          (GHAAKPDHIJJ_01->fields)._size;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032389e8 with catch @ 03238a04
                       catch(type#2 @ 00000000) { ... } // from try @ 032389fc with catch @ 03238a04
                        */
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar3 / iVar2;
  }
  iVar3 = iVar3 - iVar4 * iVar2;
  pMVar8 = StringLiteral_14870/*"Weapon"*/;
  local_44 = iVar3;
  bVar5 = RaidMovesChecker__EGLDLNFHJPJ
                    (__this,&local_44,GHAAKPDHIJJ,(System_String_o *)StringLiteral_14870/*"Weapon"*/,in_x4);
  iVar1 = local_44;
  if (bVar5) {
    if (*ppKVar10 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238bb4;
    pHVar11 = ((*ppKVar10)->fields).PNAAPNFPCPI;
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    RaidMovesChecker__KJLAJDIONCH(iVar1,iVar3,pHVar11,pMVar8);
    if ((__this->fields).GKIMOMJACDC == false) goto LAB_03238b10;
    if (*ppKVar10 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238bb4;
    ppHVar7 = &((*ppKVar10)->fields).NBHGHLIPCAP;
    *ppHVar7 = (HOOAAGABMBL_o *)0x0;
    thunk_FUN_01c20e04(ppHVar7,0);
    pKVar6 = *ppKVar10;
joined_r0x03238b00:
    if (pKVar6 == (KKEKJDLEJIL_o *)0x0) {
LAB_03238bb4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppHVar7 = &(pKVar6->fields).AIDDHEHFBEG;
    *ppHVar7 = (HOOAAGABMBL_o *)0x0;
  }
  else {
    pMVar8 = StringLiteral_11017/*"Ranged"*/;
    bVar5 = RaidMovesChecker__EGLDLNFHJPJ
                      (__this,&local_44,GHAAKPDHIJJ_00,(System_String_o *)StringLiteral_11017/*"Ranged"*/,in_x4)
    ;
    iVar1 = local_44;
    if (bVar5) {
      if (*ppKVar10 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238bb4;
      pHVar11 = ((*ppKVar10)->fields).NBHGHLIPCAP;
      if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      RaidMovesChecker__KJLAJDIONCH(iVar1,iVar3,pHVar11,pMVar8);
      if ((__this->fields).GKIMOMJACDC == false) goto LAB_03238b10;
      local_48 = 0;
      RaidMovesChecker__EGLDLNFHJPJ
                (__this,&local_48,GHAAKPDHIJJ,(System_String_o *)StringLiteral_14870/*"Weapon"*/,in_x4);
      pKVar6 = (__this->fields).MFFEOOLICJE;
      goto joined_r0x03238b00;
    }
    pMVar8 = StringLiteral_8772/*"Magic"*/;
    bVar5 = RaidMovesChecker__EGLDLNFHJPJ
                      (__this,&local_44,GHAAKPDHIJJ_01,(System_String_o *)StringLiteral_8772/*"Magic"*/,in_x4);
    iVar1 = local_44;
    if (!bVar5) goto LAB_03238b10;
    if (*ppKVar10 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238bb4;
    pHVar11 = ((*ppKVar10)->fields).AIDDHEHFBEG;
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    RaidMovesChecker__KJLAJDIONCH(iVar1,iVar3,pHVar11,pMVar8);
    if ((__this->fields).GKIMOMJACDC == false) goto LAB_03238b10;
    local_4c = 0;
    RaidMovesChecker__EGLDLNFHJPJ
              (__this,&local_4c,GHAAKPDHIJJ,(System_String_o *)StringLiteral_14870/*"Weapon"*/,in_x4);
    pKVar6 = (__this->fields).MFFEOOLICJE;
    if (pKVar6 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238bb4;
    ppHVar7 = &(pKVar6->fields).NBHGHLIPCAP;
    *ppHVar7 = (HOOAAGABMBL_o *)0x0;
  }
  thunk_FUN_01c20e04(ppHVar7,0);
LAB_03238b10:
  return *ppKVar10;
}


// ===== private static void NBNHOMIFDNO(bool CJNHFNHJHPE)  [RVA 0x3139030]
// RaidMovesChecker$$NBNHOMIFDNO @ RVA 0x3139030

void RaidMovesChecker__NBNHOMIFDNO(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566713 & 1) == 0) {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04566713 = 1;
    method = extraout_x1;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo,method);
  }
  RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private bool EGLDLNFHJPJ(ref int OGPGLGPMEPD, List<HOOAAGABMBL> GHAAKPDHIJJ, string EBOHIPKPFDJ)  [RVA 0x3138BB8]
// RaidMovesChecker$$EGLDLNFHJPJ @ RVA 0x3138BB8

bool RaidMovesChecker__EGLDLNFHJPJ
               (RaidMovesChecker_o *__this,int32_t *OGPGLGPMEPD,
               System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,
               System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  IGFGDDANEPE_o *pIVar3;
  KKEKJDLEJIL_o *pKVar4;
  MethodInfo *method_00;
  System_String_o *pSVar5;
  
  if ((DAT_04566714 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_18968/*"incorrect type: "*/);
    DAT_04566714 = 1;
  }
  if (GHAAKPDHIJJ == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_03238e0c;
  index = *OGPGLGPMEPD;
  iVar1 = (GHAAKPDHIJJ->fields)._size;
  if (iVar1 <= index) {
    *OGPGLGPMEPD = index - iVar1;
    return false;
  }
  method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
  IKKAMAMLIKA = (HOOAAGABMBL_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,index,
                           (MethodInfo_26E4ADC *)
                           Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_03238e0c;
  pSVar5 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar5,(MethodInfo *)0x0);
  if (pIVar3 == (IGFGDDANEPE_o *)0x0) {
    bVar2 = AMIINPEKKFB__CNDGBHMOMJB(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar5 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar5,(MethodInfo *)0x0);
      if (pIVar3 == (IGFGDDANEPE_o *)0x0) goto LAB_03238e0c;
      goto LAB_03238cd8;
    }
  }
  else {
LAB_03238cd8:
    RaidMovesChecker__GCAIMMCAPFP((RaidMovesChecker_o *)pIVar3,(pIVar3->fields).PCBECBEFJOI,method_00);
  }
  pSVar5 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar5,(MethodInfo *)0x0);
  if (pIVar3 != (IGFGDDANEPE_o *)0x0) {
    (__this->fields).PJKFHNAHDEK = (pIVar3->fields).PCBECBEFJOI;
    thunk_FUN_01c20e04();
    bVar2 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
      if (bVar2) {
        pKVar4 = (__this->fields).MFFEOOLICJE;
        if (pKVar4 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238e0c;
        (pKVar4->fields).NBHGHLIPCAP = (__this->fields).PJKFHNAHDEK;
      }
      else {
        bVar2 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar5 = System_String__Concat(StringLiteral_18968/*"incorrect type: "*/,EBOHIPKPFDJ,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          return true;
        }
        pKVar4 = (__this->fields).MFFEOOLICJE;
        if (pKVar4 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238e0c;
        (pKVar4->fields).AIDDHEHFBEG = (__this->fields).PJKFHNAHDEK;
      }
LAB_03238dac:
      thunk_FUN_01c20e04();
      return true;
    }
    pKVar4 = (__this->fields).MFFEOOLICJE;
    if (pKVar4 != (KKEKJDLEJIL_o *)0x0) {
      (pKVar4->fields).PNAAPNFPCPI = (__this->fields).PJKFHNAHDEK;
      goto LAB_03238dac;
    }
  }
LAB_03238e0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GCAIMMCAPFP(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3139090]
// RaidMovesChecker$$GCAIMMCAPFP @ RVA 0x3139090

void RaidMovesChecker__GCAIMMCAPFP(RaidMovesChecker_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *pGVar2;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  Roster_o *pAVar3;
  
  if ((DAT_04566715 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566715 = 1;
  }
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar3 != (Roster_o *)0x0) &&
      (pGVar2 = (pAVar3->fields).OIDPLCLELEN, pGVar2 != (GGHCLMEFIGO_o *)0x0)) &&
     (GGHCLMEFIGO__BOEFGIBCIIL(pGVar2,IKKAMAMLIKA,true,(MethodInfo *)0x0),
     IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
    ENHJPOHLMCL = NLPJLHOEAOE__JNFIBDBHNOA
                            ((IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    bVar1 = HCAICJLDDJO__OLKMIPIPMIG(ENHJPOHLMCL,(MethodInfo *)0x0);
    if (bVar1) {
      do {
        bVar1 = AMIINPEKKFB__JJFBBLPMPAE(IKKAMAMLIKA,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar3 == (Roster_o *)0x0) ||
           (pGVar2 = (pAVar3->fields).OIDPLCLELEN, pGVar2 == (GGHCLMEFIGO_o *)0x0))
        goto LAB_032391e0;
        GGHCLMEFIGO__BOEFGIBCIIL(pGVar2,IKKAMAMLIKA,true,(MethodInfo *)0x0);
        bVar1 = HCAICJLDDJO__OLKMIPIPMIG(ENHJPOHLMCL,(MethodInfo *)0x0);
      } while (bVar1);
    }
    return;
  }
LAB_032391e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KKEKJDLEJIL EDDJCMBCEDA(KKEKJDLEJIL CGLPGJBDIDL)  [RVA 0x31391E4]
// RaidMovesChecker$$EDDJCMBCEDA @ RVA 0x31391E4

KKEKJDLEJIL_o *
RaidMovesChecker__EDDJCMBCEDA(RaidMovesChecker_o *__this,KKEKJDLEJIL_o *CGLPGJBDIDL,MethodInfo *method)

{
  bool bVar1;
  KKEKJDLEJIL_o *JGHIJMJNJLE;
  System_String_o *DIHAKADKIKM;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  HOOAAGABMBL_o *pHVar2;
  int iVar3;
  
  if ((DAT_04566716 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11045/*"ReDressPlayerModel again, previous weapon item skipped: ""*/);
    FUN_01bab630(&StringLiteral_13839/*"To many redress iterations in row, stopping"*/);
    FUN_01bab630(&StringLiteral_601/*"" due to RaidAnticheatHelper logic"*/);
    DAT_04566716 = 1;
  }
  JGHIJMJNJLE = RaidMovesChecker__JKEODODFIOD(__this,CGLPGJBDIDL,method);
  iVar3 = 0x1e;
  do {
    bVar1 = FIKENOMMMBH__OLAIMOFPEIL(false,(MethodInfo *)0x0);
    if (bVar1) {
      return JGHIJMJNJLE;
    }
    pHVar2 = (__this->fields).PJKFHNAHDEK;
                    /* try { // try from 0323928c to 0333939b has its CatchHandler @ 0323928c
                       catch() { ... } // from try @ 0323928c with catch @ 0323928c
                       catch() { ... } // from try @ 032393c0 with catch @ 0323928c
                       catch() { ... } // from try @ 032393fc with catch @ 0323928c
                       catch() { ... } // from try @ 03239428 with catch @ 0323928c
                       catch() { ... } // from try @ 03239468 with catch @ 0323928c */
    (__this->fields).FDCEMGNCPCI = (__this->fields).FDCEMGNCPCI + 1;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      DIHAKADKIKM = System_String__Concat
                              (StringLiteral_11045/*"ReDressPlayerModel again, previous weapon item skipped: ""*/,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,
                               StringLiteral_601/*"" due to RaidAnticheatHelper logic"*/,(MethodInfo *)0x0);
      BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                    FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      method = (MethodInfo *)0x0;
      BBBLOLJAMJP->m_Items[0] = 8;
      Nekki_Utils_DetailedLog__Warning(DIHAKADKIKM,BBBLOLJAMJP,(MethodInfo *)0x0);
    }
    JGHIJMJNJLE = RaidMovesChecker__JKEODODFIOD(__this,JGHIJMJNJLE,method);
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      RaidMovesChecker__HJNOLAEOPJF((RaidMovesChecker_o *)JGHIJMJNJLE,StringLiteral_13839/*"To many redress iterations in row, stopping"*/,method);
      return CGLPGJBDIDL;
    }
  } while( true );
}


// ===== private static void .cctor()  [RVA 0x3139440]
// RaidMovesChecker$$.cctor @ RVA 0x3139440

void RaidMovesChecker___cctor(MethodInfo *method)

{
  RaidMovesChecker_StaticFields *pNVar1;
  
                    /* catch() { ... } // from try @ 03239424 with catch @ 03239450 */
  if ((DAT_04566717 & 1) == 0) {
                    /* try { // try from 03239460 to 03339467 has its CatchHandler @ 0323947c */
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
                    /* try { // try from 03239468 to 03339473 has its CatchHandler @ 0323928c */
    DAT_04566717 = 1;
  }
                    /* try { // try from 03239474 to 0333947b has its CatchHandler @ 0323947c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03239460 with catch @ 0323947c
                       catch(type#2 @ 00000000) { ... } // from try @ 03239474 with catch @ 0323947c
                        */
  RaidMovesChecker_TypeInfo->static_fields->CBDMFFMCJBK = (RaidMovesChecker_o *)0x0;
  thunk_FUN_01c20e04(RaidMovesChecker_TypeInfo->static_fields,0);
  pNVar1 = RaidMovesChecker_TypeInfo->static_fields;
  pNVar1->KCDGBMIGCND = 0.001;
  pNVar1->CGOPLAKCJDF = 1e+08;
  pNVar1->DPNIFBNEBLB = 0;
  pNVar1->JHMDBNGCKNN = 0;
  pNVar1->DKDPLLLACKC = 0;
  pNVar1->MDCGJFFAJAP = 0.0;
  return;
}


// ===== private void JFHKDNJOIGN()  [RVA 0x3138480]
// RaidMovesChecker$$JFHKDNJOIGN @ RVA 0x3138480

void RaidMovesChecker__JFHKDNJOIGN(RaidMovesChecker_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  DialogsManager_o *pGVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_04566718 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_TypeInfo);
    FUN_01bab630(&MatchingDialog_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo);
    DAT_04566718 = 1;
  }
  pGVar3 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  do {
    if (pGVar3 == (DialogsManager_o *)0x0) {
LAB_032387f8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    x = (pGVar3->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238588;
LAB_032385a0:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032385a0;
LAB_03238588:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_032385a0;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032385e8;
LAB_03238600:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238600;
LAB_032385e8:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03238600;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
                    /* try { // try from 03238630 to 033388bb has its CatchHandler @ 03238630
                       catch() { ... } // from try @ 03238630 with catch @ 03238630
                       catch() { ... } // from try @ 0323893c with catch @ 03238630
                       catch() { ... } // from try @ 03238994 with catch @ 03238630
                       catch() { ... } // from try @ 032389c0 with catch @ 03238630
                       catch() { ... } // from try @ 032389f0 with catch @ 03238630 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238648;
LAB_03238660:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238660;
LAB_03238648:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03238660;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032386a8;
LAB_032386c0:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032386c0;
LAB_032386a8:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_032386c0;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238708;
LAB_03238720:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238720;
LAB_03238708:
      bVar1 = (MatchingDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03238720;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)MatchingDialog_TypeInfo)
      {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      goto LAB_032387f8;
    }
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032387f8;
    (*(x->klass->vtable)._20_Close.methodPtr)(x,(x->klass->vtable)._20_Close.method);
    pGVar3 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  } while( true );
}


// ===== private static void GNIBFOOLMHK()  [RVA 0x31394B4]
// RaidMovesChecker$$GNIBFOOLMHK @ RVA 0x31394B4

void RaidMovesChecker__GNIBFOOLMHK(MethodInfo *method)

{
  if ((DAT_04566719 & 1) == 0) {
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    DAT_04566719 = 1;
  }
  if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KDDOKHLOKMI__IIIFFANNPHP(10000,(MethodInfo *)0x0);
  return;
}


// ===== private string OBKJNJBOBJA(int FEDCJPALCBN, string[] OPAEPDIIOEB)  [RVA 0x3139508]
// RaidMovesChecker$$OBKJNJBOBJA @ RVA 0x3139508

System_String_o *
RaidMovesChecker__OBKJNJBOBJA
          (RaidMovesChecker_o *__this,int32_t FEDCJPALCBN,System_String_array *OPAEPDIIOEB,
          MethodInfo *method)

{
  int DPJIDNBJIBG;
  bool bVar1;
  System_Nullable_bool__o SVar2;
  uint32_t uVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Nullable_float__o SVar6;
  float *pfVar7;
  int32_t *piVar8;
  System_Nullable_int__o SVar9;
  int32_t iVar10;
  undefined8 *puVar11;
  bool_conflict *pbVar12;
  float extraout_s0;
  float fVar13;
  float extraout_s0_00;
  float extraout_s0_01;
  
  if ((DAT_0456671a & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&StringLiteral_19569/*"mad"*/);
    FUN_01bab630(&StringLiteral_17293/*"commanded: _redressPlayer: "*/);
    FUN_01bab630(&StringLiteral_16289/*"acpwh"*/);
    FUN_01bab630(&StringLiteral_19676/*"mid"*/);
    FUN_01bab630(&StringLiteral_16909/*"can't parse command"*/);
    FUN_01bab630(&StringLiteral_16383/*"aiid"*/);
    FUN_01bab630(&StringLiteral_17294/*"commanded: _undressRedundantWeapons: "*/);
    FUN_01bab630(&StringLiteral_17291/*"commanded: _debugMaxItemsPerType: "*/);
    FUN_01bab630(&StringLiteral_16489/*"arcd"*/);
    FUN_01bab630(&StringLiteral_17286/*"commanded: AddedBaseDmgPerHit: "*/);
    FUN_01bab630(&StringLiteral_17290/*"commanded: MinDmg: "*/);
    FUN_01bab630(&StringLiteral_17285/*"commanded: AddClonesPerWeaponHit: "*/);
    FUN_01bab630(&StringLiteral_20625/*"rp"*/);
    FUN_01bab630(&StringLiteral_16269/*"abd"*/);
    FUN_01bab630(&StringLiteral_17292/*"commanded: _gameSpeed: "*/);
    FUN_01bab630(&StringLiteral_17287/*"commanded: AddedRaidChargeDmgPerHit: "*/);
    FUN_01bab630(&StringLiteral_18707/*"gs"*/);
    FUN_01bab630(&StringLiteral_17288/*"commanded: AttackIntervalIdOffset: "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17853/*"dmipt"*/);
    FUN_01bab630(&StringLiteral_17289/*"commanded: MaxDmg: "*/);
    FUN_01bab630(&StringLiteral_21864/*"urp"*/);
    DAT_0456671a = 1;
  }
  pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(FEDCJPALCBN,OPAEPDIIOEB,(MethodInfo *)0x0);
  pSVar5 = StringLiteral_1/*""*/;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar5 = pSVar4;
  }
  if (pSVar5 == (System_String_o *)0x0) goto LAB_03239c08;
  pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
  DPJIDNBJIBG = FEDCJPALCBN + 1;
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar5,(MethodInfo *)0x0);
  if (uVar3 < 0x4e208a30) {
    if (uVar3 < 0x1f47f0eb) {
      if (uVar3 == 0x1cd8c23d) {
        bVar1 = System_String__op_Equality(pSVar5,StringLiteral_17853/*"dmipt"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return StringLiteral_16909/*"can't parse command"*/;
        }
        SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
        if (__this == (RaidMovesChecker_o *)0x0) goto LAB_03239c08;
        iVar10 = SVar9.fields.value;
        if (((ulong)SVar9.fields & 0xff) == 0) {
          iVar10 = -1;
        }
        piVar8 = &(__this->fields).BJEIJEJKHJO;
        *piVar8 = iVar10;
        pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
        puVar11 = &StringLiteral_17291/*"commanded: _debugMaxItemsPerType: "*/;
      }
      else {
        if ((uVar3 != 0x1f47f0ea) ||
           (bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16269/*"abd"*/,(MethodInfo *)0x0), !bVar1
           )) {
          return StringLiteral_16909/*"can't parse command"*/;
        }
        SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
        fVar13 = extraout_s0;
        if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
          fVar13 = (float)thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo);
        }
        pfVar7 = &RaidMovesChecker_TypeInfo->static_fields->MDCGJFFAJAP;
        *pfVar7 = SVar6.fields.value;
        pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
        puVar11 = &StringLiteral_17286/*"commanded: AddedBaseDmgPerHit: "*/;
      }
    }
    else if (uVar3 == 0x3e8f5f02) {
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_21864/*"urp"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909/*"can't parse command"*/;
      }
      SVar2 = AJAMDCEKAFE__FAEBPLENEGK(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      pbVar12 = &(__this->fields).GKIMOMJACDC;
      *pbVar12 = (ushort)SVar2.fields >> 8 != 0;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = System_Boolean__ToString(SUB81(pbVar12,0),(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17294/*"commanded: _undressRedundantWeapons: "*/;
    }
    else if (uVar3 == 0x4d5463ff) {
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_20625/*"rp"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909/*"can't parse command"*/;
      }
      SVar2 = AJAMDCEKAFE__FAEBPLENEGK(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (__this == (RaidMovesChecker_o *)0x0) goto LAB_03239c08;
      pbVar12 = &(__this->fields).FJKKGKCJMGB;
      *pbVar12 = ((ushort)SVar2.fields & 0xff) == 0 || ((ushort)SVar2.fields & 0xff00) != 0;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = System_Boolean__ToString(SUB81(pbVar12,0),(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17293/*"commanded: _redressPlayer: "*/;
    }
    else {
      if (uVar3 != 0x4e208a2f) {
        return StringLiteral_16909/*"can't parse command"*/;
      }
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_18707/*"gs"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909/*"can't parse command"*/;
      }
      SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (__this == (RaidMovesChecker_o *)0x0) {
LAB_03239c08:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar13 = 1.0;
      if (((ulong)SVar6.fields & 0xff) != 0) {
        fVar13 = SVar6.fields.value;
      }
      pfVar7 = &(__this->fields).PACHINKIODC;
      *pfVar7 = fVar13;
      pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
      puVar11 = &StringLiteral_17292/*"commanded: _gameSpeed: "*/;
    }
  }
  else if (uVar3 < 0xbc004aae) {
    if (uVar3 == 0x9ec2ba18) {
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16289/*"acpwh"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909/*"can't parse command"*/;
      }
      SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo);
      }
      piVar8 = &RaidMovesChecker_TypeInfo->static_fields->JHMDBNGCKNN;
      *piVar8 = SVar9.fields.value;
      pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17285/*"commanded: AddClonesPerWeaponHit: "*/;
    }
    else {
      if (uVar3 != 0xbc004aad) {
        return StringLiteral_16909/*"can't parse command"*/;
      }
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16489/*"arcd"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909/*"can't parse command"*/;
      }
      SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo);
      }
      piVar8 = &RaidMovesChecker_TypeInfo->static_fields->DKDPLLLACKC;
      *piVar8 = SVar9.fields.value;
      pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17287/*"commanded: AddedRaidChargeDmgPerHit: "*/;
    }
  }
  else if (uVar3 == 0xc38f3be5) {
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19676/*"mid"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      return StringLiteral_16909/*"can't parse command"*/;
    }
    SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
    fVar13 = extraout_s0_01;
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      fVar13 = (float)thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo);
    }
    pfVar7 = &RaidMovesChecker_TypeInfo->static_fields->KCDGBMIGCND;
    *pfVar7 = SVar6.fields.value;
    pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
    puVar11 = &StringLiteral_17290/*"commanded: MinDmg: "*/;
  }
  else if (uVar3 == 0xe940c3d2) {
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16383/*"aiid"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      return StringLiteral_16909/*"can't parse command"*/;
    }
    SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo);
    }
    piVar8 = &RaidMovesChecker_TypeInfo->static_fields->DPNIFBNEBLB;
    *piVar8 = SVar9.fields.value;
    pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
    puVar11 = &StringLiteral_17288/*"commanded: AttackIntervalIdOffset: "*/;
  }
  else {
    if (uVar3 != 0xf3a30f2d) {
      return StringLiteral_16909/*"can't parse command"*/;
    }
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19569/*"mad"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      return StringLiteral_16909/*"can't parse command"*/;
    }
    SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
    fVar13 = extraout_s0_00;
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      fVar13 = (float)thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo);
    }
    pfVar7 = &RaidMovesChecker_TypeInfo->static_fields->CGOPLAKCJDF;
    *pfVar7 = SVar6.fields.value;
    pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
    puVar11 = &StringLiteral_17289/*"commanded: MaxDmg: "*/;
  }
  pSVar5 = System_String__Concat((System_String_o *)*puVar11,pSVar5,(MethodInfo *)0x0);
  return pSVar5;
}


// ===== public string MADPDGHGHKB(string[] OPAEPDIIOEB)  [RVA 0x3139C0C]
// RaidMovesChecker$$MADPDGHGHKB @ RVA 0x3139C0C

System_String_o *
RaidMovesChecker__MADPDGHGHKB(RaidMovesChecker_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  RaidMovesChecker_c *method_00;
  bool bVar1;
  KKEKJDLEJIL_o **ppKVar2;
  HOOAAGABMBL_o **ppHVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Nullable_float__o SVar6;
  System_Nullable_int__o SVar7;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  int iVar8;
  float fVar9;
  
  if ((DAT_0456671b & 1) == 0) {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&StringLiteral_19959/*"off"*/);
    FUN_01bab630(&StringLiteral_19993/*"on"*/);
    FUN_01bab630(&StringLiteral_21069/*"skipped"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9833/*"On: "*/);
    FUN_01bab630(&StringLiteral_17129/*"com"*/);
    DAT_0456671b = 1;
  }
  (__this->fields).HMDOBHEEHKM = 0;
  (__this->fields).FDCEMGNCPCI = 0;
  (__this->fields).LCJAAPPDFJJ = 0;
  (__this->fields).PACHINKIODC = 1.0;
  (__this->fields).ICOPCAKPPCJ = 1;
  ppKVar2 = &(__this->fields).MFFEOOLICJE;
  *ppKVar2 = (KKEKJDLEJIL_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  (__this->fields).LEDBMKOBNDM = (KJNCNBJIJPC_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  ppHVar3 = &(__this->fields).PJKFHNAHDEK;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  pSVar5 = StringLiteral_1/*""*/;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar5 = pSVar4;
  }
  if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
  method_02 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19959/*"off"*/,(MethodInfo *)0x0);
  if (bVar1) {
    RaidMovesChecker__HJNOLAEOPJF((RaidMovesChecker_o *)(ulong)bVar1,(System_String_o *)0x0,method_02);
    pSVar5 = StringLiteral_19959/*"off"*/;
  }
  else {
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19993/*"on"*/,(MethodInfo *)0x0);
    if (bVar1) {
      SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      fVar9 = 8.0;
      if (((ulong)SVar6.fields & 0xff) != 0) {
        fVar9 = SVar6.fields.value;
      }
      (__this->fields).PACHINKIODC = fVar9;
      SVar7 = AJAMDCEKAFE__NANCFCIGNEE(2,OPAEPDIIOEB,(MethodInfo *)0x0);
      iVar8 = SVar7.fields.value;
      if (((ulong)SVar7.fields & 0xff) == 0) {
        iVar8 = 1;
      }
      (__this->fields).ICOPCAKPPCJ = iVar8;
      SVar7 = AJAMDCEKAFE__NANCFCIGNEE(3,OPAEPDIIOEB,(MethodInfo *)0x0);
      (__this->fields).FDCEMGNCPCI = iVar8 * SVar7.fields.value;
      if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566743 == '\0') {
        FUN_01bab630(&RaidMovesChecker_TypeInfo);
        DAT_04566743 = '\x01';
      }
      if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = RaidMovesChecker_TypeInfo;
      RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField = true;
      RaidMovesChecker__GNIBFOOLMHK((MethodInfo *)method_00);
      pSVar5 = RaidMovesChecker__DDNFHFMBOMD(__this,method_01);
      pSVar5 = System_String__Concat(StringLiteral_9833/*"On: "*/,pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_17129/*"com"*/,(MethodInfo *)0x0);
    pSVar5 = StringLiteral_21069/*"skipped"*/;
    if (bVar1) {
      pSVar5 = RaidMovesChecker__OBKJNJBOBJA(__this,1,OPAEPDIIOEB,in_x3);
      return pSVar5;
    }
  }
  return pSVar5;
}


// ===== private string DDNFHFMBOMD()  [RVA 0x3139EB8]
// RaidMovesChecker$$DDNFHFMBOMD @ RVA 0x3139EB8

System_String_o * RaidMovesChecker__DDNFHFMBOMD(RaidMovesChecker_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  float in_s0;
  float extraout_s0;
  float __this_00;
  float __this_01;
  float __this_02;
  
  if ((DAT_0456671c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    FUN_01bab630(&StringLiteral_110/*"\n_roundIndex: "*/);
    FUN_01bab630(&StringLiteral_87/*"\nMaxDmg: "*/);
    FUN_01bab630(&StringLiteral_74/*"\nAttackIntervalIdOffset: "*/);
    FUN_01bab630(&StringLiteral_109/*"\n_redressPlayer: "*/);
    FUN_01bab630(&StringLiteral_70/*"\nAddedBaseDmgPerHit: "*/);
    FUN_01bab630(&StringLiteral_89/*"\nMinDmg: "*/);
    FUN_01bab630(&StringLiteral_111/*"\n_roundsPerItemChange: "*/);
    FUN_01bab630(&StringLiteral_71/*"\nAddedRaidChargeDmgPerHit: "*/);
    FUN_01bab630(&StringLiteral_112/*"\n_undressRedundantWeapons: "*/);
    FUN_01bab630(&StringLiteral_12386/*"Starting new moves-check session\n"*/);
    FUN_01bab630(&StringLiteral_108/*"\n_gameSpeed: "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    in_s0 = (float)FUN_01bab630(&StringLiteral_107/*"\n_debugMaxItemsPerType: "*/);
    DAT_0456671c = 1;
  }
  pSVar3 = StringLiteral_1/*""*/;
  pSVar2 = System_Single__ToString(in_s0,(MethodInfo *)&(__this->fields).PACHINKIODC);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_108/*"\n_gameSpeed: "*/,pSVar2,(MethodInfo *)0x0);
  iVar1 = (int)__this;
  pSVar2 = System_Int32__ToString(iVar1 + 0x38,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_111/*"\n_roundsPerItemChange: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString(iVar1 + 0x2c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_110/*"\n_roundIndex: "*/,pSVar2,(MethodInfo *)0x0);
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Boolean__ToString((bool)((char)__this + '@'),(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_109/*"\n_redressPlayer: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Boolean__ToString((bool)((char)__this + 'A'),(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_112/*"\n_undressRedundantWeapons: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString(iVar1 + 0x3c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_107/*"\n_debugMaxItemsPerType: "*/,pSVar2,(MethodInfo *)0x0);
  __this_00 = extraout_s0;
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    __this_00 = (float)thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo);
  }
  pSVar2 = System_Single__ToString
                     (__this_00,(MethodInfo *)&RaidMovesChecker_TypeInfo->static_fields->KCDGBMIGCND);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_89/*"\nMinDmg: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Single__ToString
                     (__this_01,(MethodInfo *)&RaidMovesChecker_TypeInfo->static_fields->CGOPLAKCJDF);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_87/*"\nMaxDmg: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString((int)RaidMovesChecker_TypeInfo->static_fields + 0x14,(MethodInfo *)0x0)
  ;
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_71/*"\nAddedRaidChargeDmgPerHit: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Single__ToString
                     (__this_02,(MethodInfo *)&RaidMovesChecker_TypeInfo->static_fields->MDCGJFFAJAP);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_70/*"\nAddedBaseDmgPerHit: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString((int)RaidMovesChecker_TypeInfo->static_fields + 0x1c,(MethodInfo *)0x0)
  ;
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_74/*"\nAttackIntervalIdOffset: "*/,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(StringLiteral_12386/*"Starting new moves-check session\n"*/,pSVar3,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 8;
      Nekki_Utils_DetailedLog__Warning(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void KJLAJDIONCH(int BBKHDEKBBKJ, int HDFIOEIMGED, HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3138E10]
// RaidMovesChecker$$KJLAJDIONCH @ RVA 0x3138E10

void RaidMovesChecker__KJLAJDIONCH
               (int32_t BBKHDEKBBKJ,int32_t HDFIOEIMGED,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  int32_t local_28;
  int32_t iStack_24;
  
  local_28 = HDFIOEIMGED;
  iStack_24 = BBKHDEKBBKJ;
  if ((DAT_0456671d & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_209/*"  global_round_id= "*/);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    FUN_01bab630(&StringLiteral_10934/*"RaidMovesChecker: using "*/);
    FUN_01bab630(&StringLiteral_215/*"  with local_id= "*/);
    DAT_0456671d = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_10934/*"RaidMovesChecker: using "*/;
      thunk_FUN_01c20e04();
      if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_0323902c;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_2088/*": "*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_215/*"  with local_id= "*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04(values->m_Items + 5,pSVar1);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_209/*"  global_round_id= "*/;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  pSVar1 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar1;
                    thunk_FUN_01c20e04();
                    pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                    BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                                  FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                    goto LAB_0323902c;
                    if ((int)BBBLOLJAMJP->max_length != 0) {
                      BBBLOLJAMJP->m_Items[0] = 8;
                      Nekki_Utils_DetailedLog__Warning(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0323902c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OGJOKMNNBPK()  [RVA 0x313A27C]
// RaidMovesChecker$$OGJOKMNNBPK @ RVA 0x313A27C

void RaidMovesChecker__OGJOKMNNBPK(RaidMovesChecker_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_0456671e & 1) == 0) {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_0456671e = 1;
    method = extraout_x1;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04565ff1 = '\x01';
    method = extraout_x1_01;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RaidMovesChecker_TypeInfo,method);
  }
  if (RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    UnityEngine_Time__set_timeScale((__this->fields).PACHINKIODC,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void HJNOLAEOPJF(string EHKEOHNBLCK)  [RVA 0x3139334]
// RaidMovesChecker$$HJNOLAEOPJF @ RVA 0x3139334

void RaidMovesChecker__HJNOLAEOPJF(RaidMovesChecker_o *__this,System_String_o *EHKEOHNBLCK,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_0456671f & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    FUN_01bab630(&StringLiteral_6447/*"Finishing moves-check session"*/);
    DAT_0456671f = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
                    /* try { // try from 0323939c to 033393a3 has its CatchHandler @ 0323940c */
      BBBLOLJAMJP->m_Items[0] = 8;
      if (EHKEOHNBLCK == (System_String_o *)0x0) {
                    /* try { // try from 032393c0 to 033393f3 has its CatchHandler @ 0323928c */
        Nekki_Utils_DetailedLog__Warning(StringLiteral_6447/*"Finishing moves-check session"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 032393b8 to 033393bf has its CatchHandler @ 03239408 */
        Nekki_Utils_DetailedLog__Error(EHKEOHNBLCK,BBBLOLJAMJP,(MethodInfo *)0x0);
      }
      UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
      if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 032393f4 to 033393f7 has its CatchHandler @ 03239404 */
                    /* try { // try from 032393f8 to 033393fb has its CatchHandler @ 03239400 */
      if (DAT_04566743 == '\0') {
                    /* try { // try from 032393fc to 03339423 has its CatchHandler @ 0323928c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032393f8 with catch @ 03239400
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032393f4 with catch @ 03239404
                        */
        FUN_01bab630(&RaidMovesChecker_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032393b8 with catch @ 03239408
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323939c with catch @ 0323940c
                        */
        DAT_04566743 = '\x01';
      }
      if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03239424 to 03339427 has its CatchHandler @ 03239450 */
                    /* try { // try from 03239428 to 0333945f has its CatchHandler @ 0323928c */
      RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField = false;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool PJNBPBDDCEH()  [RVA 0x313A320]
// RaidMovesChecker$$PJNBPBDDCEH @ RVA 0x313A320

bool RaidMovesChecker__PJNBPBDDCEH(MethodInfo *method)

{
  if ((DAT_04566720 & 1) == 0) {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04566720 = 1;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField;
}


// ===== private void .ctor()  [RVA 0x313A378]
// RaidMovesChecker$$.ctor @ RVA 0x313A378

void RaidMovesChecker___ctor(RaidMovesChecker_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04566721 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_NJNCPNBIPCD_LLCONNGHGKD__);
    DAT_04566721 = 1;
  }
  (__this->fields).ICOPCAKPPCJ = 1;
  (__this->fields).BJEIJEJKHJO = -1;
  (__this->fields).FJKKGKCJMGB = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public static RaidMovesChecker AIHNLLGNBLC()  [RVA 0x313A43C]
// RaidMovesChecker$$AIHNLLGNBLC @ RVA 0x313A43C

RaidMovesChecker_o * RaidMovesChecker__AIHNLLGNBLC(MethodInfo *method)

{
  RaidMovesChecker_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566722 & 1) == 0) {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04566722 = 1;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = RaidMovesChecker_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (RaidMovesChecker_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    RaidMovesChecker___ctor(__this,auVar1._8_8_);
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  RaidMovesChecker_TypeInfo->static_fields->CBDMFFMCJBK = __this;
  thunk_FUN_01c20e04(RaidMovesChecker_TypeInfo->static_fields,__this);
  return __this;
}


// ===== public void KDHOEOKEIMP(KDADMJGPAOM LJJOMPLONBH)  [RVA 0x313A4D4]
// RaidMovesChecker$$KDHOEOKEIMP @ RVA 0x313A4D4

void RaidMovesChecker__KDHOEOKEIMP(RaidMovesChecker_o *__this,KDADMJGPAOM_o *LJJOMPLONBH,MethodInfo *method)

{
  int32_t iVar1;
  RaidMovesChecker_c *method_00;
  MethodInfo *in_x3;
  int iVar2;
  KJNCNBJIJPC_o *pKVar3;
  
  if ((DAT_04566723 & 1) == 0) {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04566723 = 1;
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
    iVar2 = (__this->fields).HMDOBHEEHKM;
    if (iVar2 < 1) {
      if (LJJOMPLONBH == (KDADMJGPAOM_o *)0x0) goto LAB_0323a604;
      iVar2 = (LJJOMPLONBH->fields).PDGEHKCPGDK;
      (__this->fields).HMDOBHEEHKM = iVar2;
    }
    pKVar3 = (__this->fields).LEDBMKOBNDM;
    if (pKVar3 != (KJNCNBJIJPC_o *)0x0) {
      if (LJJOMPLONBH != (KDADMJGPAOM_o *)0x0) {
        RaidMovesChecker__AAPDAPFJOCB
                  (__this,(pKVar3->fields).OLGJBKMCGIC + (pKVar3->fields).OJBIFDEEBNO,
                   iVar2 - (LJJOMPLONBH->fields).PDGEHKCPGDK,in_x3);
        iVar1 = (LJJOMPLONBH->fields).PDGEHKCPGDK;
        (__this->fields).LEDBMKOBNDM = (KJNCNBJIJPC_o *)0x0;
        (__this->fields).HMDOBHEEHKM = iVar1;
        thunk_FUN_01c20e04(&__this->fields,0);
        (__this->fields).FDCEMGNCPCI = (__this->fields).FDCEMGNCPCI + 1;
        method_00 = RaidMovesChecker_TypeInfo;
        if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (RaidMovesChecker_c *)thunk_FUN_01ba7564();
        }
        RaidMovesChecker__GNIBFOOLMHK((MethodInfo *)method_00);
        return;
      }
LAB_0323a604:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void AAPDAPFJOCB(int PAJIGEFDBOK, int OBGCGDAGJBK)  [RVA 0x313A608]
// RaidMovesChecker$$AAPDAPFJOCB @ RVA 0x313A608

void RaidMovesChecker__AAPDAPFJOCB
               (RaidMovesChecker_o *__this,int32_t PAJIGEFDBOK,int32_t OBGCGDAGJBK,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  KKEKJDLEJIL_o *pKVar3;
  HOOAAGABMBL_o *pHVar4;
  int32_t *piVar5;
  int32_t local_28;
  int32_t iStack_24;
  
  method_00 = (MethodInfo *)(ulong)(uint)OBGCGDAGJBK;
  local_28 = OBGCGDAGJBK;
  iStack_24 = PAJIGEFDBOK;
  if ((DAT_04566724 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_11855/*"Server.dmg != Client.dmg:  client: "*/);
    FUN_01bab630(&StringLiteral_90/*"\nMissile: "*/);
    FUN_01bab630(&StringLiteral_214/*"  total errors: "*/);
    FUN_01bab630(&StringLiteral_213/*"  server: "*/);
    FUN_01bab630(&StringLiteral_105/*"\nWeapon: "*/);
    FUN_01bab630(&StringLiteral_86/*"\nMagic: "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566724 = 1;
  }
  if (((PAJIGEFDBOK == OBGCGDAGJBK) || ((__this->fields).MFFEOOLICJE == (KKEKJDLEJIL_o *)0x0)) ||
     ((__this->fields).LEDBMKOBNDM == (KJNCNBJIJPC_o *)0x0)) {
    return;
  }
  piVar5 = &(__this->fields).LCJAAPPDFJJ;
  *piVar5 = *piVar5 + 1;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (values == (System_String_array *)0x0) goto LAB_0323a964;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = StringLiteral_11855/*"Server.dmg != Client.dmg:  client: "*/;
    thunk_FUN_01c20e04(values->m_Items);
    pSVar2 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar2;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar2);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_213/*"  server: "*/;
        thunk_FUN_01c20e04(values->m_Items + 2);
        pSVar2 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar2;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar2);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = StringLiteral_214/*"  total errors: "*/;
            thunk_FUN_01c20e04(values->m_Items + 4);
            pSVar2 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar2;
              thunk_FUN_01c20e04(values->m_Items + 5,pSVar2);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = StringLiteral_105/*"\nWeapon: "*/;
                thunk_FUN_01c20e04();
                pKVar3 = (__this->fields).MFFEOOLICJE;
                if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_0323a964;
                pHVar4 = (pKVar3->fields).PNAAPNFPCPI;
                ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
                if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                  ppSVar1 = &(pHVar4->fields)._COIPKAKHDFP_k__BackingField;
                }
                if (7 < (uint)values->max_length) {
                  values->m_Items[7] = *ppSVar1;
                  thunk_FUN_01c20e04(values->m_Items + 7);
                  if (8 < (uint)values->max_length) {
                    values->m_Items[8] = StringLiteral_90/*"\nMissile: "*/;
                    thunk_FUN_01c20e04();
                    pKVar3 = (__this->fields).MFFEOOLICJE;
                    if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_0323a964;
                    pHVar4 = (pKVar3->fields).NBHGHLIPCAP;
                    ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
                    if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                      ppSVar1 = &(pHVar4->fields)._COIPKAKHDFP_k__BackingField;
                    }
                    if (9 < (uint)values->max_length) {
                      values->m_Items[9] = *ppSVar1;
                      thunk_FUN_01c20e04(values->m_Items + 9);
                      if (10 < (uint)values->max_length) {
                        values->m_Items[10] = StringLiteral_86/*"\nMagic: "*/;
                        thunk_FUN_01c20e04();
                        pKVar3 = (__this->fields).MFFEOOLICJE;
                        if (pKVar3 == (KKEKJDLEJIL_o *)0x0) {
LAB_0323a964:
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        pHVar4 = (pKVar3->fields).AIDDHEHFBEG;
                        ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
                        if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                          ppSVar1 = &(pHVar4->fields)._COIPKAKHDFP_k__BackingField;
                        }
                        if (0xb < (uint)values->max_length) {
                          values->m_Items[0xb] = *ppSVar1;
                          thunk_FUN_01c20e04();
                          pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                          pSVar2 = RaidMovesChecker__HJGHHJEKPKD(__this,pSVar2,method_00);
                          BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                                        FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,
                                                     1);
                          if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                          goto LAB_0323a964;
                          if ((int)BBBLOLJAMJP->max_length != 0) {
                            BBBLOLJAMJP->m_Items[0] = 8;
                            Nekki_Utils_DetailedLog__Error(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private string HJGHHJEKPKD(string ALHDMEKMLPH)  [RVA 0x313A968]
// RaidMovesChecker$$HJGHHJEKPKD @ RVA 0x313A968

/* WARNING: Removing unreachable block (ram,0x0323aca4) */

System_String_o *
RaidMovesChecker__HJGHHJEKPKD(RaidMovesChecker_o *__this,System_String_o *ALHDMEKMLPH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Text_StringBuilder_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  System_String_o *pSVar7;
  KJNCNBJIJPC_o *pKVar8;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 local_58;
  
  if ((DAT_04566725 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_425/*" frm= "*/);
    FUN_01bab630(&StringLiteral_392/*" dmg= "*/);
    FUN_01bab630(&StringLiteral_16531/*"att_int_id= "*/);
    DAT_04566725 = 1;
  }
  local_58 = (Il2CppMethodPointer)0x0;
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(__this_00,ALHDMEKMLPH,(MethodInfo *)0x0);
    pKVar8 = (__this->fields).LEDBMKOBNDM;
    if ((pKVar8 != (KJNCNBJIJPC_o *)0x0) &&
       (__this_01 = (pKVar8->fields).EACBGCPPLBO,
       __this_01 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)) {
      pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                          Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_GetEnumerator__
                         );
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar9 = pSVar4->klass;
        uVar1._0_1_ = (pSVar9->_2).rank;
        uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar5 = pSVar9->vtable + *piVar11;
              goto LAB_0323aae8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_0323aae8:
        uVar10 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
        if ((uVar10 & 1) == 0) {
          if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_0323ac68;
          pSVar9 = pSVar4->klass;
          uVar3._0_1_ = (pSVar9->_2).rank;
          uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 == 0) goto LAB_0323ac40;
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          goto LAB_0323ac28;
        }
        pSVar9 = pSVar4->klass;
        uVar2._0_1_ = (pSVar9->_2).rank;
        uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerator<IHMIMECHIAN>_TypeInfo) {
              pVVar5 = pSVar9->vtable + *piVar11;
              goto LAB_0323ab44;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<IHMIMECHIAN>_TypeInfo,0)
        ;
LAB_0323ab44:
        lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
        System_Text_StringBuilder__Append(__this_00,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        local_58._4_4_ = *(undefined4 *)(lVar6 + 0x1c);
        pSVar7 = System_Int32__ToString((int)&local_58 + 4,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat(StringLiteral_16531/*"att_int_id= "*/,pSVar7,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar7,(MethodInfo *)0x0);
        local_58 = (Il2CppMethodPointer)CONCAT44(local_58._4_4_,*(float *)(lVar6 + 0x24));
        pSVar7 = System_Single__ToString(*(float *)(lVar6 + 0x24),(MethodInfo *)&local_58);
        pSVar7 = System_String__Concat(StringLiteral_392/*" dmg= "*/,pSVar7,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar7,(MethodInfo *)0x0);
        local_58 = (Il2CppMethodPointer)CONCAT44(*(undefined4 *)(lVar6 + 0x18),(undefined4)local_58)
        ;
        pSVar7 = System_Int32__ToString((int)&local_58 + 4,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat(StringLiteral_425/*" frm= "*/,pSVar7,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar7,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0323ac28:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar9->vtable + *piVar11;
      goto LAB_0323ac5c;
    }
  }
LAB_0323ac40:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0323ac5c:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
LAB_0323ac68:
  pSVar7 = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pSVar7;
}

