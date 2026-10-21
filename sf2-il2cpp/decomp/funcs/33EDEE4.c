// FCJBEKHDLAF$$BNKBKHPICHG @ RVA 0x33EDEE4

OLKKAIFGGAK_o *
FCJBEKHDLAF__BNKBKHPICHG(FCJBEKHDLAF_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  int32_t local_24;
  
  if ((DAT_04567f16 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenModel_GIGDGHANHFM_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6322);
    DAT_04567f16 = 1;
  }
  if (ACCIHBHMFPN == 1) {
    pOVar1 = (__this->fields).CLEKIBBCAOJ;
  }
  else {
                    /* try { // try from 034edf44 to 035edf4b has its CatchHandler @ 034ee050 */
    if (ACCIHBHMFPN == 0) {
      pOVar1 = (__this->fields).LAMENNMGPBN;
    }
    else {
                    /* try { // try from 034edf60 to 035edf63 has its CatchHandler @ 034edff4 */
                    /* try { // try from 034edf64 to 035edf97 has its CatchHandler @ 034ede50 */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = ACCIHBHMFPN;
      pIVar2 = (Il2CppObject *)
               thunk_FUN_01bda448(Nekki_SF2_GUI_Fight_ScreenModel_GIGDGHANHFM_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034edf98 to 035edf9f has its CatchHandler @ 034edff8 */
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* try { // try from 034ee010 to 035ee013 has its CatchHandler @ 034ee034 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ee014 to 035ee03b has its CatchHandler @ 034ede50 */
        FUN_01bab798(uVar4,0);
      }
                    /* try { // try from 034edfac to 035edfb3 has its CatchHandler @ 034edfec */
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 034edfb4 to 035edfdb has its CatchHandler @ 034ede50 */
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034edfdc to 035edfdf has its CatchHandler @ 034edff0 */
                    /* try { // try from 034edfe0 to 035edfe3 has its CatchHandler @ 034edfe8 */
                    /* try { // try from 034edfe4 to 035ee00f has its CatchHandler @ 034ede50 */
                    /* catch() { ... } // from try @ 034edfe0 with catch @ 034edfe8 */
                    /* catch() { ... } // from try @ 034edfac with catch @ 034edfec */
      UnityEngine_Debug__LogErrorFormat(StringLiteral_6322,args,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034edfdc with catch @ 034edff0 */
      pOVar1 = (OLKKAIFGGAK_o *)0x0;
    }
  }
                    /* catch() { ... } // from try @ 034edf60 with catch @ 034edff4 */
                    /* catch() { ... } // from try @ 034edf98 with catch @ 034edff8 */
  return pOVar1;
}

