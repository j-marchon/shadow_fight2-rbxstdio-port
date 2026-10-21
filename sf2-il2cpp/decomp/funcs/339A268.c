// HCAICJLDDJO$$MPOLDGKHPMF @ RVA 0x339A268

void HCAICJLDDJO__MPOLDGKHPMF(int32_t HONPNKFABKF,System_String_o *JHDEDPMNOOJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t ELHAJJAHLHM;
  int iVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  FFHKCJAOPLI_o *__this;
  DOPEEDABNEK_o *__this_00;
  System_Collections_Generic_IList_HOOAAGABMBL__o *pSVar6;
  VirtualInvokeData *pVVar7;
  HOOAAGABMBL_o **ppHVar8;
  NDPMLPGANCI_o *__this_01;
  PKHMIGFEJCL_o *pPVar9;
  System_Collections_Generic_IList_HOOAAGABMBL__c *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  
                    /* try { // try from 0349a278 to 0359a27f has its CatchHandler @ 0349a2e8 */
  if ((DAT_04567c72 & 1) == 0) {
                    /* try { // try from 0349a288 to 0359a29f has its CatchHandler @ 0349a2e4 */
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 0349a2a0 to 0359a2ff has its CatchHandler @ 0349a1c4 */
    FUN_01bab630(&System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c72 = 1;
  }
  pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar5 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (pPVar9 = (pNVar5->fields).QuestParameters, pPVar9 == (PKHMIGFEJCL_o *)0x0)) goto LAB_0349a4f0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349a288 with catch @ 0349a2e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349a278 with catch @ 0349a2e8
                        */
  ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((pPVar9->fields).CHFDDNODLGP,(MethodInfo *)0x0);
                    /* try { // try from 0349a300 to 0359a303 has its CatchHandler @ 0349a32c */
                    /* try { // try from 0349a304 to 0359a33b has its CatchHandler @ 0349a1c4 */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  MGNPHCAAEIO__BIFPGEGFDLK(ELHAJJAHLHM,HONPNKFABKF,(MethodInfo *)0x0);
  __this = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                    /* catch() { ... } // from try @ 0349a300 with catch @ 0349a32c */
                    /* try { // try from 0349a33c to 0359a343 has its CatchHandler @ 0349a358 */
                    /* try { // try from 0349a344 to 0359a34f has its CatchHandler @ 0349a1c4 */
  FFHKCJAOPLI___ctor(__this,HONPNKFABKF,(HOOAAGABMBL_o *)0x0,(System_String_o *)0x0,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0349a350 to 0359a357 has its CatchHandler @ 0349a358 */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(JHDEDPMNOOJ,(MethodInfo *)0x0);
  if (!bVar3) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0349a33c with catch @ 0349a358
                       catch(type#2 @ 00000000) { ... } // from try @ 0349a350 with catch @ 0349a358
                        */
    if (HONPNKFABKF == 8) {
      if (__this == (FFHKCJAOPLI_o *)0x0) goto LAB_0349a4f0;
      ppHVar8 = (HOOAAGABMBL_o **)&(__this->fields).JNNGDLLCHAG;
      *ppHVar8 = (HOOAAGABMBL_o *)JHDEDPMNOOJ;
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if ((__this_00 == (DOPEEDABNEK_o *)0x0) ||
         (pSVar6 = DOPEEDABNEK__FEHJLBEGAPO(__this_00,JHDEDPMNOOJ,(MethodInfo *)0x0),
         pSVar6 == (System_Collections_Generic_IList_HOOAAGABMBL__o *)0x0)) goto LAB_0349a4f0;
      pSVar10 = pSVar6->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar12 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
            pVVar7 = pSVar10->vtable + *piVar12;
            goto LAB_0349a434;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(pSVar6,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo,0);
LAB_0349a434:
      iVar4 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if (iVar4 < 1) goto LAB_0349a4c0;
      pSVar10 = pSVar6->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar12 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo) {
            pVVar7 = pSVar10->vtable + *piVar12;
            goto LAB_0349a49c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(pSVar6,System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo,0);
LAB_0349a49c:
      JHDEDPMNOOJ = (System_String_o *)(*pVVar7->methodPtr)(pSVar6,0,pVVar7->method);
      if (__this == (FFHKCJAOPLI_o *)0x0) goto LAB_0349a4f0;
      ppHVar8 = &(__this->fields).CJLNOJMBNPN;
      *ppHVar8 = (HOOAAGABMBL_o *)JHDEDPMNOOJ;
    }
    thunk_FUN_01c20e04(ppHVar8,JHDEDPMNOOJ);
  }
LAB_0349a4c0:
  __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_01 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_01,4,(Il2CppObject *)__this,(System_Action_object__o *)0x0,true,
               (MethodInfo *)0x0);
    return;
  }
LAB_0349a4f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

