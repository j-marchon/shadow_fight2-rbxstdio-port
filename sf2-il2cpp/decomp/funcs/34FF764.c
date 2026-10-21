// LHKALFIIJKB$$PLNBDGAOAMD @ RVA 0x34FF764

void LHKALFIIJKB__PLNBDGAOAMD(MethodInfo *method)

{
  bool bVar1;
  LHKALFIIJKB_c *pLVar2;
  long lVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  MethodInfo *method_00;
  undefined8 extraout_x1;
  MethodInfo *method_01;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_04568847 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_670);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_671);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_672);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_673);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568847 = 1;
  }
  pLVar2 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    pLVar2 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  bVar1 = LHKALFIIJKB__AAMOJIKAADG((MethodInfo *)pLVar2);
  auVar11._1_7_ = 0;
  auVar11[0] = bVar1;
  auVar11._8_8_ = extraout_x1;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    auVar11 = thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  if (!bVar1) {
    LHKALFIIJKB__FKPLMPKAECO(false,auVar11._8_8_);
    LHKALFIIJKB__PGLPDFKGFGG(method_00);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_670,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_671,(MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    LHKALFIIJKB__LJGOKKLMLNN(pSVar6,method_01);
    return;
  }
  LHKALFIIJKB__GKJMHPMANGK(auVar11._0_8_);
  lVar3 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  plVar10 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_672,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_673,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar3 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(HCOEEOMMEFL_c **)(piVar9 + -2) == HCOEEOMMEFL_TypeInfo) {
        puVar7 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_035ff998;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01b81914(plVar10,HCOEEOMMEFL_TypeInfo,1);
LAB_035ff998:
  (*(code *)*puVar7)(plVar10,pSVar6,0,puVar7[1]);
  if (DAT_04568907 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568907 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar2 = LHKALFIIJKB_TypeInfo;
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  LHKALFIIJKB__MDNKBEAMMFO((MethodInfo *)pLVar2);
  return;
}

