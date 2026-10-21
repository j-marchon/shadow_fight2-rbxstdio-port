// FEEEICKDOFK$$PEKFIKKFOEP @ RVA 0x336B80C

System_String_o *
FEEEICKDOFK__PEKFIKKFOEP(BLEFOFGCKEF_o *FPEEDALPDOF,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  BLEFOFGCKEF_c *pBVar6;
  undefined8 uVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_String_o *pSVar10;
  uint uVar11;
  
  if ((DAT_04567aec & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9307);
    FUN_01bab630(&StringLiteral_16195);
    FUN_01bab630(&StringLiteral_16063);
    FUN_01bab630(&StringLiteral_16064);
    FUN_01bab630(&StringLiteral_16221);
    DAT_04567aec = 1;
  }
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(CNIELFLIKJB,(MethodInfo *)0x0);
  if (bVar3) {
    return StringLiteral_9307;
  }
  if (FPEEDALPDOF != (BLEFOFGCKEF_o *)0x0) {
    pBVar6 = FPEEDALPDOF->klass;
    uVar1._0_1_ = (pBVar6->_2).rank;
    uVar1._1_1_ = (pBVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pBVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar4 = pBVar6->vtable + (*piVar9 + 0xb);
          goto LAB_0346b908;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(FPEEDALPDOF,BLEFOFGCKEF_TypeInfo,0xb);
LAB_0346b908:
    uVar8 = (*pVVar4->methodPtr)(FPEEDALPDOF,CNIELFLIKJB,pVVar4->method);
    if ((uVar8 & 1) != 0) {
      return CNIELFLIKJB;
    }
    lVar5 = FUN_01bab718(string___TypeInfo,4);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = StringLiteral_16221;
        thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = StringLiteral_16063;
          thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x28));
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = StringLiteral_16195;
            thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x30));
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = StringLiteral_16064;
              thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x38));
              uVar7 = *(undefined8 *)(lVar5 + 0x18);
              if ((int)uVar7 < 1) {
                return StringLiteral_9307;
              }
              uVar11 = 0;
              while (uVar11 < (uint)uVar7) {
                if ((CNIELFLIKJB == (System_String_o *)0x0) ||
                   (pSVar10 = *(System_String_o **)(lVar5 + (long)(int)uVar11 * 8 + 0x20),
                   pSVar10 == (System_String_o *)0x0)) goto LAB_0346badc;
                if ((pSVar10->fields)._stringLength < (CNIELFLIKJB->fields)._stringLength) {
                  bVar3 = System_String__EndsWith(CNIELFLIKJB,pSVar10,(MethodInfo *)0x0);
                  if (bVar3) {
                    pSVar10 = System_String__Substring
                                        (CNIELFLIKJB,0,
                                         (CNIELFLIKJB->fields)._stringLength -
                                         (pSVar10->fields)._stringLength,(MethodInfo *)0x0);
                    pBVar6 = FPEEDALPDOF->klass;
                    uVar2._0_1_ = (pBVar6->_2).rank;
                    uVar2._1_1_ = (pBVar6->_2).minimumAlignment;
                    uVar8 = (ulong)uVar2;
                    if (uVar8 == 0) goto LAB_0346ba9c;
                    piVar9 = &((pBVar6->_1).interfaceOffsets)->offset;
                    goto LAB_0346ba84;
                  }
                  uVar7 = *(undefined8 *)(lVar5 + 0x18);
                }
                uVar11 = uVar11 + 1;
                if ((int)uVar7 <= (int)uVar11) {
                  return StringLiteral_9307;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0346badc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0346ba84:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
        (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
      pVVar4 = pBVar6->vtable + (*piVar9 + 0xb);
      goto LAB_0346babc;
    }
  }
LAB_0346ba9c:
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(FPEEDALPDOF,BLEFOFGCKEF_TypeInfo,0xb);
LAB_0346babc:
  uVar8 = (*pVVar4->methodPtr)(FPEEDALPDOF,pSVar10,pVVar4->method);
  if ((uVar8 & 1) == 0) {
    pSVar10 = StringLiteral_9307;
  }
  return pSVar10;
}

