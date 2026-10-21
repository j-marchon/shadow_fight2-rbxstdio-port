// Nekki.SF2.GUI.TextDebugger$$DJAEEGIEDIO @ RVA 0x35A6080

void Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO(bool *PJNIFDCGNHG,bool NBHHBBOJJME,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  System_Action_o *pSVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568e0d & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e0d = 1;
  }
  if (*PJNIFDCGNHG != NBHHBBOJJME) {
    *PJNIFDCGNHG = NBHHBBOJJME;
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->EBDPAKONFGG;
    if (pSVar5 != (System_Action_o *)0x0) {
      (*(code *)(pSVar5->fields).super.super.invoke_impl)
                ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
    }
    bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    if (bVar2) {
      pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar6 = pIVar3->klass;
      uVar1._0_1_ = (pIVar6->_2).rank;
      uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar4 = pIVar6->vtable + (*piVar8 + 8);
            goto LAB_036a61ac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,8);
LAB_036a61ac:
                    /* WARNING: Could not recover jumptable at 0x036a61bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pIVar3,pVVar4->method);
      return;
    }
  }
  return;
}

