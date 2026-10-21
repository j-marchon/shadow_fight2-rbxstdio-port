// LEGDPJHPEOB$$GJIOAPOLCND @ RVA 0x35507A0

void LEGDPJHPEOB__GJIOAPOLCND
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  System_String_o **ppSVar6;
  undefined8 *puVar7;
  System_String_o *a;
  
  if ((DAT_04568b3a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10999);
    FUN_01bab630(&StringLiteral_1322);
    FUN_01bab630(&StringLiteral_10701);
    FUN_01bab630(&StringLiteral_2036);
    FUN_01bab630(&StringLiteral_1882);
    FUN_01bab630(&StringLiteral_12877);
    FUN_01bab630(&StringLiteral_12879);
    FUN_01bab630(&StringLiteral_12875);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_12874);
    DAT_04568b3a = 1;
  }
  if (((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
      (pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0),
      __this = (LEGDPJHPEOB_o *)0x0, pSVar2 == (System_String_o *)0x0)) ||
     (pSVar3 = System_String__Split(pSVar2,0x7c,0,(MethodInfo *)0x0), __this = (LEGDPJHPEOB_o *)0x0,
     pSVar3 == (System_String_array *)0x0)) goto LAB_03650a34;
  if (pSVar3->max_length == 0) {
    ppSVar6 = (System_String_o **)&StringLiteral_1322;
  }
  else {
    if ((int)pSVar3->max_length == 0) goto LAB_03650a38;
    ppSVar6 = pSVar3->m_Items;
  }
  a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  pSVar2 = *ppSVar6;
  bVar1 = System_String__op_Equality(a,StringLiteral_12874,(MethodInfo *)0x0);
  __this = (LEGDPJHPEOB_o *)(ulong)bVar1;
  if (bVar1) {
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
    puVar7 = &StringLiteral_1567;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_12875,(MethodInfo *)0x0);
    __this = (LEGDPJHPEOB_o *)(ulong)bVar1;
    if (bVar1) {
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
      puVar7 = &StringLiteral_1606;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_10999,(MethodInfo *)0x0);
      __this = (LEGDPJHPEOB_o *)(ulong)bVar1;
      if (bVar1) {
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
        puVar7 = &StringLiteral_2036;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_12877,(MethodInfo *)0x0);
        __this = (LEGDPJHPEOB_o *)(ulong)bVar1;
        if (!bVar1) {
          bVar1 = System_String__op_Equality(a,StringLiteral_12879,(MethodInfo *)0x0);
          __this = (LEGDPJHPEOB_o *)(ulong)bVar1;
          if (!bVar1) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            __this = (LEGDPJHPEOB_o *)0x0;
            if (args != (System_Object_array *)0x0) {
              pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
              if ((pSVar2 != (System_String_o *)0x0) &&
                 (lVar4 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class),
                 lVar4 == 0)) {
                uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar5,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)pSVar2;
                thunk_FUN_01c20e04(args->m_Items,pSVar2);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10701,args,(MethodInfo *)0x0);
                return;
              }
LAB_03650a38:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
LAB_03650a34:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8(__this);
          }
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
          (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
          goto LAB_03650968;
        }
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
        puVar7 = &StringLiteral_1882;
      }
    }
  }
  pSVar2 = (System_String_o *)*puVar7;
  (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
LAB_03650968:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar2);
  return;
}

