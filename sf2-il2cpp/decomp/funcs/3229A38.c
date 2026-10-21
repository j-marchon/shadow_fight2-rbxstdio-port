// LPGPNBGHDBD$$NLJJHFHHKMF @ RVA 0x3229A38

System_String_o *
LPGPNBGHDBD__NLJJHFHHKMF
          (BECIPDJBAOG_o *KJADEEFANAL,int32_t MEGOOCKNJOH,int32_t MKOINMONMKL,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  System_String_o *pSVar7;
  JMDPBFOCHHP_ODJJOAOCFKO_o *pJVar8;
  VirtualInvokeData *pVVar9;
  long lVar10;
  JMDPBFOCHHP_o *pJVar11;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar12;
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *pHVar13;
  System_Object_array *args;
  Il2CppObject *pIVar14;
  undefined8 uVar15;
  MethodInfo *in_x5;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__c *pGVar16;
  ulong uVar17;
  int32_t *piVar18;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar19;
  uint uVar20;
  System_String_o *pSVar21;
  int32_t local_74;
  int32_t local_70;
  int32_t local_6c;
  System_String_o *local_68;
  
  if ((DAT_04566f91 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5562);
    FUN_01bab630(&StringLiteral_10929);
    FUN_01bab630(&StringLiteral_9095);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_2448);
    DAT_04566f91 = 1;
  }
  local_68 = StringLiteral_1;
  local_6c = 0;
  if (KJADEEFANAL != (BECIPDJBAOG_o *)0x0) {
    bVar5 = BECIPDJBAOG__HMCAGKEIIGO(KJADEEFANAL,(MethodInfo *)0x0);
    if (bVar5) {
      local_6c = (KJADEEFANAL->fields).NLLKMEMKBAF;
      pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
      }
      LPGPNBGHDBD__LGCPLHMKOKA(&local_68,StringLiteral_10929,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
    }
    bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_IList_T__o *)(KJADEEFANAL->fields).LEJBLHJFJHP,
                       Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    if (bVar5) {
LAB_03329ba8:
      bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_IList_T__o *)(KJADEEFANAL->fields).AKFPFIHIHOC,
                         Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
      if (bVar5) {
LAB_03329bbc:
        bVar5 = BECIPDJBAOG__BODMFFONFKC(KJADEEFANAL,(MethodInfo *)0x0);
        if (bVar5) {
          local_6c = (KJADEEFANAL->fields).EMOLIBOCKJK;
          pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
          if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
          }
          LPGPNBGHDBD__LGCPLHMKOKA
                    (&local_68,StringLiteral_9095,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
        }
        return local_68;
      }
      pGVar19 = (KJADEEFANAL->fields).AKFPFIHIHOC;
      if (pGVar19 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        uVar20 = 0;
        do {
          pGVar16 = pGVar19->klass;
          uVar3._0_1_ = (pGVar16->_2).rank;
          uVar3._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar3;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329e40;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo
                                ,0);
LAB_03329e40:
          iVar6 = (*pVVar9->methodPtr)(pGVar19,pVVar9->method);
          if (iVar6 <= (int)uVar20) goto LAB_03329bbc;
          pGVar16 = pGVar19->klass;
          uVar4._0_1_ = (pGVar16->_2).rank;
          uVar4._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar4;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329ea0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo,0);
