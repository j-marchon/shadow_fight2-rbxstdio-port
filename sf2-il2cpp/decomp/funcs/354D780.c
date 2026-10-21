// LEGDPJHPEOB$$LADIDEFJJMK @ RVA 0x354D780

void LEGDPJHPEOB__LADIDEFJJMK
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  ACHLOMELAJE_o *pAVar4;
  LPAPAMPGDFN_o *pLVar5;
  void *pvVar6;
  System_String_o *pSVar7;
  
  if ((DAT_04568b2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_13979);
    FUN_01bab630(&StringLiteral_10695);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_11337);
    DAT_04568b2f = 1;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364d988;
  pSVar7 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar7,StringLiteral_13979,(MethodInfo *)0x0);
  if (bVar1) {
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
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (LEGDPJHPEOB_o *)NLPJLHOEAOE_TypeInfo;
    if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
       (pLVar5 = (pAVar4->fields).LMCDOMHENMC, pLVar5 == (LPAPAMPGDFN_o *)0x0)) goto LAB_0364d988;
    __this = (LEGDPJHPEOB_o *)
             CONLFJJLALA__GKMAFGODLLG((pLVar5->fields).AMIMEMOELHE,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar7,StringLiteral_11337,(MethodInfo *)0x0);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (LEGDPJHPEOB_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar7 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar7;
          thunk_FUN_01c20e04(args->m_Items,pSVar7);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10695,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0364d988;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = (LEGDPJHPEOB_o *)HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (((NLPJLHOEAOE_c *)__this == (NLPJLHOEAOE_c *)0x0) ||
       (pvVar6 = (((NLPJLHOEAOE_c *)__this)->_1).generic_class, pvVar6 == (void *)0x0))
    goto LAB_0364d988;
    __this = (LEGDPJHPEOB_o *)System_Int32__ToString((int)pvVar6 + 0x10,(MethodInfo *)0x0);
  }
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
    (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields,__this);
    return;
  }
LAB_0364d988:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

