// HJPEKDOPBHN$$OOCIJPLODLJ @ RVA 0x34A2278

bool HJPEKDOPBHN__OOCIJPLODLJ(MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  GCPFDLNAFDF_o *pGVar5;
  VirtualInvokeData *pVVar6;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE;
  
  if ((DAT_045684a8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    DAT_045684a8 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar5 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar5 == (GCPFDLNAFDF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pGVar7 = pGVar5->klass;
  uVar1._0_1_ = (pGVar7->_2).rank;
  uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)KADDELABILH_TypeInfo) {
        pVVar6 = pGVar7->vtable + (*piVar9 + 4);
        goto LAB_035a2340;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pGVar5,KADDELABILH_TypeInfo,4);
LAB_035a2340:
  CJNHFNHJHPE.fields =
       (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
       (*pVVar6->methodPtr)(pGVar5,pVVar6->method);
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (HJPEKDOPBHN_TypeInfo->static_fields->MJEPNDCEBCK).fields,(MethodInfo *)0x0);
  if (iVar4 < iVar3) {
    bVar2 = false;
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (HJPEKDOPBHN_TypeInfo->static_fields->ENCOAOMGLKD).fields,(MethodInfo *)0x0);
    bVar2 = iVar4 <= iVar3;
  }
  return bVar2;
}