LAB_03329ea0:
          lVar10 = (*pVVar9->methodPtr)(pGVar19,(ulong)uVar20,pVVar9->method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          pJVar11 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (((lVar10 == 0) || (pJVar11 == (JMDPBFOCHHP_o *)0x0)) ||
             (pJVar12 = JMDPBFOCHHP__FPPDGOEOJCH
                                  (pJVar11,*(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0),
             pJVar12 == (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0)) break;
          bVar5 = System_String__op_Inequality
                            ((pJVar12->fields).BGHFADDGPAD,StringLiteral_5562,(MethodInfo *)0x0);
          if (bVar5) {
            local_6c = *(int32_t *)(lVar10 + 0x20);
            pSVar21 = (pJVar12->fields).super.APBICPEOMOM;
            pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
            if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
            }
            LPGPNBGHDBD__LGCPLHMKOKA(&local_68,pSVar21,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
          }
          else {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if ((__this == (DOPEEDABNEK_o *)0x0) ||
               (pHVar13 = DOPEEDABNEK__CKKIPBAIEMN
                                    (__this,*(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0),
               pHVar13 == (HOOAAGABMBL_o *)0x0)) break;
            bVar5 = PCOEHCPGBBG__BDLEIEHBFAD
                              ((pHVar13->fields)._EFJILFLLDLG_k__BackingField,(MethodInfo *)0x0);
            if (!bVar5) {
              args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
              pSVar7 = OFFIONDOEPM__AMJCJJALAJH
                                 ((pHVar13->fields)._EFJILFLLDLG_k__BackingField,(MethodInfo *)0x0);
              if (args == (System_Object_array *)0x0) break;
              if ((pSVar7 != (System_String_o *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) {
LAB_0332a12c:
                uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar15,0);
              }
              if ((int)args->max_length == 0) {
LAB_0332a128:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              args->m_Items[0] = (Il2CppObject *)pSVar7;
              thunk_FUN_01c20e04(args->m_Items,pSVar7);
              local_70 = MEGOOCKNJOH;
              pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
              if ((pIVar14 != (Il2CppObject *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) goto LAB_0332a12c;
              if ((uint)args->max_length < 2) goto LAB_0332a128;
              args->m_Items[1] = pIVar14;
              thunk_FUN_01c20e04(args->m_Items + 1,pIVar14);
              local_74 = MKOINMONMKL;
              pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_74);
              if ((pIVar14 != (Il2CppObject *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) goto LAB_0332a12c;
              if ((uint)args->max_length < 3) goto LAB_0332a128;
              args->m_Items[2] = pIVar14;
              thunk_FUN_01c20e04(args->m_Items + 2,pIVar14);
              pSVar7 = local_68;
              if ((local_68 != (System_String_o *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(local_68,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) goto LAB_0332a12c;
              if ((uint)args->max_length < 4) goto LAB_0332a128;
              args->m_Items[3] = (Il2CppObject *)pSVar7;
              thunk_FUN_01c20e04(args->m_Items + 3,pSVar7);
              local_68 = System_String__Format(StringLiteral_2448,args,(MethodInfo *)0x0);
            }
          }
          uVar20 = uVar20 + 1;
        } while( true );
      }
    }
    else {
      pGVar19 = (KJADEEFANAL->fields).LEJBLHJFJHP;
      if (pGVar19 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        uVar20 = 0;
        do {
          pGVar16 = pGVar19->klass;
          uVar1._0_1_ = (pGVar16->_2).rank;
          uVar1._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar1;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329cc4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo
                                ,0);
LAB_03329cc4:
          iVar6 = (*pVVar9->methodPtr)(pGVar19,pVVar9->method);
          if (iVar6 <= (int)uVar20) goto LAB_03329ba8;
          pGVar16 = pGVar19->klass;
          uVar2._0_1_ = (pGVar16->_2).rank;
          uVar2._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar2;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329d24;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo,0);
LAB_03329d24:
          lVar10 = (*pVVar9->methodPtr)(pGVar19,(ulong)uVar20,pVVar9->method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          pJVar11 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (((lVar10 == 0) || (pJVar11 == (JMDPBFOCHHP_o *)0x0)) ||
             (pJVar8 = JMDPBFOCHHP__DOKLIOAMCCO
                                 (pJVar11,*(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0),
             pJVar8 == (JMDPBFOCHHP_ODJJOAOCFKO_o *)0x0)) break;
          local_6c = *(int32_t *)(lVar10 + 0x20);
          pSVar21 = (pJVar8->fields).APBICPEOMOM;
          pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
          if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
          }
          LPGPNBGHDBD__LGCPLHMKOKA(&local_68,pSVar21,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
          uVar20 = uVar20 + 1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

