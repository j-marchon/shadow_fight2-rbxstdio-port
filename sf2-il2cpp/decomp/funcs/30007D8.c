// IJDEPDNLOGC$$PKIFMKGDJJN @ RVA 0x30007D8

void IJDEPDNLOGC__PKIFMKGDJJN(IJDEPDNLOGC_o *__this,MethodInfo *method)

{
  ushort uVar1;
  FLHAOOHNCAL_o *pFVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  FLHAOOHNCAL_c *pFVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04565b22 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FLHAOOHNCAL_TypeInfo);
    FUN_01bab630(&Method_IJDEPDNLOGC_EGMHPABAGML__);
    DAT_04565b22 = 1;
  }
  BOFEMGGNODC__PKIFMKGDJJN((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  pFVar2 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance
                     ((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pFVar2 == (FLHAOOHNCAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pFVar5 = pFVar2->klass;
  uVar1._0_1_ = (pFVar5->_2).rank;
  uVar1._1_1_ = (pFVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pFVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)FLHAOOHNCAL_TypeInfo) {
        pVVar4 = pFVar5->vtable + (*piVar7 + 1);
        goto LAB_031008c4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pFVar2,FLHAOOHNCAL_TypeInfo,1);
LAB_031008c4:
                    /* WARNING: Could not recover jumptable at 0x031008dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pFVar2,uVar3,pVVar4->method);
  return;
}

