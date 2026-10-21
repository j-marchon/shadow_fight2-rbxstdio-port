// Nekki.SF2.GUI.Shop.InfoPanelContent$$GKPCOMLBGCO @ RVA 0x3007024

void Nekki_SF2_GUI_Shop_InfoPanelContent__GKPCOMLBGCO
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t CNHMFABDCHB,MethodInfo *method
               )

{
  System_String_o **ppSVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Object_o *pUVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  int32_t BCDLHKNFNDA;
  IconLabelButton_o *pIVar11;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  UnityEngine_UI_LayoutGroup_o *pUVar16;
  undefined8 uVar17;
  
  if ((DAT_04565b50 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_1223);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565b50 = 1;
  }
  pIVar11 = (__this->fields).PPBLJHFNPKG;
  if (pIVar11 == (IconLabelButton_o *)0x0) goto LAB_031074b8;
  pUVar16 = (pIVar11->fields).super._Layout;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pIVar11 = (__this->fields).PPBLJHFNPKG;
    if ((pIVar11 == (IconLabelButton_o *)0x0) ||
       (pUVar16 = (pIVar11->fields).super._Layout, pUVar16 == (UnityEngine_UI_LayoutGroup_o *)0x0))
    goto LAB_031074b8;
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar16,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_031074b8;
    UnityEngine_RectTransform__set_offsetMin
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pIVar11 = (__this->fields).PPBLJHFNPKG;
    if ((pIVar11 == (IconLabelButton_o *)0x0) ||
       (pUVar16 = (pIVar11->fields).super._Layout, pUVar16 == (UnityEngine_UI_LayoutGroup_o *)0x0))
    goto LAB_031074b8;
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar16,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_031074b8;
    UnityEngine_RectTransform__set_offsetMax
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  pIVar11 = (__this->fields).PPBLJHFNPKG;
  if ((pIVar11 != (IconLabelButton_o *)0x0) &&
     (__this_00 = (pIVar11->fields)._icon, __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,
                        Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (pUVar6 == (UnityEngine_Object_o *)0x0) goto LAB_031074b8;
      (*(code *)pUVar6->klass[2]._1.implementedInterfaces)
                (0x42c80000,pUVar6,pUVar6->klass[2]._1.interfaceOffsets);
      (*pUVar6->klass[2]._1.events)(0x42c80000,pUVar6,pUVar6->klass[2]._1.properties);
    }
    pIVar11 = (__this->fields).PPBLJHFNPKG;
    if (pIVar11 != (IconLabelButton_o *)0x0) {
      pUVar6 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponentInChildren<object>
                         ((UnityEngine_Component_o *)pIVar11,
                          Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      BCDLHKNFNDA = 3;
      if (0x1517f < CNHMFABDCHB) {
        BCDLHKNFNDA = 4;
      }
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = Method_System_Array_Empty<string>__;
      lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar12 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar12 = *(long *)(lVar8 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01b81620();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      uVar3 = StringLiteral_13795;
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar13 = pIVar7->klass;
        uVar17 = **(undefined8 **)(lVar8 + 0xb8);
        uVar2._0_1_ = (pIVar13->_2).rank;
        uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
              goto LAB_031073b4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031073b4:
        pSVar10 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar3,uVar17,pVVar9->method);
        pSVar10 = System_String__Concat(pSVar10,StringLiteral_167,(MethodInfo *)0x0);
        pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                            (CNHMFABDCHB,true,true,true,0x1517f < CNHMFABDCHB,false,false,
                             StringLiteral_2086,pSVar10,false,true,true,true,false,StringLiteral_1,
                             StringLiteral_1,StringLiteral_1,BCDLHKNFNDA,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat(StringLiteral_1223,pSVar10,(MethodInfo *)0x0);
        ppSVar1 = &(__this->fields).OLHENOKIMKB;
        (__this->fields).OLHENOKIMKB = pSVar10;
        thunk_FUN_01c20e04(ppSVar1,pSVar10);
        if (pUVar6 != (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031074b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pUVar6->klass[4]._1.gc_desc)(pUVar6,*ppSVar1,pUVar6->klass[4]._1.name);
          return;
        }
      }
    }
  }
LAB_031074b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

