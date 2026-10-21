// LEGDPJHPEOB$$BKOGDOHLABM @ RVA 0x354A2D8

void LEGDPJHPEOB__BKOGDOHLABM
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  DNELIPCHKLK_o *__this_00;
  OOMHDDBCBJP_o *pOVar5;
  ACHLOMELAJE_o *__this_01;
  System_Object_array *pSVar6;
  long lVar7;
  NLPJLHOEAOE_o *__this_02;
  undefined8 uVar8;
  OLKPEJMEBPJ_o *pOVar9;
  MEJIKMPNBNL_o *pMVar10;
  undefined8 *puVar11;
  MMFIDKMDADC_Fields *pMVar12;
  
  if ((DAT_04568b1f & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8602);
    FUN_01bab630(&StringLiteral_1322);
    FUN_01bab630(&StringLiteral_3258);
    FUN_01bab630(&StringLiteral_10672);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8020);
    FUN_01bab630(&StringLiteral_15308);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_10671);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_7076);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568b1f = 1;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364aa54;
  pSVar4 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
  pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(pSVar4,(MethodInfo *)0x0);
  if (uVar2 < 0x406a5eb4) {
    if (uVar2 == 0xfe07306) {
      bVar1 = System_String__op_Equality(pSVar4,StringLiteral_9327,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_0364a7c0;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
      if (pOVar5 != (OOMHDDBCBJP_o *)0x0) {
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
        pSVar4 = (pOVar5->fields).DEKCPPOJFEH;
        goto LAB_0364aa38;
      }
LAB_0364a840:
      pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_0364aa54;
      if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
         (lVar7 = thunk_FUN_01bda71c(__this_00,(((pSVar6->obj).klass)->_1).element_class),
         lVar7 == 0)) goto LAB_0364aa5c;
      if ((int)pSVar6->max_length == 0) goto LAB_0364aa58;
      pSVar6->m_Items[0] = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(pSVar6->m_Items,__this_00);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10671,pSVar6,(MethodInfo *)0x0);
LAB_0364a8ac:
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
      puVar11 = &StringLiteral_1;
    }
    else {
      if (uVar2 == 0x3c2dfe59) {
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_7076,(MethodInfo *)0x0);
        if (!bVar1) goto LAB_0364a7c0;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
        if ((pOVar5 == (OOMHDDBCBJP_o *)0x0) ||
           (pOVar9 = (pOVar5->fields).LFJPDELEIHG, pOVar9 == (OLKPEJMEBPJ_o *)0x0)) {
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
          puVar11 = &StringLiteral_1322;
          goto LAB_0364aa34;
        }
        bVar1 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar9,(MethodInfo *)0x0);
