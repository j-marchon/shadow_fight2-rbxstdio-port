// Nekki.SF2.GUI.Shop.InfoPanelContent$$GMOBPKAOMNA @ RVA 0x3008FD4

void Nekki_SF2_GUI_Shop_InfoPanelContent__GMOBPKAOMNA
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t NFBEBOIDJLL,MethodInfo *method
               )

{
  ushort uVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  int32_t BCDLHKNFNDA;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  
  if ((DAT_04565b7b & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565b7b = 1;
  }
  pNVar3 = (__this->fields)._timerAlias;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._timerAlias;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar3,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._timerAlias;
      BCDLHKNFNDA = 3;
      if (0x1517f < NFBEBOIDJLL) {
        BCDLHKNFNDA = 4;
      }
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar5 = Method_System_Array_Empty<string>__;
      lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar8 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar8 = *(long *)(lVar5 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      uVar2 = StringLiteral_13795;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar4->klass;
        uVar12 = **(undefined8 **)(lVar5 + 0xb8);
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 03109160 to 0320925f has its CatchHandler @ 03109160
                       catch() { ... } // from try @ 03109160 with catch @ 03109160
                       catch() { ... } // from try @ 031093c4 with catch @ 03109160
                       catch() { ... } // from try @ 0310941c with catch @ 03109160
                       catch() { ... } // from try @ 03109484 with catch @ 03109160
                       catch() { ... } // from try @ 031094a4 with catch @ 03109160
                       catch() { ... } // from try @ 031094e8 with catch @ 03109160 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
              goto LAB_03109198;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03109198:
        pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar12,pVVar6->method);
        pSVar7 = System_String__Concat(pSVar7,StringLiteral_167,(MethodInfo *)0x0);
        pSVar7 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                           (NFBEBOIDJLL,true,true,true,0x1517f < NFBEBOIDJLL,false,true,
                            StringLiteral_2086,pSVar7,false,true,true,true,false,StringLiteral_1,
                            StringLiteral_1,StringLiteral_1,BCDLHKNFNDA,(MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03109250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,pSVar7,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

