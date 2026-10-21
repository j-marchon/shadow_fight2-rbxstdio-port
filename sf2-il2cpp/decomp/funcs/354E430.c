// LEGDPJHPEOB$$BALPKELOBFL @ RVA 0x354E430

void LEGDPJHPEOB__BALPKELOBFL
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *CBIGMIHGDFO,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *JJDMDJPNINC;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *a;
  
  if ((DAT_04568b36 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_13973);
    FUN_01bab630(&StringLiteral_10329);
    FUN_01bab630(&StringLiteral_10707);
    FUN_01bab630(&StringLiteral_1606);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_04568b36 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    JJDMDJPNINC = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,StringLiteral_13973,(MethodInfo *)0x0);
    if (bVar2) {
      bVar2 = KFCFGKEHPNK__ECJLKNEAMKH(JJDMDJPNINC,(MethodInfo *)0x0);
      __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
      puVar1 = &StringLiteral_1606;
      if (!bVar2) {
        puVar1 = &StringLiteral_1567;
      }
      if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
        __this = (LEGDPJHPEOB_o *)*puVar1;
LAB_0364e53c:
        (CBIGMIHGDFO->fields).HPACPFLKHPK = (System_String_o *)__this;
        thunk_FUN_01c20e04(&CBIGMIHGDFO->fields);
        return;
      }
    }
    else {
      bVar2 = System_String__op_Equality(a,StringLiteral_10329,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (LEGDPJHPEOB_o *)KFCFGKEHPNK__DJDNNHMCGAE((MethodInfo *)0x0);
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) goto LAB_0364e53c;
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        __this = (LEGDPJHPEOB_o *)0x0;
        if (args != (System_Object_array *)0x0) {
          if ((a != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
            uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar4,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10707,args,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

