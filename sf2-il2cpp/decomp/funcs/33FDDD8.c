// MGNPHCAAEIO$$NFHIFPECBOI @ RVA 0x33FDDD8

void MGNPHCAAEIO__NFHIFPECBOI
               (System_String_o *JCLPIKHEKBB,AMJMGFCCAKN_o *IKKAMAMLIKA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  MDHCGLMBHIG_o *pMVar7;
  IGFGDDANEPE_o *pIVar8;
  Il2CppClass *pIVar9;
  MDHCGLMBHIG_c *pMVar10;
  ulong uVar11;
  ulong uVar12;
  int32_t *piVar13;
  
  if ((DAT_04567fca & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MDNILNIEMEM_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04567fca = 1;
  }
  if ((IKKAMAMLIKA == (AMJMGFCCAKN_o *)0x0) ||
     ((IKKAMAMLIKA->fields).MNELBNHIKGH == (IGFGDDANEPE_o *)0x0)) {
    return;
  }
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = FUN_01bab718(string___TypeInfo,1);
  pIVar8 = (IKKAMAMLIKA->fields).MNELBNHIKGH;
  if ((pIVar8 != (IGFGDDANEPE_o *)0x0) && (lVar4 != 0)) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(System_String_o **)(lVar4 + 0x20) = (pIVar8->fields).NPFMOEOIEKM;
    thunk_FUN_01c20e04();
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar3->klass;
      uVar1._0_1_ = (pIVar9->_2).rank;
      uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar13 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar9->vtable + (*piVar13 + 0xc);
            goto LAB_034fdeec;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034fdeec:
      uVar6 = (*pVVar5->methodPtr)(pIVar3,JCLPIKHEKBB,lVar4,pVVar5->method);
      uVar11 = AMJMGFCCAKN__IEMNJCLKOIP(IKKAMAMLIKA,(MethodInfo *)0x0);
      if ((long)uVar11 < 1) {
        return;
      }
      pMVar7 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pMVar7 != (MDHCGLMBHIG_o *)0x0) {
        pMVar10 = pMVar7->klass;
        uVar2._0_1_ = (pMVar10->_2).rank;
        uVar2._1_1_ = (pMVar10->_2).minimumAlignment;
        uVar12 = (ulong)uVar2;
        if (uVar12 != 0) {
          piVar13 = &((pMVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)MDNILNIEMEM_TypeInfo) {
              pVVar5 = pMVar10->vtable + *piVar13;
              goto LAB_034fdf90;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar7,MDNILNIEMEM_TypeInfo,0);
LAB_034fdf90:
                    /* WARNING: Could not recover jumptable at 0x034fdfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar5->methodPtr)(pMVar7,uVar6,uVar11 & 0xffffffff,pVVar5->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

