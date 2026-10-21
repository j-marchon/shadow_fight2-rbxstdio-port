// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$LHHLFBBBJLD @ RVA 0x3538D0C

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_BDLDLFJALKC_o *OLBADKJBAEM,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  undefined8 uVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  
  if ((DAT_04568ab1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_7110);
    DAT_04568ab1 = 1;
  }
  if ((OLBADKJBAEM != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_BDLDLFJALKC_o *)0x0) &&
     (pUVar3 = (__this->fields)._minHintY, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    fVar14 = (OLBADKJBAEM->fields).GIDBDJLFEBO.fields.y;
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      if (fVar14 < UVar15.fields.y) {
        return;
      }
      pUVar3 = (__this->fields)._maxHintY;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        fVar14 = (OLBADKJBAEM->fields).GIDBDJLFEBO.fields.y;
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          if (UVar15.fields.y < fVar14) {
            return;
          }
          pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar5 = Method_System_Array_Empty<string>__;
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
          uVar2 = StringLiteral_7110;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pIVar10 = pIVar4->klass;
            uVar13 = **(undefined8 **)(lVar5 + 0xb8);
            uVar1._0_1_ = (pIVar10->_2).rank;
            uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
            uVar11 = (ulong)uVar1;
            if (uVar11 != 0) {
              piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar6 = pIVar10->vtable + (*piVar12 + 0xc);
                  goto LAB_03638eb0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03638eb0:
            pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar13,pVVar6->method);
            pSVar7 = System_String__Concat
                               (pSVar7,StringLiteral_167,(OLBADKJBAEM->fields).LKHLLEMIENA,
                                (MethodInfo *)0x0);
            DKIDCBPNMPD = (__this->fields)._hintPrefab;
            pNVar8 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
            if ((pNVar8 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
               (__this_00 = (pNVar8->fields)._screen,
               __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0)) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                                    (DKIDCBPNMPD,pUVar3,
                                     (UnityEngine_Vector3_o)(OLBADKJBAEM->fields).GIDBDJLFEBO.fields
                                     ,20.0,-1.0,-1.0,(MethodInfo *)0x0);
              if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
                Nekki_SF2_GUI_HintBoxAutoKilled__SetDescText(__this_01,pSVar7,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

