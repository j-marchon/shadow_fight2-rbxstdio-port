// LEGDPJHPEOB$$GICMLLPMKKF @ RVA 0x354C5DC

void LEGDPJHPEOB__GICMLLPMKKF
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568b26 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10706);
    FUN_01bab630(&StringLiteral_4451);
    FUN_01bab630(&StringLiteral_6825);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568b26 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_4451,(MethodInfo *)0x0);
    if (bVar1) {
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_6825,StringLiteral_1,(MethodInfo *)0x0);
      if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
        (JDGILABGBGH->fields).HPACPFLKHPK = StringLiteral_1;
        thunk_FUN_01c20e04(&JDGILABGBGH->fields);
        return;
      }
    }
    else {
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
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10706,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

