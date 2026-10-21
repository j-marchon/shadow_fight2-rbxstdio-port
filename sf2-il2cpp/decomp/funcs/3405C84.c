// MGNPHCAAEIO$$IIMDBJJKJIF @ RVA 0x3405C84

void MGNPHCAAEIO__IIMDBJJKJIF(GLPEFEEGCPM_o *DKMMBMBMJBO,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  MDHCGLMBHIG_o *pMVar3;
  VirtualInvokeData *pVVar4;
  KKLJIDJBFEI_o *__this;
  MDHCGLMBHIG_c *pMVar5;
  FADHMEJJCPO_o *pFVar6;
  PGICCMFLDPI_o *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  long lVar10;
  
  if ((DAT_0456801a & 1) == 0) {
    FUN_01bab630(&FKIHKPEEMKG_TypeInfo);
    DAT_0456801a = 1;
  }
  pMVar3 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pMVar3 != (MDHCGLMBHIG_o *)0x0) {
    pMVar5 = pMVar3->klass;
    uVar1._0_1_ = (pMVar5->_2).rank;
    uVar1._1_1_ = (pMVar5->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pMVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)FKIHKPEEMKG_TypeInfo) {
          pVVar4 = pMVar5->vtable + *piVar9;
          goto LAB_03505d14;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pMVar3,FKIHKPEEMKG_TypeInfo,0);
LAB_03505d14:
    (*pVVar4->methodPtr)(pMVar3,pVVar4->method);
    if (((DKMMBMBMJBO != (GLPEFEEGCPM_o *)0x0) &&
        (pFVar6 = (DKMMBMBMJBO->fields).PBBGNHKFEPG, pFVar6 != (FADHMEJJCPO_o *)0x0)) &&
       (pPVar7 = (pFVar6->fields).IMNALGKNMNP, pPVar7 != (PGICCMFLDPI_o *)0x0)) {
      lVar10 = (pPVar7->fields).GDKPGIBMFPA;
      __this = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this != (KKLJIDJBFEI_o *)0x0) &&
         (pPVar7 = KKLJIDJBFEI__MPBLBEGCAKP(__this,(MethodInfo *)0x0),
         pPVar7 != (PGICCMFLDPI_o *)0x0)) {
        lVar10 = lVar10 - (pPVar7->fields).GDKPGIBMFPA;
        if (lVar10 < 1000) {
          return;
        }
        pMVar3 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pMVar3 != (MDHCGLMBHIG_o *)0x0) {
          pMVar5 = pMVar3->klass;
          uVar2._0_1_ = (pMVar5->_2).rank;
          uVar2._1_1_ = (pMVar5->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pMVar5->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)FKIHKPEEMKG_TypeInfo) {
                pVVar4 = pMVar5->vtable + (*piVar9 + 1);
                goto LAB_03505de8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar4 = (VirtualInvokeData *)FUN_01b81914(pMVar3,FKIHKPEEMKG_TypeInfo,1);
LAB_03505de8:
                    /* WARNING: Could not recover jumptable at 0x03505dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar4->methodPtr)(pMVar3,lVar10 / 1000 & 0xffffffff,pVVar4->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

