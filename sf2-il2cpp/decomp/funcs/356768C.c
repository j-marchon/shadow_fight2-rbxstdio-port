// AGJLPAAEJEF$$NKLGCNHLBAF @ RVA 0x356768C

void AGJLPAAEJEF__NKLGCNHLBAF(AGJLPAAEJEF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *AAIHDEKMIJG;
  GCPFDLNAFDF_o *pGVar2;
  VirtualInvokeData *pVVar3;
  DOCLKKFHECI_T__o *__this_00;
  System_Action_o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  GCPFDLNAFDF_c *pGVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568bfe & 1) == 0) {
    FUN_01bab630(&Method_AGJLPAAEJEF_JBCLNEBFCBA__);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_DOCLKKFHECI<CBLABOPKBKD>_LLNDKMCBHBI__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04568bfe = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  AAIHDEKMIJG = MGENAMAJALB__LGAGCPLBLHL((MethodInfo *)0x0);
  NEHNBJKKABI__GLNBJGJPBFD(AAIHDEKMIJG,(MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar2 != (GCPFDLNAFDF_o *)0x0) {
    pGVar4 = pGVar2->klass;
    uVar1._0_1_ = (pGVar4->_2).rank;
    uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pGVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar3 = pGVar4->vtable + *piVar6;
          goto LAB_036677ac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar2,HFHIKPAKJFG_TypeInfo,0);
LAB_036677ac:
    __this_00 = (DOCLKKFHECI_T__o *)(*pVVar3->methodPtr)(pGVar2,pVVar3->method);
    BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (DOCLKKFHECI_T__o *)0x0) {
      DOCLKKFHECI<object>__LLNDKMCBHBI
                (__this_00,BLMFLPJJMPF,Method_DOCLKKFHECI<CBLABOPKBKD>_LLNDKMCBHBI__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

