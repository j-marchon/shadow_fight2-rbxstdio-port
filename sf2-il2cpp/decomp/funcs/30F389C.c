// Nekki.SF2.GUI.Dialogs.TradeDialog$$Init @ RVA 0x30F389C

void Nekki_SF2_GUI_Dialogs_TradeDialog__Init
               (Nekki_SF2_GUI_Dialogs_TradeDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  undefined8 uVar10;
  System_String_o **ppSVar11;
  bool value;
  undefined1 uVar12;
  undefined8 *puVar13;
  long lVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  System_String_o *pSVar18;
  System_String_o *DOEJEADIJEJ;
  Nekki_SF2_GUI_LabelAlias_o *pNVar19;
  undefined8 uVar20;
  
  if ((DAT_0456643e & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&KIDHEMFNDEK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_20991);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17810);
    FUN_01bab630(&StringLiteral_17847);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17768);
    FUN_01bab630(&StringLiteral_17767);
    FUN_01bab630(&StringLiteral_17821);
    FUN_01bab630(&StringLiteral_17846);
    FUN_01bab630(&StringLiteral_17845);
    FUN_01bab630(&StringLiteral_17812);
    FUN_01bab630(&StringLiteral_17811);
    DAT_0456643e = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).PCNEDMAJMOJ = 0;
    (__this->fields).OFJCBIEADON = 0;
    (__this->fields).HGCGINNLIEC = 0;
    (__this->fields).MLPKGJACOFA = (System_String_o *)0x0;
    (__this->fields).BHBEFOMAGCC = 0;
    thunk_FUN_01c20e04(&(__this->fields).MLPKGJACOFA,0);
    uVar12 = false;
  }
  else {
    bVar2 = (KIDHEMFNDEK_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)KIDHEMFNDEK_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    (__this->fields).HGCGINNLIEC = (int64_t)IMMNELPBGIF[2].klass;
    *(void **)&(__this->fields).PCNEDMAJMOJ = IMMNELPBGIF[1].monitor;
    (__this->fields).BHBEFOMAGCC = (int64_t)IMMNELPBGIF[2].monitor;
    (__this->fields).MLPKGJACOFA = (System_String_o *)IMMNELPBGIF[3].klass;
    thunk_FUN_01c20e04(&(__this->fields).MLPKGJACOFA);
    uVar12 = *(undefined1 *)&IMMNELPBGIF[3].monitor;
  }
  iVar1 = (__this->fields).OFJCBIEADON;
  (__this->fields).KGEDEAGBKGB = (bool_conflict)uVar12;
  pSVar18 = StringLiteral_20991;
  DOEJEADIJEJ = StringLiteral_17845;
  if (iVar1 == 1) {
    (__this->fields).JOIGFPPEHGI = StringLiteral_17847;
    thunk_FUN_01c20e04();
    puVar13 = &StringLiteral_17846;
LAB_031f3a84:
    (__this->fields).CKAKBPJOALE = (System_String_o *)*puVar13;
    thunk_FUN_01c20e04();
  }
  else {
    DOEJEADIJEJ = StringLiteral_9679;
    if (iVar1 == 0) {
      (__this->fields).JOIGFPPEHGI = StringLiteral_17768;
      thunk_FUN_01c20e04();
      puVar13 = &StringLiteral_17767;
      DOEJEADIJEJ = pSVar18;
      goto LAB_031f3a84;
    }
  }
  pSVar4 = StringLiteral_17845;
  pSVar18 = StringLiteral_17810;
  if (0 < (__this->fields).BHBEFOMAGCC) {
    if ((__this->fields).OFJCBIEADON == 1) {
      (__this->fields).JOIGFPPEHGI = StringLiteral_17847;
      thunk_FUN_01c20e04();
      puVar13 = &StringLiteral_17846;
      pSVar18 = pSVar4;
    }
    else {
      (__this->fields).JOIGFPPEHGI = StringLiteral_17812;
      thunk_FUN_01c20e04();
      puVar13 = &StringLiteral_17811;
    }
    (__this->fields).CKAKBPJOALE = (System_String_o *)*puVar13;
    thunk_FUN_01c20e04();
    DOEJEADIJEJ = pSVar18;
  }
  pNVar5 = (__this->fields)._checkbox;
  if (pNVar5 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
    if ((__this->fields).KGEDEAGBKGB == false) {
      pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
        pNVar19 = (__this->fields)._checkboxLabel;
        if ((pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar19,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          value = false;
LAB_031f3cb8:
          UnityEngine_GameObject__SetActive(pUVar6,value,(MethodInfo *)0x0);
          ppSVar11 = &(__this->fields).super.NIEHEOKFPAN;
          *ppSVar11 = DOEJEADIJEJ;
          thunk_FUN_01c20e04(ppSVar11,DOEJEADIJEJ);
          if ((IMMNELPBGIF != (Il2CppObject *)0x0) && (IMMNELPBGIF[1].klass != (Il2CppClass *)0x0))
          {
            Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                      ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                       (System_Action_T__o *)IMMNELPBGIF[1].klass,
                       Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
          }
          Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(__this->fields).JOIGFPPEHGI,
                     DOEJEADIJEJ,StringLiteral_3640,3,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      Nekki_SF2_GUI_Scripts_CheckBox__set_State(pNVar5,1,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      if ((pNVar5 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
        pNVar19 = (__this->fields)._checkboxLabel;
        pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar8 = Method_System_Array_Empty<string>__;
        lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar14 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar14 = *(long *)(lVar8 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01b81620();
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        uVar10 = StringLiteral_17821;
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar15 = pIVar7->klass;
          uVar20 = **(undefined8 **)(lVar8 + 0xb8);
          uVar3._0_1_ = (pIVar15->_2).rank;
          uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
          uVar16 = (ulong)uVar3;
          if (uVar16 != 0) {
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar15->vtable + (*piVar17 + 0xc);
                goto LAB_031f3c70;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031f3c70:
          uVar10 = (*pVVar9->methodPtr)(pIVar7,uVar10,uVar20,pVVar9->method);
          if (pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar19->klass->vtable)._75_set_text.methodPtr)
                      (pNVar19,uVar10,(pNVar19->klass->vtable)._75_set_text.method);
            pNVar19 = (__this->fields)._checkboxLabel;
            if ((pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar19,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              value = true;
              goto LAB_031f3cb8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

