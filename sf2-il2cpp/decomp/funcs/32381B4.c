// LBMBHDPPOOH$$MAHFCKJGBPP @ RVA 0x32381B4

void LBMBHDPPOOH__MAHFCKJGBPP(LBMBHDPPOOH_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *pNVar3;
  System_Object_array *args;
  long lVar4;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  UnityEngine_Transform_o *INPDGILCEBL;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_Events_UnityAction_o *call;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  MethodInfo *method_00;
  undefined8 *puVar9;
  PBAKFOBIHEG_c *pPVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_Collections_IEnumerator_o **ppSVar13;
  UnityEngine_Events_UnityEvent_o *__this_02;
  System_String_o *pSVar14;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o **ppNVar15;
  float fVar16;
  float HDLADBMEOCC;
  UnityEngine_Vector2_o CPFDIFKIPBN;
  
  if ((DAT_04567038 & 1) == 0) {
    FUN_01bab630(&Method_BOFEMGGNODC_GIPCDAILIHJ<HintGroup>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_LBMBHDPPOOH_NBNOEKGHMFG__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10609);
    FUN_01bab630(&StringLiteral_10610);
    DAT_04567038 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar14 = (__this->fields).PKBMGDECOPP;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar14 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar14,(MethodInfo *)0x0);
  pNVar3 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)
           BOFEMGGNODC__GIPCDAILIHJ<object>
                     ((BOFEMGGNODC_o *)__this,pSVar14,Method_BOFEMGGNODC_GIPCDAILIHJ<HintGroup>__);
  ppNVar15 = &(__this->fields).KDLLKMPBHKC;
  *ppNVar15 = pNVar3;
  thunk_FUN_01c20e04(ppNVar15);
  pNVar3 = *ppNVar15;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args != (System_Object_array *)0x0) {
      if ((pSVar14 != (System_String_o *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pSVar14,(((args->obj).klass)->_1).element_class), lVar4 == 0))
      {
LAB_0333863c:
        uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar8,0);
      }
      if ((int)args->max_length == 0) {
LAB_03338638:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pSVar14;
      thunk_FUN_01c20e04(args->m_Items,pSVar14);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar9 = &StringLiteral_10610;
LAB_033385a8:
      UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar9,args,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else if (*ppNVar15 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
    bVar2 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable(*ppNVar15,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar14 = (__this->fields).PADCNCJAKBF;
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = MFBNFJGBPBB__EDBBDECOKAF(MNBMHEAHIIA,pSVar14,(MethodInfo *)0x0);
      (__this->fields).KLGOFMGCGLA = bVar2;
      fVar16 = MFBNFJGBPBB__DCIAJFJIMNK(MNBMHEAHIIA,(__this->fields).CJBJHFDNPHN,(MethodInfo *)0x0);
      (__this->fields).GGBDGJAEEBA = fVar16;
      __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
        if ((__this->fields).KLGOFMGCGLA != false) {
          __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
          if (*ppNVar15 == (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) goto LAB_03338634;
          INPDGILCEBL = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)*ppNVar15,(MethodInfo *)0x0);
          pSVar14 = (__this->fields).BILMLBCCEAC;
          if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
          }
          CPFDIFKIPBN.fields.x = MFBNFJGBPBB__DCIAJFJIMNK(MNBMHEAHIIA,pSVar14,(MethodInfo *)0x0);
          fVar16 = MFBNFJGBPBB__DCIAJFJIMNK
                             (MNBMHEAHIIA,(__this->fields).JEJFDHNBDDO,(MethodInfo *)0x0);
          HDLADBMEOCC = MFBNFJGBPBB__DCIAJFJIMNK
                                  (MNBMHEAHIIA,(__this->fields).PIJNAPJJGJD,(MethodInfo *)0x0);
          if (__this_01 == (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) goto LAB_03338634;
          CPFDIFKIPBN.fields.y = fVar16;
          Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                    (__this_01,INPDGILCEBL,CPFDIFKIPBN,HDLADBMEOCC,(MethodInfo *)0x0);
        }
        if (*ppNVar15 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
          LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)*ppNVar15,(MethodInfo *)0x0);
          AKJJAPEHKCG__GOCEMJOCNEE(LAIGNDBNBJG,(MethodInfo *)0x0);
          if (*ppNVar15 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
            __this_02 = ((*ppNVar15)->fields)._OnHintUp;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
              if ((__this->fields).GGBDGJAEEBA <= 0.0) {
                return;
              }
              pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
              pSVar6 = LBMBHDPPOOH__ABOANDEGADO(__this,method_00);
              if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
                pPVar10 = pPVar5->klass;
                uVar1._0_1_ = (pPVar10->_2).rank;
                uVar1._1_1_ = (pPVar10->_2).minimumAlignment;
                uVar11 = (ulong)uVar1;
                if (uVar11 != 0) {
                  piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                        (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                      pVVar7 = pPVar10->vtable + *piVar12;
                      goto LAB_033385fc;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_033385fc:
                pSVar6 = (System_Collections_IEnumerator_o *)
                         (*pVVar7->methodPtr)(pPVar5,pSVar6,1,pVVar7->method);
                ppSVar13 = &(__this->fields).AIHIJKKCDNO;
                *ppSVar13 = pSVar6;
                thunk_FUN_01c20e04(ppSVar13,pSVar6);
                return;
              }
            }
          }
        }
      }
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        if ((pSVar14 != (System_String_o *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pSVar14,(((args->obj).klass)->_1).element_class), lVar4 == 0)
           ) goto LAB_0333863c;
        if ((int)args->max_length == 0) goto LAB_03338638;
        args->m_Items[0] = (Il2CppObject *)pSVar14;
        thunk_FUN_01c20e04(args->m_Items,pSVar14);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        puVar9 = &StringLiteral_10609;
        goto LAB_033385a8;
      }
    }
  }
LAB_03338634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

