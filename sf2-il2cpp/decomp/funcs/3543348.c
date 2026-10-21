// LEGDPJHPEOB$$HGGGJHFFIPK @ RVA 0x3543348

void LEGDPJHPEOB__HGGGJHFFIPK
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *CBIGMIHGDFO,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *BNMOJBMGDDN;
  EEGDOGKBLNG_o *__this_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *a;
  
                    /* try { // try from 03643350 to 0374348b has its CatchHandler @ 03643350
                       catch() { ... } // from try @ 03643350 with catch @ 03643350
                       catch() { ... } // from try @ 036435cc with catch @ 03643350
                       catch() { ... } // from try @ 03643668 with catch @ 03643350
                       catch() { ... } // from try @ 03643670 with catch @ 03643350
                       catch() { ... } // from try @ 03643728 with catch @ 03643350 */
  if ((DAT_04568b09 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10694);
    FUN_01bab630(&StringLiteral_11089);
    FUN_01bab630(&StringLiteral_1606);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_04568b09 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    BNMOJBMGDDN = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,StringLiteral_11089,(MethodInfo *)0x0);
    if (bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      __this = (LEGDPJHPEOB_o *)0x0;
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        bVar2 = EEGDOGKBLNG__GNNNAFFIPKI(__this_00,BNMOJBMGDDN,(MethodInfo *)0x0);
        __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
        puVar1 = &StringLiteral_1606;
        if (!bVar2) {
          puVar1 = &StringLiteral_1567;
        }
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          (CBIGMIHGDFO->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
          thunk_FUN_01c20e04(&CBIGMIHGDFO->fields);
          return;
        }
      }
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (LEGDPJHPEOB_o *)0x0;
      if (args != (System_Object_array *)0x0) {
                    /* try { // try from 0364348c to 037434b3 has its CatchHandler @ 03643694 */
        if ((a != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10694,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036434e8 to 03743513 has its CatchHandler @ 03643690 */
  FUN_01bab8c8(__this);
}

