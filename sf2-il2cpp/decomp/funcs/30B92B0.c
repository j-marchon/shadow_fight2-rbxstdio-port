// Nekki.SF2.GUI.TextPic$$BBHONBCGBOL @ RVA 0x30B92B0

bool Nekki_SF2_GUI_TextPic__BBHONBCGBOL(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Action_o *x;
  UnityEngine_Object_o *x_00;
  
  if ((DAT_0456620e & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456620e = 1;
  }
  bVar4 = UnityEngine_UI_Text__get_alignByGeometry
                    ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  if (bVar4) {
    return true;
  }
  x_00 = (UnityEngine_Object_o *)(__this->fields).FitImageLineHeightParam;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    x = (__this->fields).MPHECBPOAIC;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
  }
  bVar4 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (!bVar4) {
    return false;
  }
  pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar6->klass;
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar7 = pIVar9->vtable + (*piVar11 + 6);
          goto LAB_031b9400;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,6);
LAB_031b9400:
    lVar8 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    if (lVar8 == 0) {
      return false;
    }
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar6->klass;
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar7 = pIVar9->vtable + (*piVar11 + 6);
            goto LAB_031b9470;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,6);
LAB_031b9470:
      lVar8 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x58) == '\0') {
          return false;
        }
        pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar6 != (Il2CppObject *)0x0) {
          pIVar9 = pIVar6->klass;
          uVar3._0_1_ = (pIVar9->_2).rank;
          uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 != 0) {
            piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                pVVar7 = pIVar9->vtable + (*piVar11 + 0xb);
                goto LAB_031b9500;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,DFLJPJMIMHI_TypeInfo,0xb);
LAB_031b9500:
                    /* WARNING: Could not recover jumptable at 0x031b9510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
          return (bool)uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

