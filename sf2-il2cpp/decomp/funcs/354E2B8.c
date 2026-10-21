// LEGDPJHPEOB$$OAJDAEINPJL @ RVA 0x354E2B8

/* WARNING: Type propagation algorithm not settling */

void LEGDPJHPEOB__OAJDAEINPJL
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  IGFGDDANEPE_o *__this_00;
  DOPEEDABNEK_o *__this_01;
  int64_t iVar5;
  int64_t iVar6;
  System_Object_array *args;
  long lVar7;
  undefined8 uVar8;
  System_String_o **ppSVar9;
  int iVar10;
  LEGDPJHPEOB_o *pLVar11;
  HOOAAGABMBL_o *pHVar12;
  long lStack_58;
  int32_t iStack_44;
  
  if ((DAT_04568b1e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10691);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_10088);
    FUN_01bab630(&StringLiteral_6262);
    FUN_01bab630(&StringLiteral_13809);
    FUN_01bab630(&StringLiteral_14589);
    FUN_01bab630(&StringLiteral_1);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_04568b1e = 1;
  }
  iStack_44 = 0;
  lStack_58 = 0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364a20c;
  pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  __this = (LEGDPJHPEOB_o *)0x0;
  if (pSVar3 == (System_String_o *)0x0) goto LAB_0364a20c;
  pSVar4 = System_String__Split(pSVar3,0x7c,0,(MethodInfo *)0x0);
  __this = (LEGDPJHPEOB_o *)0x0;
  if (pSVar4 == (System_String_array *)0x0) goto LAB_0364a20c;
  if (pSVar4->max_length == 0) {
    return;
  }
  iVar10 = (int)pSVar4->max_length;
  if (iVar10 == 0) {
LAB_0364a210:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  ppSVar9 = pSVar4->m_Items + 1;
  if (iVar10 < 2) {
    ppSVar9 = (System_String_o **)&StringLiteral_1;
  }
  pSVar3 = pSVar4->m_Items[0];
  pLVar11 = (LEGDPJHPEOB_o *)*ppSVar9;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  __this_00 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar3,(MethodInfo *)0x0);
  if (__this_00 == (IGFGDDANEPE_o *)0x0) {
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    __this = (LEGDPJHPEOB_o *)0x0;
    if (__this_01 == (DOPEEDABNEK_o *)0x0) goto LAB_0364a20c;
    pHVar12 = DOPEEDABNEK__CKKIPBAIEMN(__this_01,pSVar3,(MethodInfo *)0x0);
  }
  else {
    pHVar12 = (__this_00->fields).PCBECBEFJOI;
  }
  pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13991,(MethodInfo *)0x0);
  __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
  if (bVar2) {
    ppSVar9 = &(pHVar12->fields)._GMPAEDFIIHF_k__BackingField;
LAB_0364a024:
    ppSVar1 = (System_String_o **)&StringLiteral_1;
    if (pHVar12 != (HOOAAGABMBL_o *)0x0) {
      ppSVar1 = ppSVar9;
    }
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_0364a20c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
    __this = (LEGDPJHPEOB_o *)*ppSVar1;
  }
  else {
    bVar2 = System_String__op_Equality(pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar9 = &(pHVar12->fields)._COIPKAKHDFP_k__BackingField;
      __this = (LEGDPJHPEOB_o *)0x1;
      goto LAB_0364a024;
    }
    bVar2 = System_String__op_Equality(pSVar3,StringLiteral_14589,(MethodInfo *)0x0);
    if (bVar2) {
      if (__this_00 != (IGFGDDANEPE_o *)0x0) {
        iStack_44 = IGFGDDANEPE__LGIMDOAMCNG(__this_00,(MethodInfo *)0x0);
        __this = (LEGDPJHPEOB_o *)System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
        goto joined_r0x0364a09c;
      }
      __this = StringLiteral_1567;
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
        __this = (LEGDPJHPEOB_o *)0x1;
        goto LAB_0364a20c;
      }
    }
    else {
      bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13809,(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_6262,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (LEGDPJHPEOB_o *)0x1;
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364a20c;
          (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pLVar11;
          goto LAB_0364a03c;
        }
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_10088,(MethodInfo *)0x0);
        __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
        if (!bVar2) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          __this = (LEGDPJHPEOB_o *)0x0;
          if (args != (System_Object_array *)0x0) {
            pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
            if ((pSVar3 != (System_String_o *)0x0) &&
               (lVar7 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class),
               lVar7 == 0)) {
              uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar8,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar3;
              thunk_FUN_01c20e04(args->m_Items,pSVar3);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_10691,args,(MethodInfo *)0x0);
              return;
            }
            goto LAB_0364a210;
          }
          goto LAB_0364a20c;
        }
        ppSVar9 = &(pHVar12->fields)._CGBHMINLKLM_k__BackingField;
        goto LAB_0364a024;
      }
      if (__this_00 == (IGFGDDANEPE_o *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar6 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
      lStack_58 = iVar5 - iVar6;
      if (lStack_58 == 0 || iVar5 < iVar6) {
        lStack_58 = 0;
      }
      __this = (LEGDPJHPEOB_o *)System_Int64__ToString((int64_t)&lStack_58,(MethodInfo *)0x0);
joined_r0x0364a09c:
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364a20c;
    }
  }
  (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
  pLVar11 = __this;
LAB_0364a03c:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields,pLVar11);
  return;
}

