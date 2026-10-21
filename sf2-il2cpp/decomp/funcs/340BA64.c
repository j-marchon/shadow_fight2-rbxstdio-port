// MGNPHCAAEIO$$IMMLLGHIPLE @ RVA 0x340BA64

void MGNPHCAAEIO__IMMLLGHIPLE
               (System_String_o *JCLPIKHEKBB,IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  int64_t iVar8;
  MDHCGLMBHIG_o *pMVar9;
  long lVar10;
  Il2CppClass *pIVar11;
  MDHCGLMBHIG_c *pMVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  
  if ((DAT_04568035 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&PILIGDMGJOI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568035 = 1;
  }
  if (IKKAMAMLIKA == (IGFGDDANEPE_o *)0x0) {
    return;
  }
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  pSVar15 = (IKKAMAMLIKA->fields).NPFMOEOIEKM;
  lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar10 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar10 = *(long *)(lVar5 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01b81620();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar11 = pIVar4->klass;
    uVar16 = **(undefined8 **)(lVar5 + 0xb8);
    uVar1._0_1_ = (pIVar11->_2).rank;
    uVar1._1_1_ = (pIVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
    if (uVar13 != 0) {
      piVar14 = &((pIVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar11->vtable + (*piVar14 + 0xc);
          goto LAB_0350bbb4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0350bbb4:
    uVar16 = (*pVVar6->methodPtr)(pIVar4,pSVar15,uVar16,pVVar6->method);
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(undefined8 *)(lVar5 + 0x20) = uVar16;
      thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x20),uVar16);
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar11 = pIVar4->klass;
        uVar2._0_1_ = (pIVar11->_2).rank;
        uVar2._1_1_ = (pIVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar2;
        if (uVar13 != 0) {
          piVar14 = &((pIVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar11->vtable + (*piVar14 + 0xc);
              goto LAB_0350bc68;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0350bc68:
        uVar16 = (*pVVar6->methodPtr)(pIVar4,JCLPIKHEKBB,lVar5,pVVar6->method);
        pMVar7 = (MethodInfo *)IGFGDDANEPE__OMMIKNKEKJN(IKKAMAMLIKA,(MethodInfo *)0x0);
        method_00 = pMVar7;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (MethodInfo *)thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        }
        iVar8 = MGNPHCAAEIO__EAHFGGKENCK(method_00);
        if ((long)pMVar7 - iVar8 < 1) {
          return;
        }
        pMVar9 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pMVar9 != (MDHCGLMBHIG_o *)0x0) {
          pMVar12 = pMVar9->klass;
          uVar3._0_1_ = (pMVar12->_2).rank;
          uVar3._1_1_ = (pMVar12->_2).minimumAlignment;
          uVar13 = (ulong)uVar3;
          if (uVar13 != 0) {
            piVar14 = &((pMVar12->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)PILIGDMGJOI_TypeInfo) {
                pVVar6 = pMVar12->vtable + (*piVar14 + 1);
                goto LAB_0350bd34;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pMVar9,PILIGDMGJOI_TypeInfo,1);
LAB_0350bd34:
                    /* WARNING: Could not recover jumptable at 0x0350bd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar6->methodPtr)(pMVar9,uVar16,(long)pMVar7 - iVar8 & 0xffffffff,pVVar6->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

