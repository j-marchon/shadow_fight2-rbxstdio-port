// MGNPHCAAEIO.LGJODJDHCJF$$HNIHOIAMDPC @ RVA 0x340EE08

/* WARNING: Removing unreachable block (ram,0x0350f2c4) */
/* WARNING: Removing unreachable block (ram,0x0350f050) */
/* WARNING: Removing unreachable block (ram,0x0350f2a4) */
/* WARNING: Removing unreachable block (ram,0x0350f068) */
/* WARNING: Removing unreachable block (ram,0x0350f298) */
/* WARNING: Removing unreachable block (ram,0x0350f088) */
/* WARNING: Removing unreachable block (ram,0x0350f29c) */
/* WARNING: Removing unreachable block (ram,0x0350f0ac) */
/* WARNING: Removing unreachable block (ram,0x0350f2b4) */
/* WARNING: Removing unreachable block (ram,0x0350f0e0) */
/* WARNING: Removing unreachable block (ram,0x0350f2a8) */
/* WARNING: Removing unreachable block (ram,0x0350f118) */
/* WARNING: Removing unreachable block (ram,0x0350f2b0) */
/* WARNING: Removing unreachable block (ram,0x0350f158) */
/* WARNING: Removing unreachable block (ram,0x0350f180) */
/* WARNING: Removing unreachable block (ram,0x0350f188) */
/* WARNING: Removing unreachable block (ram,0x0350f2ac) */
/* WARNING: Removing unreachable block (ram,0x0350f194) */
/* WARNING: Removing unreachable block (ram,0x0350f2b8) */
/* WARNING: Removing unreachable block (ram,0x0350f1ac) */
/* WARNING: Removing unreachable block (ram,0x0350f1e0) */
/* WARNING: Removing unreachable block (ram,0x0350f1c0) */

void MGNPHCAAEIO_LGJODJDHCJF__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  ushort uVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  undefined8 *puVar5;
  long *plVar6;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *pSVar7;
  System_Collections_IEnumerator_c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_0456806b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_IEKBEIOCOPO_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8310);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14891);
    DAT_0456806b = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_LGJODJDHCJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_LGJODJDHCJF_TypeInfo,method);
  }
  pSVar7 = MGNPHCAAEIO_LGJODJDHCJF_TypeInfo->static_fields->CDBLDJLHFPL;
  if (pSVar7 != (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
    length = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = System_Xml_XmlNode__GetEnumerator(AHDGNOJPPIB,(MethodInfo *)0x0);
      if (pSVar3 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar8 = pSVar3->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar8->vtable + *piVar11;
            goto LAB_0350ef94;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0350ef94:
      uVar10 = (*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(pSVar3,System_IDisposable_TypeInfo);
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0350f264;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0350f264:
          (*(code *)*puVar5)(plVar6,puVar5[1]);
        }
        return;
      }
      pSVar8 = pSVar3->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar8->vtable + (*piVar11 + 1);
            goto LAB_0350eff4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0350eff4:
      puVar5 = (undefined8 *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if (puVar5 == (undefined8 *)0x0) {
        auVar13 = thunk_FUN_01bda818(MGNPHCAAEIO_IEKBEIOCOPO_TypeInfo);
        MGNPHCAAEIO_IEKBEIOCOPO___ctor(auVar13._0_8_,auVar13._8_8_);
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      FUN_03f93690(*puVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

