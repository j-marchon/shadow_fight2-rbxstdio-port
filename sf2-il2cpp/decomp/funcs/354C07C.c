// LEGDPJHPEOB$$GPPPOFIJDBG @ RVA 0x354C07C

void LEGDPJHPEOB__GPPPOFIJDBG
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  LEGDPJHPEOB_o *KGLJICLJHEL;
  ACHLOMELAJE_o *__this_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *__this_01;
  
  if ((DAT_04568b23 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8019);
    FUN_01bab630(&StringLiteral_10708);
    FUN_01bab630(&StringLiteral_1606);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_04568b23 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    KGLJICLJHEL = (LEGDPJHPEOB_o *)
                  NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    __this_01 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    __this = KGLJICLJHEL;
    if (__this_01 != (System_String_o *)0x0) {
      bVar2 = System_String__Equals(__this_01,StringLiteral_8019,(MethodInfo *)0x0);
      if (bVar2) {
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
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        __this = (LEGDPJHPEOB_o *)0x0;
        if (__this_00 != (ACHLOMELAJE_o *)0x0) {
          bVar2 = ACHLOMELAJE__MHLDNEBLNJG
                            (__this_00,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
          __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
          puVar1 = &StringLiteral_1606;
          if (!bVar2) {
            puVar1 = &StringLiteral_1567;
          }
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
            (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
            thunk_FUN_01c20e04(&JDGILABGBGH->fields);
            return;
          }
        }
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        __this = (LEGDPJHPEOB_o *)0x0;
        if (args != (System_Object_array *)0x0) {
          lVar3 = thunk_FUN_01bda71c(__this_01,(((args->obj).klass)->_1).element_class);
          if (lVar3 == 0) {
            uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar4,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = (Il2CppObject *)__this_01;
            thunk_FUN_01c20e04(args->m_Items,__this_01);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_10708,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

