// Nekki.SF2.GUI.Shop.ShopBottomPanel$$CJFJPCHDLAB @ RVA 0x330014C

int32_t Nekki_SF2_GUI_Shop_ShopBottomPanel__CJFJPCHDLAB
                  (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,int32_t HIIGJGLEOFH,
                  MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  KKEKKPIDGBK_o *pKVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *ACCIHBHMFPN;
  KKEKKPIDGBK_c *pKVar7;
  ulong uVar8;
  int32_t *piVar9;
  DOPEEDABNEK_o *__this_00;
  
  if ((DAT_04567713 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567713 = 1;
  }
  if (HIIGJGLEOFH == 7) {
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
    if (bVar2) {
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
        pKVar7 = pKVar5->klass;
        uVar1._0_1_ = (pKVar7->_2).rank;
        uVar1._1_1_ = (pKVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pKVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar6 = pKVar7->vtable + (*piVar9 + 6);
              goto LAB_034002b0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,6);
LAB_034002b0:
        uVar4 = (*pVVar6->methodPtr)(pKVar5,pVVar6->method);
        return -(uVar4 & 1);
      }
      goto LAB_034002cc;
    }
  }
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
  ACCIHBHMFPN = BKBFFEJEBAI__BMDJPMKDNNF(HIIGJGLEOFH,(MethodInfo *)0x0);
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
                    /* try { // try from 03400290 to 035002b7 has its CatchHandler @ 03400620 */
    iVar3 = DOPEEDABNEK__CBCCEHFONKC(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
    return iVar3;
  }
LAB_034002cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