LAB_0364a6ac:
        puVar11 = &StringLiteral_1606;
        if (bVar1 == false) {
          puVar11 = &StringLiteral_1567;
        }
      }
      else {
        if ((uVar2 != 0x406a5eb3) ||
           (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8602,(MethodInfo *)0x0), !bVar1)
           ) {
LAB_0364a7c0:
          pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          if (pSVar6 != (System_Object_array *)0x0) {
            pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
            if ((pSVar4 == (System_String_o *)0x0) ||
               (lVar7 = thunk_FUN_01bda71c(pSVar4,(((pSVar6->obj).klass)->_1).element_class),
               lVar7 != 0)) {
              if ((int)pSVar6->max_length != 0) {
                pSVar6->m_Items[0] = (Il2CppObject *)pSVar4;
                thunk_FUN_01c20e04(pSVar6->m_Items,pSVar4);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10672,pSVar6,(MethodInfo *)0x0);
                return;
              }
LAB_0364aa58:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
LAB_0364aa5c:
            uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar8,0);
          }
          goto LAB_0364aa54;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
        if (((pOVar5 == (OOMHDDBCBJP_o *)0x0) ||
            (pOVar9 = (pOVar5->fields).LFJPDELEIHG, pOVar9 == (OLKPEJMEBPJ_o *)0x0)) ||
           ((pOVar9->fields).PABIMIFJJKF != false)) {
          puVar11 = &StringLiteral_1606;
        }
        else {
          puVar11 = &StringLiteral_1567;
        }
      }
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_0364aa54:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
LAB_0364aa34:
    pSVar4 = (System_String_o *)*puVar11;
  }
  else {
    if (uVar2 < 0x80246151) {
      if (uVar2 == 0x80246150) {
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8020,(MethodInfo *)0x0);
        if (bVar1) {
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
          pMVar12 = &JDGILABGBGH->fields;
          pMVar12->HPACPFLKHPK = StringLiteral_1567;
          thunk_FUN_01c20e04(pMVar12);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
          if (pOVar5 == (OOMHDDBCBJP_o *)0x0) {
            return;
          }
          pOVar9 = (pOVar5->fields).LFJPDELEIHG;
          if (pOVar9 == (OLKPEJMEBPJ_o *)0x0) {
            iVar3 = OOMHDDBCBJP__NHGGBEACKBD(pOVar5,(MethodInfo *)0x0);
            pSVar4 = StringLiteral_1606;
            if (iVar3 != 0x14) {
              return;
            }
          }
          else {
            puVar11 = &StringLiteral_1567;
            if ((pOVar9->fields).PABIMIFJJKF == false) {
              bVar1 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar9,(MethodInfo *)0x0);
              if (!bVar1) {
                puVar11 = &StringLiteral_1606;
              }
            }
            pSVar4 = (System_String_o *)*puVar11;
          }
          pMVar12->HPACPFLKHPK = pSVar4;
          goto LAB_0364aa3c;
        }
      }
      else if ((uVar2 == 0x72402638) &&
              (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_3258,(MethodInfo *)0x0),
              bVar1)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
        if (pOVar5 != (OOMHDDBCBJP_o *)0x0) {
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
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 == (ACHLOMELAJE_o *)0x0) goto LAB_0364aa54;
          bVar1 = ACHLOMELAJE__FPFOAMMHLFG(__this_01,__this_00,(MethodInfo *)0x0);
          goto LAB_0364a6ac;
        }
        pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (pSVar6 == (System_Object_array *)0x0) goto LAB_0364aa54;
        if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(__this_00,(((pSVar6->obj).klass)->_1).element_class),
           lVar7 == 0)) goto LAB_0364aa5c;
        if ((int)pSVar6->max_length == 0) goto LAB_0364aa58;
        pSVar6->m_Items[0] = (Il2CppObject *)__this_00;
        thunk_FUN_01c20e04(pSVar6->m_Items,__this_00);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10671,pSVar6,(MethodInfo *)0x0);
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
        puVar11 = &StringLiteral_1567;
        goto LAB_0364aa34;
      }
      goto LAB_0364a7c0;
    }
    if (uVar2 == 0x86379167) {
      bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15308,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_0364a7c0;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
      if (pOVar5 == (OOMHDDBCBJP_o *)0x0) goto LAB_0364a840;
      pMVar10 = (pOVar5->fields).IAJPHAAMKPC;
      if (pMVar10 == (MEJIKMPNBNL_o *)0x0) goto LAB_0364a8ac;
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
      pSVar4 = (pMVar10->fields).DEKCPPOJFEH;
    }
    else {
      if ((uVar2 != 0xd155d06d) ||
         (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_13991,(MethodInfo *)0x0), !bVar1))
      goto LAB_0364a7c0;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
      if (pOVar5 == (OOMHDDBCBJP_o *)0x0) {
        pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (pSVar6 == (System_Object_array *)0x0) goto LAB_0364aa54;
        if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(__this_00,(((pSVar6->obj).klass)->_1).element_class),
           lVar7 == 0)) goto LAB_0364aa5c;
        if ((int)pSVar6->max_length == 0) goto LAB_0364aa58;
        pSVar6->m_Items[0] = (Il2CppObject *)__this_00;
        thunk_FUN_01c20e04(pSVar6->m_Items,__this_00);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10671,pSVar6,(MethodInfo *)0x0);
        iVar3 = 0xd;
      }
      else {
        iVar3 = OOMHDDBCBJP__NHGGBEACKBD(pOVar5,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((__this_02 == (NLPJLHOEAOE_o *)0x0) ||
         (pSVar4 = NLPJLHOEAOE__PGDMIFLKLJE(__this_02,iVar3,(MethodInfo *)0x0),
         JDGILABGBGH == (MMFIDKMDADC_o *)0x0)) goto LAB_0364aa54;
    }
  }
LAB_0364aa38:
  (JDGILABGBGH->fields).HPACPFLKHPK = pSVar4;
LAB_0364aa3c:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields);
  return;
}

