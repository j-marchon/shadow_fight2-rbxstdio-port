// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$ELKFFHOCIAA @ RVA 0x347C004

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__ELKFFHOCIAA
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,UnityEngine_GameObject_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  Nekki_SF2_GUI_HintBox_o *pNVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  PBAKFOBIHEG_o *pPVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o *pSVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_04568357 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11921);
    DAT_04568357 = 1;
  }
  pNVar4 = (__this->fields).HintBox;
  if (pNVar4 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
    Nekki_SF2_GUI_HintBox__SetText
              (pNVar4,StringLiteral_1,StringLiteral_11921,0x46,0x3c,4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).HintBox;
    if (((pNVar4 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
        (__this_00 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
        IKKAMAMLIKA != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_01 = UnityEngine_GameObject__get_transform(IKKAMAMLIKA,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UVar11 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar11.fields.y = UVar11.fields.y + -25.0;
        UnityEngine_Transform__set_position(__this_00,UVar11,(MethodInfo *)0x0);
        pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
          pPVar7 = pPVar5->klass;
          pSVar10 = (__this->fields).LKDFKLMLCBL;
          uVar2._0_1_ = (pPVar7->_2).rank;
          uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar6 = pPVar7->vtable + (*piVar9 + 1);
                goto LAB_0357c138;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,1);
LAB_0357c138:
          (*pVVar6->methodPtr)(pPVar5,pSVar10,pVVar6->method);
          pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar10 = Nekki_SF2_GUI_Dialogs_ItemSetDialog__LHHLFBBBJLD(__this,method_00);
          if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
            pPVar7 = pPVar5->klass;
            ppSVar1 = &(__this->fields).LKDFKLMLCBL;
            uVar3._0_1_ = (pPVar7->_2).rank;
            uVar3._1_1_ = (pPVar7->_2).minimumAlignment;
            uVar8 = (ulong)uVar3;
            if (uVar8 != 0) {
              piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar6 = pPVar7->vtable + *piVar9;
                  goto LAB_0357c1b4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_0357c1b4:
            pSVar10 = (System_Collections_IEnumerator_o *)
                      (*pVVar6->methodPtr)(pPVar5,pSVar10,1,pVVar6->method);
            *ppSVar1 = pSVar10;
            thunk_FUN_01c20e04(ppSVar1,pSVar10);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

