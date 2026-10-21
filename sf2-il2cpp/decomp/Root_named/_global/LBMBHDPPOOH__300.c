// TypeDefIndex 300
// Namespace: 
// public class LBMBHDPPOOH : QuestAction
// Fields:
//   private string PKBMGDECOPP; // 0x68
//   private string PADCNCJAKBF; // 0x70
//   private string BILMLBCCEAC; // 0x78
//   private string JEJFDHNBDDO; // 0x80
//   private string PIJNAPJJGJD; // 0x88
//   private string CJBJHFDNPHN; // 0x90
//   private HintGroup KDLLKMPBHKC; // 0x98
//   private IEnumerator AIHIJKKCDNO; // 0xA0
//   private bool KLGOFMGCGLA; // 0xA8
//   private float GGBDGJAEEBA; // 0xAC

// ===== public void .ctor()  [RVA 0x3237D8C]
// LBMBHDPPOOH$$.ctor @ RVA 0x3237D8C

void LBMBHDPPOOH___ctor(LBMBHDPPOOH_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NBNOEKGHMFG()  [RVA 0x3237D94]
// LBMBHDPPOOH$$NBNOEKGHMFG @ RVA 0x3237D94

void LBMBHDPPOOH__NBNOEKGHMFG(LBMBHDPPOOH_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_Events_UnityAction_o *call;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o **ppNVar7;
  UnityEngine_Events_UnityEvent_o *__this_02;
  System_Collections_IEnumerator_o **ppSVar8;
  System_Collections_IEnumerator_o *pSVar9;
  
  if ((DAT_04567036 & 1) == 0) {
    FUN_01bab630(&Method_LBMBHDPPOOH_NBNOEKGHMFG__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567036 = 1;
  }
  if ((__this->fields).KLGOFMGCGLA != false) {
    __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) goto LAB_03337f38;
    Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
  }
  ppNVar7 = &(__this->fields).KDLLKMPBHKC;
  if (*ppNVar7 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*ppNVar7,(MethodInfo *)0x0);
    TutorialExtension__HJDDBKPCAFJ(LAIGNDBNBJG,(MethodInfo *)0x0);
    if (*ppNVar7 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
      __this_02 = ((*ppNVar7)->fields)._OnHintUp;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__RemoveListener(__this_02,call,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).AIHIJKKCDNO;
        if (*ppSVar8 != (System_Collections_IEnumerator_o *)0x0) {
          pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
          if (pPVar2 == (PBAKFOBIHEG_o *)0x0) goto LAB_03337f38;
          pPVar4 = pPVar2->klass;
          pSVar9 = *ppSVar8;
          uVar1._0_1_ = (pPVar4->_2).rank;
          uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
          uVar5 = (ulong)uVar1;
          if (uVar5 != 0) {
            piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar3 = pPVar4->vtable + (*piVar6 + 1);
                goto LAB_03337ed8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03337ed8:
          (*pVVar3->methodPtr)(pPVar2,pSVar9,pVVar3->method);
          *ppSVar8 = (System_Collections_IEnumerator_o *)0x0;
          thunk_FUN_01c20e04(ppSVar8,0);
        }
        *ppNVar7 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
        thunk_FUN_01c20e04(ppNVar7,0);
        __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
          Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,false,(MethodInfo *)0x0);
          QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03337f38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3237F3C]
// LBMBHDPPOOH$$HNIHOIAMDPC @ RVA 0x3237F3C

void LBMBHDPPOOH__HNIHOIAMDPC
               (LBMBHDPPOOH_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567037 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14613/*"UseArrow"*/);
    FUN_01bab630(&StringLiteral_1322/*"-1"*/);
    FUN_01bab630(&StringLiteral_3105/*"ArrowRotation"*/);
    FUN_01bab630(&StringLiteral_3103/*"ArrowOffsetX"*/);
    FUN_01bab630(&StringLiteral_12838/*"Target"*/);
    FUN_01bab630(&StringLiteral_3104/*"ArrowOffsetY"*/);
    FUN_01bab630(&StringLiteral_12163/*"SkipClickDelay"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04567037 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12838/*"Target"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).PKBMGDECOPP = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14613/*"UseArrow"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
        (__this->fields).PADCNCJAKBF = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3103/*"ArrowOffsetX"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
          (__this->fields).BILMLBCCEAC = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_3104/*"ArrowOffsetY"*/,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
            (__this->fields).JEJFDHNBDDO = pSVar3;
            thunk_FUN_01c20e04();
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_3105/*"ArrowRotation"*/,(MethodInfo *)0x0);
              pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
              (__this->fields).PIJNAPJJGJD = pSVar3;
              thunk_FUN_01c20e04();
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_12163/*"SkipClickDelay"*/,(MethodInfo *)0x0);
                pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1322/*"-1"*/,(MethodInfo *)0x0);
                ppSVar4 = &(__this->fields).CJBJHFDNPHN;
                *ppSVar4 = pSVar3;
                thunk_FUN_01c20e04(ppSVar4,pSVar3);
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


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x32381B4]
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
    FUN_01bab630(&StringLiteral_10609/*"QAClickHint: HintGroup '{0}' is not clickable!"*/);
    FUN_01bab630(&StringLiteral_10610/*"QAClickHint: can't find HintGroup by target '{0}'!"*/);
    DAT_04567038 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar14 = (__this->fields).PKBMGDECOPP;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar14 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar14,(MethodInfo *)0x0);
  pNVar3 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)
           QuestAction__GIPCDAILIHJ<object>
                     ((QuestAction_o *)__this,pSVar14,Method_BOFEMGGNODC_GIPCDAILIHJ<HintGroup>__);
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
      puVar9 = &StringLiteral_10610/*"QAClickHint: can't find HintGroup by target '{0}'!"*/;
LAB_033385a8:
      UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar9,args,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
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
          TutorialExtension__GOCEMJOCNEE(LAIGNDBNBJG,(MethodInfo *)0x0);
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
        puVar9 = &StringLiteral_10609/*"QAClickHint: HintGroup '{0}' is not clickable!"*/;
        goto LAB_033385a8;
      }
    }
  }
LAB_03338634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator ABOANDEGADO()  [RVA 0x3238648]
// LBMBHDPPOOH$$ABOANDEGADO @ RVA 0x3238648

System_Collections_IEnumerator_o *
LBMBHDPPOOH__ABOANDEGADO(LBMBHDPPOOH_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567039 & 1) == 0) {
    FUN_01bab630(&LBMBHDPPOOH_PDGEBHKHMLI_TypeInfo);
    DAT_04567039 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(LBMBHDPPOOH_PDGEBHKHMLI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

