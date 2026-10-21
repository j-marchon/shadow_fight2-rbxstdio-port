// MGNPHCAAEIO$$FLCIPICBNGD @ RVA 0x340C49C

bool MGNPHCAAEIO__FLCIPICBNGD(int32_t MBOFLJJIAML,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int64_t iVar8;
  bool bVar9;
  int32_t iVar10;
  ACHLOMELAJE_o *pAVar11;
  MDHCGLMBHIG_o *pMVar12;
  VirtualInvokeData *pVVar13;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MDHCGLMBHIG_c *pMVar14;
  ulong uVar15;
  int32_t *piVar16;
  
  if ((DAT_0456803f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&POLKDIBEHFH_TypeInfo);
    DAT_0456803f = 1;
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
  pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar11 != (ACHLOMELAJE_o *)0x0) {
    bVar9 = ACHLOMELAJE__AIIJFJLLIDB(pAVar11,MBOFLJJIAML,(MethodInfo *)0x0);
    pMVar12 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pMVar12 != (MDHCGLMBHIG_o *)0x0) {
      pMVar14 = pMVar12->klass;
      uVar3._0_1_ = (pMVar14->_2).rank;
      uVar3._1_1_ = (pMVar14->_2).minimumAlignment;
      uVar15 = (ulong)uVar3;
      if (uVar15 != 0) {
        piVar16 = &((pMVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
              (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
            pVVar13 = pMVar14->vtable + (*piVar16 + 3);
            goto LAB_0350c5b0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      pVVar13 = (VirtualInvokeData *)FUN_01b81914(pMVar12,POLKDIBEHFH_TypeInfo,3);
LAB_0350c5b0:
      (*pVVar13->methodPtr)(pMVar12,pVVar13->method);
      pMVar12 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pMVar12 != (MDHCGLMBHIG_o *)0x0) {
        pMVar14 = pMVar12->klass;
        uVar4._0_1_ = (pMVar14->_2).rank;
        uVar4._1_1_ = (pMVar14->_2).minimumAlignment;
        uVar15 = (ulong)uVar4;
        if (uVar15 != 0) {
          piVar16 = &((pMVar14->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
              pVVar13 = pMVar14->vtable + (*piVar16 + 2);
              goto LAB_0350c61c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        pVVar13 = (VirtualInvokeData *)FUN_01b81914(pMVar12,POLKDIBEHFH_TypeInfo,2);
LAB_0350c61c:
        (*pVVar13->methodPtr)(pMVar12,pVVar13->method);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar11 != (ACHLOMELAJE_o *)0x0) {
          iVar10 = ACHLOMELAJE__FMNEFEMHCGG(pAVar11,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar11 != (ACHLOMELAJE_o *)0x0) {
            iVar1 = (pAVar11->fields).BNDNKEHPKEO;
            iVar7 = iVar1 - iVar10;
            if (iVar7 == 0 || iVar1 < iVar10) {
              return bVar9;
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
            pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar11 != (ACHLOMELAJE_o *)0x0) {
              iVar2 = (pAVar11->fields).JDKIOMFLCFD;
              pMVar12 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pMVar12 != (MDHCGLMBHIG_o *)0x0) {
                pMVar14 = pMVar12->klass;
                uVar5._0_1_ = (pMVar14->_2).rank;
                uVar5._1_1_ = (pMVar14->_2).minimumAlignment;
                uVar15 = (ulong)uVar5;
                if (uVar15 != 0) {
                  piVar16 = &((pMVar14->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                        (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
                      pVVar13 = pMVar14->vtable + (*piVar16 + 1);
                      goto LAB_0350c770;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                pVVar13 = (VirtualInvokeData *)FUN_01b81914(pMVar12,POLKDIBEHFH_TypeInfo,1);
LAB_0350c770:
                (*pVVar13->methodPtr)(pMVar12,(ulong)(uint)(iVar2 * iVar7),pVVar13->method);
                if (iVar10 == 0) {
                  pMVar12 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                  }
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                    /* try { // try from 0350c7e0 to 0360c88f has its CatchHandler @ 0350c7e0
                       catch() { ... } // from try @ 0350c7e0 with catch @ 0350c7e0
                       catch() { ... } // from try @ 0350c898 with catch @ 0350c7e0
                       catch() { ... } // from try @ 0350c9bc with catch @ 0350c7e0 */
                  pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if ((pAVar11 == (ACHLOMELAJE_o *)0x0) || (pMVar12 == (MDHCGLMBHIG_o *)0x0))
                  goto LAB_0350c86c;
                  pMVar14 = pMVar12->klass;
                  iVar8 = (pAVar11->fields).CGLPKJKAOAI;
                  uVar6._0_1_ = (pMVar14->_2).rank;
                  uVar6._1_1_ = (pMVar14->_2).minimumAlignment;
                  uVar15 = (ulong)uVar6;
                  if (uVar15 != 0) {
                    piVar16 = &((pMVar14->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                          (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
                        pVVar13 = pMVar14->vtable + *piVar16;
                        goto LAB_0350c840;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  pVVar13 = (VirtualInvokeData *)FUN_01b81914(pMVar12,POLKDIBEHFH_TypeInfo,0);
LAB_0350c840:
                  (*pVVar13->methodPtr)(pMVar12,(ulong)(uint)iVar8,pVVar13->method);
                }
                return bVar9 && (iVar7 != 0 && iVar10 <= iVar1);
              }
            }
          }
        }
      }
    }
  }
LAB_0350c86c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

