// FDJKKAFIEFB$$COLHBIAKJBB @ RVA 0x35B370C

void FDJKKAFIEFB__COLHBIAKJBB(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 local_28;
  
  if ((DAT_04568ea9 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    DAT_04568ea9 = 1;
  }
  local_28 = 0;
  bVar4 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (!bVar4) {
    EHOFKBDKGBK<object,_object>__EOHMFJFFFIN
              (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar5 == (Il2CppObject *)0x0) {
LAB_036b3898:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar7 = pIVar5->klass;
    uVar1._0_1_ = (pIVar7->_2).rank;
    uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar7->vtable + (*piVar9 + 0xf);
          goto LAB_036b37f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xf);
LAB_036b37f4:
    uVar8 = (*pVVar6->methodPtr)(pIVar5,0,&local_28,pVVar6->method);
    if ((uVar8 & 1) != 0) {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      uVar3 = local_28;
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_036b3898;
      pIVar7 = pIVar5->klass;
      uVar2._0_1_ = (pIVar7->_2).rank;
      uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar7->vtable + (*piVar9 + 7);
            goto LAB_036b3870;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,7);
LAB_036b3870:
      (*pVVar6->methodPtr)(pIVar5,uVar3,0,1,pVVar6->method);
    }
  }
  return;
}

