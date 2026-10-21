// IPODBIAMIGB$$DLMMOLDNHKG @ RVA 0x3050964

void IPODBIAMIGB__DLMMOLDNHKG(IPODBIAMIGB_o *__this,HNOIHFFENNC_o *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  long lVar2;
  VirtualInvokeData *pVVar3;
  FAAIAHIFFNG_c *pFVar4;
  ulong uVar5;
  int32_t *piVar6;
  FAAIAHIFFNG_o *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint64_t uVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  undefined8 uVar14;
  System_String_o *pSVar15;
  System_String_o *local_80;
  System_String_o *pSStack_78;
  undefined8 uStack_70;
  System_String_o *pSStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint64_t uStack_50;
  System_String_o *pSStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((DAT_04565e4b & 1) == 0) {
    FUN_01bab630(&FAAIAHIFFNG_TypeInfo);
    DAT_04565e4b = 1;
  }
  uVar9._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.lo;
  uVar9._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.mid;
  uVar8._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.flags;
  uVar8._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.hi;
  pSVar11 = (OPAEPDIIOEB->fields).IEINLOAOCLD;
  uVar10 = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE;
  pSVar13 = (OPAEPDIIOEB->fields).ODNJEBGJAAD;
  pSVar12 = (OPAEPDIIOEB->fields).IIHFLLPKBJI;
  pSVar15 = (OPAEPDIIOEB->fields).AIKDONIPAMF;
  uVar14 = *(undefined8 *)&(OPAEPDIIOEB->fields).PIGNHMJGDHM;
  pFVar7 = (__this->fields).OGBEFDMAOCO;
  if (pFVar7 == (FAAIAHIFFNG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pFVar4 = pFVar7->klass;
  uVar1._0_1_ = (pFVar4->_2).rank;
  uVar1._1_1_ = (pFVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pFVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)FAAIAHIFFNG_TypeInfo) {
        pVVar3 = pFVar4->vtable + *piVar6;
        goto LAB_03150a24;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pFVar7,FAAIAHIFFNG_TypeInfo,0);
LAB_03150a24:
  local_80 = pSVar12;
  pSStack_78 = pSVar13;
  uStack_70 = uVar14;
  pSStack_68 = pSVar15;
  local_60 = uVar8;
  uStack_58 = uVar9;
  uStack_50 = uVar10;
  pSStack_48 = pSVar11;
  (*pVVar3->methodPtr)(pFVar7,&local_80,pVVar3->method);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

