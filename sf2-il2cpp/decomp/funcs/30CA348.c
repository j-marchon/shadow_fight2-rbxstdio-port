// JIBAEMHNBOF$$EOHJJEHOHDO @ RVA 0x30CA348

bool JIBAEMHNBOF__EOHJJEHOHDO(NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  VirtualInvokeData *pVVar5;
  AJDHCLBLGMI_o *MOAIKBONJAE;
  NCCFNKMICGK_c *pNVar6;
  ulong uVar7;
  int32_t *piVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = NLFMDIGKNGP;
  if ((DAT_045662cf & 1) == 0) {
    auVar9 = FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662cf = 1;
  }
  if (NLFMDIGKNGP != (NCCFNKMICGK_o *)0x0) {
    pNVar6 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar6->_2).rank;
    uVar2._1_1_ = (pNVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pNVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar5 = pNVar6->vtable + (*piVar8 + 1);
          goto LAB_031ca3d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca3d0:
    auVar10 = (*pVVar5->methodPtr)(NLFMDIGKNGP,pVVar5->method);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar10._8_8_;
    auVar9 = auVar4 << 0x40;
    if (auVar10._0_8_ != 0) {
      uVar1 = *(uint *)(auVar10._0_8_ + 0x18) & 0xfffffffe;
      if (uVar1 == 4) {
        pNVar6 = NLFMDIGKNGP->klass;
        uVar3._0_1_ = (pNVar6->_2).rank;
        uVar3._1_1_ = (pNVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar3;
        if (uVar7 != 0) {
          piVar8 = &((pNVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar5 = pNVar6->vtable + (*piVar8 + 1);
              goto LAB_031ca440;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca440:
        MOAIKBONJAE = (AJDHCLBLGMI_o *)(*pVVar5->methodPtr)(NLFMDIGKNGP,pVVar5->method);
        FIKPNGLBKGN__DGLJCGNHLIG(MOAIKBONJAE,(MethodInfo *)0x0);
      }
      return uVar1 == 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
}

