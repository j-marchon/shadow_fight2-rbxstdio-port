// Nekki.SF2.GUI.Profile.AchievementSubItem$$BMJDIKEHBON @ RVA 0x338EF5C

void Nekki_SF2_GUI_Profile_AchievementSubItem__BMJDIKEHBON
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  ProgressBar_o *pPVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  KMJDCOABCCG_o *pKVar10;
  long lVar11;
  Il2CppClass *pIVar12;
  BHEDGAKGKPO_StaticFields *pBVar13;
  ulong uVar14;
  int32_t *piVar15;
  undefined8 uVar16;
  Nekki_SF2_GUI_LabelAlias_o *pNVar17;
  float fVar18;
  float fVar19;
  int local_24;
  
  if ((DAT_04567c0d & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_16287);
    DAT_04567c0d = 1;
  }
  pKVar10 = (__this->fields).HNNMAMJOEMB;
  if ((pKVar10 != (KMJDCOABCCG_o *)0x0) &&
     (pPVar4 = (__this->fields)._progress, pPVar4 != (ProgressBar_o *)0x0)) {
    (*(pPVar4->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,(float)(pKVar10->fields).ADHFHEJFJPK,pPVar4,
               (pPVar4->klass->vtable)._11_SetValueBorders.method);
    pPVar4 = (__this->fields)._progress;
    if (pPVar4 != (ProgressBar_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pPVar4,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar5,40.0,(MethodInfo *)0x0);
      pKVar10 = (__this->fields).HNNMAMJOEMB;
      if (pKVar10 != (KMJDCOABCCG_o *)0x0) {
        iVar1 = (pKVar10->fields).ADHFHEJFJPK;
        fVar18 = (__this->fields).IFGGFDOALOG;
        fVar19 = (float)iVar1;
        if (fVar19 < fVar18) {
          fVar18 = fVar19;
        }
        local_24 = -0x80000000;
        if (fVar18 != INFINITY) {
          local_24 = (int)fVar18;
        }
        if (local_24 < iVar1) {
          pSVar6 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          pKVar10 = (__this->fields).HNNMAMJOEMB;
          if (pKVar10 == (KMJDCOABCCG_o *)0x0) goto LAB_0348f244;
          str2 = System_Int32__ToString((int)pKVar10 + 0x14,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat(pSVar6,StringLiteral_1492,str2,(MethodInfo *)0x0);
        }
        else {
          pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar8 = Method_System_Array_Empty<string>__;
          lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar11 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar11 = *(long *)(lVar8 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01b81620();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01b81620();
          }
          uVar3 = StringLiteral_16287;
          if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0348f244;
          pIVar12 = pIVar7->klass;
          uVar16 = **(undefined8 **)(lVar8 + 0xb8);
          uVar2._0_1_ = (pIVar12->_2).rank;
          uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
          uVar14 = (ulong)uVar2;
          if (uVar14 != 0) {
            piVar15 = &((pIVar12->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar12->vtable + (*piVar15 + 0xc);
                goto LAB_0348f168;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0348f168:
          pSVar6 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar3,uVar16,pVVar9->method);
        }
        pNVar17 = (__this->fields)._progressLabel;
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar13 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar17->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar13->FHIAKPJBBCB).fields.r,(pBVar13->FHIAKPJBBCB).fields.g,
                     (pBVar13->FHIAKPJBBCB).fields.b,(pBVar13->FHIAKPJBBCB).fields.a,pNVar17,
                     (pNVar17->klass->vtable)._23_set_color.method);
          pNVar17 = (__this->fields)._progressLabel;
          if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar17,0x66,(MethodInfo *)0x0);
            pNVar17 = (__this->fields)._progressLabel;
            if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar17->klass->vtable)._75_set_text.methodPtr)
                        (pNVar17,pSVar6,(pNVar17->klass->vtable)._75_set_text.method);
              pNVar17 = (__this->fields)._progressLabel;
              if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar17,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX(pUVar5,350.0,(MethodInfo *)0x0);
                pNVar17 = (__this->fields)._progressLabel;
                if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  pUVar5 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar17,(MethodInfo *)0x0);
                  UnityEngine_TransformExtensions__SetLocalPositionY(pUVar5,-40.0,(MethodInfo *)0x0)
                  ;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0348f244:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

