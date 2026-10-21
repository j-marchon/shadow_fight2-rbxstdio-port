// FPLCEOJCPOD$$KNMENIBLFGF @ RVA 0x31C62A4

bool FPLCEOJCPOD__KNMENIBLFGF
               (FPLCEOJCPOD_o *__this,System_String_o *PMACBPAMPJA,int32_t *KENFFDHLNDA,
               bool FGAKEDKLCBH,bool MJINKNBHFAC,MethodInfo *method)

{
  int32_t HGDNFDIMIOP;
  bool bVar1;
  int32_t iVar2;
  int32_t JLAFGLDIFOC;
  MNKGBNEMPCI_o *pMVar3;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *pSVar4;
  ACHLOMELAJE_o *__this_00;
  PFMHIGFMAJJ_o *pPVar5;
  System_String_o *KGLJICLJHEL;
  System_String_o *KGLJICLJHEL_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar6;
  
                    /* try { // try from 032c62bc to 033c62bf has its CatchHandler @ 032c67e4 */
                    /* try { // try from 032c62c0 to 033c62d3 has its CatchHandler @ 032c67e8 */
                    /* try { // try from 032c62e0 to 033c62e7 has its CatchHandler @ 032c67bc */
                    /* try { // try from 032c62f8 to 033c62ff has its CatchHandler @ 032c67cc */
  KGLJICLJHEL = PMACBPAMPJA;
  while( true ) {
                    /* try { // try from 032c6304 to 033c630b has its CatchHandler @ 032c67d4 */
    if ((DAT_04566c31 & 1) == 0) {
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_ContainsKey__)
      ;
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Item__);
                    /* try { // try from 032c631c to 033c6323 has its CatchHandler @ 032c67b8 */
      FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 032c6324 to 033c6333 has its CatchHandler @ 032c67dc */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04566c31 = 1;
    }
    KGLJICLJHEL_00 = PMACBPAMPJA;
    if (!MJINKNBHFAC) break;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032c633c to 033c6343 has its CatchHandler @ 032c67c4 */
      thunk_FUN_01ba7564();
    }
    pMVar3 = MGNPHCAAEIO__CNMOHIPAEPD(KGLJICLJHEL,(MethodInfo *)0x0);
    KGLJICLJHEL_00 = KGLJICLJHEL;
    if (pMVar3 == (MNKGBNEMPCI_o *)0x0) break;
    KGLJICLJHEL = (pMVar3->fields).NEFMLODIKPE;
                    /* try { // try from 032c6354 to 033c635b has its CatchHandler @ 032c67c0 */
  }
  if (KGLJICLJHEL_00 == (System_String_o *)0x0) {
    return false;
  }
                    /* try { // try from 032c6360 to 033c6367 has its CatchHandler @ 032c67d0 */
  pSVar4 = (__this->fields).BJJAPALEEBD;
  if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                       (Il2CppObject *)KGLJICLJHEL_00,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_ContainsKey__
                      );
    if (!bVar1) {
      return false;
    }
                    /* try { // try from 032c6378 to 033c637f has its CatchHandler @ 032c67c8 */
    pSVar4 = (__this->fields).BJJAPALEEBD;
    if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
                    /* try { // try from 032c6380 to 033c638f has its CatchHandler @ 032c67d8 */
      CVar6 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                         (Il2CppObject *)KGLJICLJHEL_00,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Item__
                        );
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CVar6,(MethodInfo *)0x0);
                    /* try { // try from 032c6394 to 033c63b3 has its CatchHandler @ 032c67e0 */
      if (FGAKEDKLCBH) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 032c63b4 to 033c67a3 has its CatchHandler @ 032c5f4c */
        pMVar3 = MGNPHCAAEIO__CNMOHIPAEPD(KGLJICLJHEL_00,(MethodInfo *)0x0);
        if (pMVar3 != (MNKGBNEMPCI_o *)0x0) {
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
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 != (ACHLOMELAJE_o *)0x0) {
            JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
            }
            if (DAT_04566c73 == '\0') {
              FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
              DAT_04566c73 = '\x01';
            }
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pPVar5 = MGNPHCAAEIO_TypeInfo->static_fields->KLJKIHCIGGI;
            if (pPVar5 != (PFMHIGFMAJJ_o *)0x0) {
              HGDNFDIMIOP = (pPVar5->fields).MCGBOKPNBLD;
              if (DAT_04566c73 == '\0') {
                FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                DAT_04566c73 = '\x01';
              }
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pPVar5 = MGNPHCAAEIO_TypeInfo->static_fields->KLJKIHCIGGI;
              if (pPVar5 != (PFMHIGFMAJJ_o *)0x0) {
                iVar2 = MNKGBNEMPCI__PPOKEOHAHFG
                                  (pMVar3,(double)iVar2,JLAFGLDIFOC,HGDNFDIMIOP,
                                   (double)(pPVar5->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
                *KENFFDHLNDA = iVar2;
                pSVar4 = (__this->fields).BJJAPALEEBD;
                if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
                  bVar1 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__ContainsKey
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4
                                     ,(Il2CppObject *)(pMVar3->fields).NEFMLODIKPE,
                                     Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_ContainsKey__
                                    );
                  if (!bVar1) {
                    return true;
                  }
                  pSVar4 = (__this->fields).BJJAPALEEBD;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0)
                  {
                    CVar6 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__get_Item
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                       pSVar4,(Il2CppObject *)(pMVar3->fields).NEFMLODIKPE,
                                       Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Item__
                                      );
                    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                      (CVar6,(MethodInfo *)0x0);
                    *KENFFDHLNDA = *KENFFDHLNDA + iVar2;
                    return true;
                  }
                }
              }
            }
          }
          goto LAB_032c654c;
        }
      }
      *KENFFDHLNDA = iVar2;
      return true;
    }
  }
LAB_032c654c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

