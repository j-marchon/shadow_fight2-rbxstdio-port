// LEGDPJHPEOB$$HGLOABLOKGJ @ RVA 0x354AA68

void LEGDPJHPEOB__HGLOABLOKGJ
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  CFGLKHFFEKA_o *__this_00;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  int32_t local_24;
  
  if ((DAT_04568b20 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10702);
    FUN_01bab630(&StringLiteral_6614);
    FUN_01bab630(&StringLiteral_8803);
    FUN_01bab630(&StringLiteral_9075);
    FUN_01bab630(&StringLiteral_10488);
    FUN_01bab630(&StringLiteral_5196);
    FUN_01bab630(&StringLiteral_14765);
    DAT_04568b20 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364acfc;
  pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar4,StringLiteral_10488,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
    local_24 = CFGLKHFFEKA__OJDCDFFBHPD(__this_00,(MethodInfo *)0x0);
LAB_0364abf0:
    pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8803,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
      local_24 = CFGLKHFFEKA__FOAJCPHJDKL(__this_00,(MethodInfo *)0x0);
      goto LAB_0364abf0;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_9075,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
      local_24 = CFGLKHFFEKA__KFFCDKLFGGP(__this_00,(MethodInfo *)0x0);
      goto LAB_0364abf0;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_5196,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
      local_24 = CFGLKHFFEKA__KEAMCFNFPHB(__this_00,(MethodInfo *)0x0);
      goto LAB_0364abf0;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_6614,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_14765,(MethodInfo *)0x0), !bVar1)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar4 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04(args->m_Items,pSVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10702,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0364acfc;
    }
    if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
    pSVar4 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  }
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
    (JDGILABGBGH->fields).HPACPFLKHPK = pSVar4;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar4);
    return;
  }
LAB_0364acfc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

