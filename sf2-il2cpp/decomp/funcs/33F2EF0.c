// FCJBEKHDLAF$$GMCLKIGBFAC @ RVA 0x33F2EF0

int32_t FCJBEKHDLAF__GMCLKIGBFAC(FCJBEKHDLAF_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_14;
  
  if ((DAT_04567f27 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenModel_GIGDGHANHFM_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6323);
    DAT_04567f27 = 1;
  }
  if ((ACCIHBHMFPN != 0) && (ACCIHBHMFPN != 1)) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_14 = ACCIHBHMFPN;
    pIVar1 = (Il2CppObject *)
             thunk_FUN_01bda448(Nekki_SF2_GUI_Fight_ScreenModel_GIGDGHANHFM_TypeInfo,&local_14);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034f2fc8 to 035f2fcf has its CatchHandler @ 034f325c */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034f2fe0 to 035f2fe7 has its CatchHandler @ 034f3258 */
    UnityEngine_Debug__LogErrorFormat(StringLiteral_6323,args,(MethodInfo *)0x0);
    ACCIHBHMFPN = 0;
  }
  return ACCIHBHMFPN;
}

