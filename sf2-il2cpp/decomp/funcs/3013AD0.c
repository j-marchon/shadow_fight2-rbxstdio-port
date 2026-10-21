// AJOGJBFNELI$$ONHDKNBGCLC @ RVA 0x3013AD0

System_String_o * AJOGJBFNELI__ONHDKNBGCLC(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  KKLJIDJBFEI_o *__this_00;
  System_String_o *pSVar2;
  System_Text_Encoding_o *pSVar3;
  System_Byte_array *pSVar4;
  VirtualInvokeData *pVVar5;
  MBICLFIBJLO_c *pMVar6;
  ulong uVar7;
  int32_t *piVar8;
  MBICLFIBJLO_o **ppMVar9;
  MBICLFIBJLO_o *pMVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_04565bbb & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&MBICLFIBJLO_TypeInfo);
    FUN_01bab630(&PAEMDELNPAD_TypeInfo);
    DAT_04565bbb = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    pSVar2 = KDPDBGNOFEN__ONKNEALNBBB((KDPDBGNOFEN_o *)__this_00,(MethodInfo *)0x0);
    pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar3 != (System_Text_Encoding_o *)0x0) {
      auVar11 = (*(pSVar3->klass->vtable)._19_GetBytes.methodPtr)
                          (pSVar3,pSVar2,(pSVar3->klass->vtable)._19_GetBytes.method);
      pSVar2 = AJOGJBFNELI__GIEILHBFGHG(__this,auVar11._8_8_);
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Convert_TypeInfo);
      }
      pSVar4 = System_Convert__FromBase64String(pSVar2,(MethodInfo *)0x0);
      ppMVar9 = &(__this->fields).EJCLIBKEICM;
      pMVar10 = *ppMVar9;
      if (pMVar10 == (MBICLFIBJLO_o *)0x0) {
        pMVar10 = (MBICLFIBJLO_o *)thunk_FUN_01bda818(PAEMDELNPAD_TypeInfo);
        PAEMDELNPAD___ctor((PAEMDELNPAD_o *)pMVar10,(MethodInfo *)0x0);
        *ppMVar9 = pMVar10;
        thunk_FUN_01c20e04(ppMVar9,pMVar10);
        pMVar10 = *ppMVar9;
        if (pMVar10 == (MBICLFIBJLO_o *)0x0) goto LAB_03113c60;
      }
      pMVar6 = pMVar10->klass;
      uVar1._0_1_ = (pMVar6->_2).rank;
      uVar1._1_1_ = (pMVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pMVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)MBICLFIBJLO_TypeInfo) {
            pVVar5 = pMVar6->vtable + *piVar8;
            goto LAB_03113c1c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar10,MBICLFIBJLO_TypeInfo,0);
LAB_03113c1c:
      pSVar4 = (System_Byte_array *)
               (*pVVar5->methodPtr)(pMVar10,auVar11._0_8_,pSVar4,pVVar5->method);
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Convert_TypeInfo);
      }
      pSVar2 = System_Convert__ToBase64String(pSVar4,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
LAB_03113c60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

