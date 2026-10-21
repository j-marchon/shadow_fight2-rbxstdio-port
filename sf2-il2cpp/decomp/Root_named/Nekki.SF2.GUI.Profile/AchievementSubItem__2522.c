// TypeDefIndex 2522
// Namespace: Nekki.SF2.GUI.Profile
// public class AchievementSubItem : SubItem
// Fields:
//   private const int AAHFDCGCCMJ = 43;
//   private const int FICMCOAJLHF = 40;
//   private const int MKKBMEKDJEG = 102;
//   private const int LGKLLGPEABH = 350;
//   protected ProgressBar _progress; // 0x1E0
//   protected LabelAlias _progressLabel; // 0x1E8
//   protected float IFGGFDOALOG; // 0x1F0
//   protected KMJDCOABCCG HNNMAMJOEMB; // 0x1F8

// ===== public void .ctor()  [RVA 0x338EDBC]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$.ctor @ RVA 0x338EDBC

void Nekki_SF2_GUI_Profile_AchievementSubItem___ctor
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c09 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04567c09 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Profile_SubItem_TypeInfo,method);
  }
  Nekki_SF2_GUI_Profile_SubItem___ctor((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(KMJDCOABCCG LFOOJOJHDFM, float FAJCPNMDDHA)  [RVA 0x338EE14]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$Init @ RVA 0x338EE14

void Nekki_SF2_GUI_Profile_AchievementSubItem__Init
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,KMJDCOABCCG_o *LFOOJOJHDFM,
               float FAJCPNMDDHA,MethodInfo *method)

{
  System_String_o *pSVar1;
  ProgressBar_o *pPVar2;
  MethodInfo *method_00;
  GODDDLLLOLB_o *pGVar3;
  Nekki_SF2_GUI_Profile_AchievementSubItem_c *pNVar4;
  undefined8 uVar5;
  
  if ((DAT_04567c0a & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&StringLiteral_14091/*"UI/Achievements/"*/);
    DAT_04567c0a = 1;
  }
  Nekki_SF2_GUI_Profile_SubItem__Init((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  (__this->fields).HNNMAMJOEMB = LFOOJOJHDFM;
  thunk_FUN_01c20e04(&(__this->fields).HNNMAMJOEMB,LFOOJOJHDFM);
  (__this->fields).IFGGFDOALOG = FAJCPNMDDHA;
  (__this->fields).super.CNMMJHJNNAJ = StringLiteral_14091/*"UI/Achievements/"*/;
  thunk_FUN_01c20e04(&(__this->fields).super.CNMMJHJNNAJ);
  if (LFOOJOJHDFM != (KMJDCOABCCG_o *)0x0) {
    pSVar1 = KMJDCOABCCG__IEOHBNIIMFL(LFOOJOJHDFM,(MethodInfo *)0x0);
    (__this->fields).super.COCAGDPOPLL = pSVar1;
    thunk_FUN_01c20e04(&(__this->fields).super.COCAGDPOPLL);
    if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar3 = FIPOABEGELK_TypeInfo->static_fields->FCHIMNCGKJF;
    if (pGVar3 != (GODDDLLLOLB_o *)0x0) {
      pNVar4 = __this->klass;
      uVar5 = NEON_rev64(pGVar3->fields,4);
      (__this->fields).super.GJFHNJFGBKE = (float)(int)uVar5;
      (__this->fields).super.NAPGLBIIEJP = (float)(int)((ulong)uVar5 >> 0x20);
      (*(pNVar4->vtable)._57_UpdateIcon.methodPtr)(__this,(pNVar4->vtable)._57_UpdateIcon.method);
      (*(__this->klass->vtable)._51_SetActive.methodPtr)
                (__this,1,(__this->klass->vtable)._51_SetActive.method);
      Nekki_SF2_GUI_Profile_AchievementSubItem__BMJDIKEHBON(__this,method_00);
      pPVar2 = (__this->fields)._progress;
      if (pPVar2 != (ProgressBar_o *)0x0) {
        (*(pPVar2->klass->vtable)._7_set_Value.methodPtr)
                  ((ulong)(uint)(__this->fields).IFGGFDOALOG,pPVar2,
                   (pPVar2->klass->vtable)._7_set_Value.method);
                    /* WARNING: Could not recover jumptable at 0x0348ef54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._66_UpdatePositions.methodPtr)
                  (__this,(__this->klass->vtable)._66_UpdatePositions.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetOpacity()  [RVA 0x338F270]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$ResetOpacity @ RVA 0x338F270

void Nekki_SF2_GUI_Profile_AchievementSubItem__ResetOpacity
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *exists;
  
  if ((DAT_04567c0b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c0b = 1;
    method = extraout_x1;
  }
  exists = (__this->fields).super._icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar1) {
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields).super._icon,
               (__this->fields).super.GJFHNJFGBKE,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public virtual void UpdatePositions()  [RVA 0x338F2EC]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$UpdatePositions @ RVA 0x338F2EC

void Nekki_SF2_GUI_Profile_AchievementSubItem__UpdatePositions
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  ProgressBar_o *pPVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04567c0c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04567c0c = 1;
  }
  pNVar1 = (__this->fields).super._icon;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pPVar4 = (__this->fields)._progress;
      if ((pPVar4 != (ProgressBar_o *)0x0) &&
         (pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pPVar4,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__),
         pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
        pPVar4 = (__this->fields)._progress;
        if (pPVar4 != (ProgressBar_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pPVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (pUVar2,UVar5.fields.x + UVar6.fields.m_Width * 0.5 + 0.0 + 43.0 +
                            UVar7.fields.m_Width * 0.5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KMJDCOABCCG get_Achievement()  [RVA 0x338F3D4]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$get_Achievement @ RVA 0x338F3D4

KMJDCOABCCG_o *
Nekki_SF2_GUI_Profile_AchievementSubItem__get_Achievement
          (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  return (__this->fields).HNNMAMJOEMB;
}


// ===== public void UpdateProgress(float CJNHFNHJHPE)  [RVA 0x338F248]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$UpdateProgress @ RVA 0x338F248

void Nekki_SF2_GUI_Profile_AchievementSubItem__UpdateProgress
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  ProgressBar_o *pPVar1;
  
  pPVar1 = (__this->fields)._progress;
  (__this->fields).IFGGFDOALOG = CJNHFNHJHPE;
  if (pPVar1 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348f268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar1->klass->vtable)._7_set_Value.methodPtr)
              (pPVar1,(pPVar1->klass->vtable)._7_set_Value.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_CurrentProgress()  [RVA 0x338F3DC]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$get_CurrentProgress @ RVA 0x338F3DC

float Nekki_SF2_GUI_Profile_AchievementSubItem__get_CurrentProgress
                (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  return (__this->fields).IFGGFDOALOG;
}


// ===== protected override void BNGDONJEHMH()  [RVA 0x338F3E4]
// Nekki.SF2.GUI.Profile.AchievementSubItem$$BNGDONJEHMH @ RVA 0x338F3E4

void Nekki_SF2_GUI_Profile_AchievementSubItem__BNGDONJEHMH
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  KMJDCOABCCG_o *pKVar1;
  
  Nekki_SF2_GUI_Profile_SubItem__BNGDONJEHMH
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  pKVar1 = (__this->fields).HNNMAMJOEMB;
  if ((pKVar1 != (KMJDCOABCCG_o *)0x0) && ((pKVar1->fields).IGHHPFFGOIM != false)) {
                    /* WARNING: Could not recover jumptable at 0x0348f418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._56_OEIIAJMHBFJ.methodPtr)
              (__this,(__this->klass->vtable)._56_OEIIAJMHBFJ.method);
    return;
  }
  return;
}


// ===== protected void BMJDIKEHBON()  [RVA 0x338EF5C]
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
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_16287/*"achievement_Completed"*/);
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
          pSVar6 = System_String__Concat(pSVar6,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
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
          uVar3 = StringLiteral_16287/*"achievement_Completed"*/;
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

