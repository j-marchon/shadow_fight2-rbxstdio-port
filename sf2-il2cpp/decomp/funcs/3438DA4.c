// Nekki.SF2.GUI.Shop.ShopScene$$EOIIDEJIBNC @ RVA 0x3438DA4

void Nekki_SF2_GUI_Shop_ShopScene__EOIIDEJIBNC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t DPCEFBCDHPA;
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  DEKKGJNMFEB_o *__this_02;
  GGLKHCAIGDI_o *pGVar3;
  BFBONKPKBNL_o *GMCFOKPADCA;
  System_Action_object__o *CGLKNMPIAJF;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t JEAJGNNOONA;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  ACHLOMELAJE_o *pAVar6;
  HOOAAGABMBL_o *pHVar7;
  System_String_o *JEPIGCLHAMI;
  
  if ((DAT_045681af & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_OMOHFLMFCOG__);
    DAT_045681af = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
      (pNVar4 = (__this->fields)._ForgePanel, pNVar4 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0
      )) && (__this_00 = (pAVar6->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(pNVar4->fields).PCBECBEFJOI,(MethodInfo *)0x0);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03538e94 to 03638e9b has its CatchHandler @ 03538ff4 */
      thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo);
    }
    __this_02 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    pNVar4 = (__this->fields)._ForgePanel;
    if ((pNVar4 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) &&
       (pHVar7 = (pNVar4->fields).PCBECBEFJOI, pHVar7 != (HOOAAGABMBL_o *)0x0)) {
      JEPIGCLHAMI = (pHVar7->fields)._COIPKAKHDFP_k__BackingField;
                    /* try { // try from 03538ebc to 03638ebf has its CatchHandler @ 03538ff0 */
      pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe(pNVar4,(MethodInfo *)0x0);
                    /* try { // try from 03538ed0 to 03638f1b has its CatchHandler @ 03538ff8 */
      if (((pGVar3 != (GGLKHCAIGDI_o *)0x0) &&
          ((__this_02 != (DEKKGJNMFEB_o *)0x0 &&
           (GMCFOKPADCA = DEKKGJNMFEB__NCFEMNMDBMJ
                                    (__this_02,JEPIGCLHAMI,
                                     (pGVar3->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0
                                    ), __this_01 != (IGFGDDANEPE_o *)0x0)))) &&
         (pHVar7 = IGFGDDANEPE__JPNNODJPOCL(__this_01,false,(MethodInfo *)0x0),
         pHVar7 != (HOOAAGABMBL_o *)0x0)) {
        DPCEFBCDHPA = (pHVar7->fields)._JDEHPJEIOCI_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03538f1c to 03638f6f has its CatchHandler @ 03538aa8 */
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
          iVar2 = ACHLOMELAJE__EOEAKGGDBFH(pAVar6,(MethodInfo *)0x0);
          pSVar5 = (__this_01->fields).PAPANCDPPIF;
          if (pSVar5 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
            if ((pSVar5->fields)._size < 1) {
                    /* catch() { ... } // from try @ 03538d14 with catch @ 03538f90 */
                    /* catch() { ... } // from try @ 03538f78 with catch @ 03538f94
                       catch() { ... } // from try @ 03538f80 with catch @ 03538f94 */
              JEAJGNNOONA = 3;
              if (iVar2 <= DPCEFBCDHPA) {
                JEAJGNNOONA = 0;
              }
            }
            else {
              pNVar4 = (__this->fields)._ForgePanel;
              if ((pNVar4 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) ||
                 (pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                                     (pNVar4,(MethodInfo *)0x0), pGVar3 == (GGLKHCAIGDI_o *)0x0))
              goto LAB_03539010;
                    /* try { // try from 03538f70 to 03638f73 has its CatchHandler @ 03538fec */
                    /* try { // try from 03538f74 to 03638f77 has its CatchHandler @ 03538f88 */
                    /* try { // try from 03538f78 to 03638f7b has its CatchHandler @ 03538f94 */
                    /* try { // try from 03538f7c to 03638f7f has its CatchHandler @ 03538f84 */
              bVar1 = GGLKHCAIGDI__PCDGMIBPFEO(pGVar3,__this_01,DPCEFBCDHPA,(MethodInfo *)0x0);
              JEAJGNNOONA = 1;
                    /* try { // try from 03538f80 to 03638f83 has its CatchHandler @ 03538f94 */
                    /* catch() { ... } // from try @ 03538f7c with catch @ 03538f84
                       try { // try from 03538f84 to 03638fab has its CatchHandler @ 03538aa8 */
                    /* catch() { ... } // from try @ 03538f74 with catch @ 03538f88 */
              if (bVar1) {
                JEAJGNNOONA = 2;
              }
            }
            pNVar4 = (__this->fields)._ForgePanel;
            if (pNVar4 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                    /* try { // try from 03538fac to 03638faf has its CatchHandler @ 03538fd0 */
                    /* try { // try from 03538fb0 to 03638fd7 has its CatchHandler @ 03538aa8 */
              pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                                 (pNVar4,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Shop_Forge_ForgePanel__ScrollToRecipe(pNVar4,pGVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03538fac with catch @ 03538fd0 */
              CGLKNMPIAJF = (System_Action_object__o *)
                            thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* try { // try from 03538fd8 to 03638feb has its CatchHandler @ 03539054 */
              System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 03538f70 with catch @ 03538fec
                       try { // try from 03538fec to 03639007 has its CatchHandler @ 03538aa8 */
                    /* catch() { ... } // from try @ 03538ebc with catch @ 03538ff0 */
                    /* catch() { ... } // from try @ 03538e94 with catch @ 03538ff4 */
                    /* catch() { ... } // from try @ 03538ed0 with catch @ 03538ff8 */
                    /* try { // try from 03539008 to 0363900b has its CatchHandler @ 03539030 */
                    /* try { // try from 0353900c to 03639037 has its CatchHandler @ 03538aa8 */
              JJPNLEPEAFM__CFOHCDKCGOG(GMCFOKPADCA,JEAJGNNOONA,CGLKNMPIAJF,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03539010:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

