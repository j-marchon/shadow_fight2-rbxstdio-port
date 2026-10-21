// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$UpdateHeightOrLocalization @ RVA 0x3292308

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton__UpdateHeightOrLocalization
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  PBAKFOBIHEG_o *pPVar7;
  System_Collections_IEnumerator_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar9;
  Il2CppClass *pIVar10;
  PBAKFOBIHEG_c *pPVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_Collections_IEnumerator_o **ppSVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  
  if ((DAT_04567332 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_2458);
    FUN_01bab630(&StringLiteral_2184);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567332 = 1;
  }
  pNVar3 = (__this->fields)._text;
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,StringLiteral_1,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._text;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    pSVar15 = (__this->fields).EINOLPHENJI;
    lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar9 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar9 = *(long *)(lVar5 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar4->klass;
      uVar16 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar10->_2).rank;
      uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar10->vtable + (*piVar13 + 0xc);
            goto LAB_03392480;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03392480:
      pSVar15 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,pSVar15,uVar16,pVVar6->method);
      pSVar15 = System_String__Concat
                          (StringLiteral_2458,pSVar15,StringLiteral_2184,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar15,(pNVar3->klass->vtable)._75_set_text.method);
        Nekki_SF2_GUI_Dialogs_ScrollDialogButton__MLDPDENJCPI(__this,method_00);
        pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
        pSVar8 = Nekki_SF2_GUI_Dialogs_ScrollDialogButton__NFPFHEBMNGO(__this,method_01);
        if (pPVar7 != (PBAKFOBIHEG_o *)0x0) {
          pPVar11 = pPVar7->klass;
          uVar2._0_1_ = (pPVar11->_2).rank;
          uVar2._1_1_ = (pPVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar13 = &((pPVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar6 = pPVar11->vtable + *piVar13;
                goto LAB_03392540;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,0);
LAB_03392540:
          pSVar8 = (System_Collections_IEnumerator_o *)
                   (*pVVar6->methodPtr)(pPVar7,pSVar8,1,pVVar6->method);
          ppSVar14 = &(__this->fields).CGBIOLDFDNK;
          *ppSVar14 = pSVar8;
          thunk_FUN_01c20e04(ppSVar14,pSVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

