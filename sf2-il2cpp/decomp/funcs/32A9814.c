// Nekki.SF2.GUI.Fight.RaidFinalFightRatingContent$$Init @ RVA 0x32A9814

void Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent__Init
               (Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_o *__this,ICBMOMGINFH_o *COPNBALDNLF
               ,int32_t GDIJMKKLDPH,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  MethodInfo *pMVar10;
  long lVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  LabelButton_o *pLVar15;
  UnityEngine_Events_UnityEvent_o *__this_00;
  int CJNHFNHJHPE;
  System_String_o *pSVar16;
  undefined8 uVar17;
  int32_t local_44;
  
  method_00 = (MethodInfo *)(ulong)(uint)GDIJMKKLDPH;
  if ((DAT_04567424 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_FHAKJHLHLLC__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_22287);
    DAT_04567424 = 1;
  }
  if (COPNBALDNLF != (ICBMOMGINFH_o *)0x0) {
    CJNHFNHJHPE = (COPNBALDNLF->fields).DHNAEFBMBEG;
    if (CJNHFNHJHPE != 0) {
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = Method_System_Array_Empty<string>__;
      pSVar16 = (__this->fields)._AliasVictory;
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
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033a9c84;
      pIVar12 = pIVar7->klass;
      uVar17 = **(undefined8 **)(lVar8 + 0xb8);
      uVar3._0_1_ = (pIVar12->_2).rank;
      uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar3;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
            goto LAB_033a9980;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033a9980:
      pMVar10 = pVVar9->method;
      pSVar16 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,pSVar16,uVar17);
      uVar1 = (COPNBALDNLF->fields).DHNAEFBMBEG;
      method_00 = (MethodInfo *)(ulong)uVar1;
      Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent__FBHFLIHINOP(__this,pSVar16,uVar1,pMVar10);
    }
    iVar2 = (COPNBALDNLF->fields).FBKKMKKHPBC;
    if (iVar2 != 0) {
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = Method_System_Array_Empty<string>__;
      pSVar16 = (__this->fields)._AliasPosition;
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
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033a9c84;
      pIVar12 = pIVar7->klass;
      uVar17 = **(undefined8 **)(lVar8 + 0xb8);
      uVar4._0_1_ = (pIVar12->_2).rank;
      uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar4;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
            goto LAB_033a9a78;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033a9a78:
      pMVar10 = pVVar9->method;
      CJNHFNHJHPE = iVar2 + CJNHFNHJHPE;
      pSVar16 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,pSVar16,uVar17);
      if (0 < GDIJMKKLDPH) {
        local_44 = GDIJMKKLDPH;
        pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
        pMVar10 = (MethodInfo *)0x0;
        pSVar16 = System_String__Format
                            (StringLiteral_22287,(Il2CppObject *)pSVar16,pIVar7,(MethodInfo *)0x0);
      }
      uVar1 = (COPNBALDNLF->fields).FBKKMKKHPBC;
      method_00 = (MethodInfo *)(ulong)uVar1;
      Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent__FBHFLIHINOP(__this,pSVar16,uVar1,pMVar10);
    }
    iVar2 = (COPNBALDNLF->fields).EJKCJCAPKKG;
    if (iVar2 != 0) {
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = Method_System_Array_Empty<string>__;
      pSVar16 = (__this->fields)._AliasTotalDamage;
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
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033a9c84;
      pIVar12 = pIVar7->klass;
      CJNHFNHJHPE = iVar2 + CJNHFNHJHPE;
      uVar17 = **(undefined8 **)(lVar8 + 0xb8);
      uVar5._0_1_ = (pIVar12->_2).rank;
      uVar5._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar5;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
            goto LAB_033a9bc0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033a9bc0:
      pMVar10 = pVVar9->method;
      pSVar16 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,pSVar16,uVar17);
      uVar1 = (COPNBALDNLF->fields).EJKCJCAPKKG;
      method_00 = (MethodInfo *)(ulong)uVar1;
      Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent__FBHFLIHINOP(__this,pSVar16,uVar1,pMVar10);
    }
    Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent__LGBMPBAIEPA(__this,CJNHFNHJHPE,method_00);
  }
  pLVar15 = (__this->fields)._ButtonOk;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pLVar15 = (__this->fields)._ButtonOk;
  if (pLVar15 != (LabelButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar15->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033a9c84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

