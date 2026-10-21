// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$MPMLPHHDCFM @ RVA 0x330F268

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MPMLPHHDCFM
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *PBPPGACOCOF,
               HOOAAGABMBL_o *HCJEJCBNDHC,int32_t DFIBGGDJPLM,System_String_o *JJLDDJKKHEO,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar5;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  Il2CppObject *pIVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  ACHLOMELAJE_o *__this_02;
  int64_t iVar10;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_o *str3;
  EEGDOGKBLNG_o *pEVar11;
  UnityEngine_GameObject_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  LabelButton_o *pLVar16;
  undefined8 uVar17;
  LabelButton_o **ppLVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Color_o UVar23;
  UnityEngine_Color_o CJNHFNHJHPE;
  int local_58;
  int local_54;
  int64_t local_48;
  
  if ((DAT_045677a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_2427);
    FUN_01bab630(&StringLiteral_17848);
    FUN_01bab630(&StringLiteral_550);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_22509);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_10045);
    FUN_01bab630(&StringLiteral_17849);
    FUN_01bab630(&StringLiteral_17793);
    DAT_045677a3 = 1;
  }
  local_58 = 0;
  bVar3 = System_String__op_Equality
                    ((__this->fields).HBJEOMFBMMC,StringLiteral_8722,(MethodInfo *)0x0);
  if ((!bVar3) &&
     ((bVar3 = System_String__op_Equality
                         ((__this->fields).HBJEOMFBMMC,StringLiteral_10045,(MethodInfo *)0x0),
      DFIBGGDJPLM != 0 || (!bVar3)))) {
    bVar3 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_10045,(MethodInfo *)0x0);
    pLVar16 = (__this->fields)._consumableButton;
    if (pLVar16 == (LabelButton_o *)0x0) goto LAB_0340fa18;
    if ((DFIBGGDJPLM != 0) && (bVar3)) {
      LabelButton__set_ButtonColor(pLVar16,4,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,method_00);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar11 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar11 != (EEGDOGKBLNG_o *)0x0) {
        bVar3 = System_String__op_Equality
                          (JJLDDJKKHEO,(pEVar11->fields).PDHCLFKCAAE,(MethodInfo *)0x0);
        pLVar16 = (__this->fields)._consumableButton;
        if (pLVar16 != (LabelButton_o *)0x0) {
          if (bVar3) {
            LabelButton__set_Alias(pLVar16,StringLiteral_17849,(MethodInfo *)0x0);
            if (PBPPGACOCOF != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                        (PBPPGACOCOF,true,(MethodInfo *)0x0);
              LJLLAKHOFFF__JAEOMHIAHJB
                        ((UnityEngine_UI_Button_o *)(__this->fields)._consumableButton,2,true,
                         (MethodInfo *)0x0);
              return;
            }
          }
          else {
            LabelButton__set_Alias(pLVar16,StringLiteral_17848,(MethodInfo *)0x0);
            if (PBPPGACOCOF != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                        (PBPPGACOCOF,false,(MethodInfo *)0x0);
                    /* try { // try from 0340f9d4 to 0350fb8f has its CatchHandler @ 0340f9d4
                       catch() { ... } // from try @ 0340f9d4 with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fcdc with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fd40 with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fdac with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fdec with catch @ 0340f9d4 */
              LJLLAKHOFFF__JAEOMHIAHJB
                        ((UnityEngine_UI_Button_o *)(__this->fields)._consumableButton,0,true,
                         (MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__JIMIDEDINCP(__this,method_01);
              return;
            }
          }
        }
      }
      goto LAB_0340fa18;
    }
    __this_04 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pLVar16,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_GameObject_o *)0x0) goto LAB_0340fa18;
    bVar3 = false;
    goto LAB_0340f980;
  }
  if (HCJEJCBNDHC == (HOOAAGABMBL_o *)0x0) goto LAB_0340fa18;
  local_48 = HOOAAGABMBL__MNKCHHFDEGH(HCJEJCBNDHC,(MethodInfo *)0x0);
  bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
  if (((HCJEJCBNDHC->klass->_2).naturalAligment < bVar1) ||
     ((HCJEJCBNDHC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(HCJEJCBNDHC);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((HCJEJCBNDHC[1].klass == (HOOAAGABMBL_c *)0x0) || (__this_00 == (JMDPBFOCHHP_o *)0x0))
  goto LAB_0340fa18;
  pJVar5 = JMDPBFOCHHP__OJOIAONADNG
                     (__this_00,((HCJEJCBNDHC[1].klass)->_1).this_arg.data,(MethodInfo *)0x0);
  local_54 = 0;
  if ((pJVar5 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) || ((pJVar5->fields).HNGIBIJJKAP == false)) {
    pLVar16 = (__this->fields)._consumableButton;
LAB_0340f664:
    pSVar7 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat(StringLiteral_2427,pSVar7,(MethodInfo *)0x0);
  }
  else {
    __this_01 = (pJVar5->fields).GFBNJPMOEKD;
    if ((__this_01 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) ||
       (pIVar6 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,0,
                            Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__),
       pIVar6 == (Il2CppObject *)0x0)) goto LAB_0340fa18;
    local_54 = *(int *)&pIVar6[1].monitor;
    pLVar16 = (__this->fields)._consumableButton;
    if (local_54 < 2) goto LAB_0340f664;
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values == (System_String_array *)0x0) goto LAB_0340fa18;
    if ((int)values->max_length == 0) {
LAB_0340fa24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[0] = StringLiteral_17793;
    thunk_FUN_01c20e04(values->m_Items);
    pSVar7 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
    if ((uint)values->max_length < 2) goto LAB_0340fa24;
    values->m_Items[1] = pSVar7;
    thunk_FUN_01c20e04(values->m_Items + 1,pSVar7);
    if ((uint)values->max_length < 3) goto LAB_0340fa24;
    values->m_Items[2] = StringLiteral_22509;
    thunk_FUN_01c20e04(values->m_Items + 2);
    pSVar7 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto LAB_0340fa24;
    values->m_Items[3] = pSVar7;
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar7);
    if ((uint)values->max_length < 5) goto LAB_0340fa24;
    values->m_Items[4] = StringLiteral_22500;
    thunk_FUN_01c20e04();
    pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
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
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0340fa18;
    pIVar13 = pIVar6->klass;
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
          goto LAB_0340fa00;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0340fa00:
    pSVar7 = (System_String_o *)(*pVVar9->methodPtr)(pIVar6,pSVar7,uVar17,pVVar9->method);
  }
  if (pLVar16 != (LabelButton_o *)0x0) {
    ppLVar18 = &(__this->fields)._consumableButton;
    LabelButton__set_Text(pLVar16,pSVar7,(MethodInfo *)0x0);
    pLVar16 = *ppLVar18;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_02 != (ACHLOMELAJE_o *)0x0) {
      iVar10 = ACHLOMELAJE__HEHFNBKGJLP(__this_02,(MethodInfo *)0x0);
      if (iVar10 < local_48) {
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar23 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
        fVar22 = UVar23.fields.a;
        fVar21 = UVar23.fields.b;
        fVar20 = UVar23.fields.g;
        fVar19 = UVar23.fields.r;
      }
      else {
        fVar22 = 1.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
      }
      if (pLVar16 != (LabelButton_o *)0x0) {
        UVar23.fields.g = fVar20;
        UVar23.fields.r = fVar19;
        UVar23.fields.a = fVar22;
        UVar23.fields.b = fVar21;
        LabelButton__set_Color(pLVar16,UVar23,(MethodInfo *)0x0);
        if (*ppLVar18 != (LabelButton_o *)0x0) {
          LabelButton__set_ButtonColor(*ppLVar18,2,(MethodInfo *)0x0);
          LJLLAKHOFFF__JAEOMHIAHJB((UnityEngine_UI_Button_o *)*ppLVar18,0,true,(MethodInfo *)0x0);
          if ((HCJEJCBNDHC[1].klass != (HOOAAGABMBL_c *)0x0) &&
             (__this_03 = (System_Collections_Generic_List_object__o *)
                          ((HCJEJCBNDHC[1].klass)->_1).implementedInterfaces,
             __this_03 != (System_Collections_Generic_List_object__o *)0x0)) {
            if ((__this_03->fields)._size < 1) {
              return;
            }
            pIVar6 = System_Collections_Generic_List<object>__get_Item
                               (__this_03,0,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                               );
            if (pIVar6 != (Il2CppObject *)0x0) {
              pIVar13 = pIVar6[1].klass;
              local_58 = *(int *)&pIVar6[1].monitor;
              pSVar7 = OFFIONDOEPM__CDGICMOFKHE((System_String_o *)pIVar13,(MethodInfo *)0x0);
              pLVar16 = (__this->fields)._specialButton;
              str3 = System_Int32__ToString((int32_t)&local_58,(MethodInfo *)0x0);
              pSVar7 = System_String__Concat
                                 (StringLiteral_2422,pSVar7,StringLiteral_550,str3,(MethodInfo *)0x0
                                 );
              if (pLVar16 != (LabelButton_o *)0x0) {
                LabelButton__set_Text(pLVar16,pSVar7,(MethodInfo *)0x0);
                pLVar16 = (__this->fields)._specialButton;
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pEVar11 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar11 != (EEGDOGKBLNG_o *)0x0) {
                  iVar4 = EEGDOGKBLNG__APFFEAJBAEK
                                    (pEVar11,(System_String_o *)pIVar13,(MethodInfo *)0x0);
                  if (iVar4 < local_58) {
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar23 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar22 = UVar23.fields.a;
                    fVar21 = UVar23.fields.b;
                    fVar20 = UVar23.fields.g;
                    fVar19 = UVar23.fields.r;
                  }
                  else {
                    fVar22 = 1.0;
                    fVar19 = 0.0;
                    fVar20 = 0.0;
                    fVar21 = 0.0;
                  }
                  if (pLVar16 != (LabelButton_o *)0x0) {
                    CJNHFNHJHPE.fields.g = fVar20;
                    CJNHFNHJHPE.fields.r = fVar19;
                    CJNHFNHJHPE.fields.a = fVar22;
                    CJNHFNHJHPE.fields.b = fVar21;
                    LabelButton__set_Color(pLVar16,CJNHFNHJHPE,(MethodInfo *)0x0);
                    pLVar16 = (__this->fields)._specialButton;
                    if ((pLVar16 != (LabelButton_o *)0x0) &&
                       (__this_04 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pLVar16,(MethodInfo *)0x0)
                       , __this_04 != (UnityEngine_GameObject_o *)0x0)) {
                      bVar3 = true;
LAB_0340f980:
                      UnityEngine_GameObject__SetActive(__this_04,bVar3,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0340fa18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

