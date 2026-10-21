// PCGLKFBEGCD$$PPHOIDGOHAD @ RVA 0x32CFF94

System_Collections_Generic_List_JADGCGOJLJB__o *
PCGLKFBEGCD__PPHOIDGOHAD(PCGLKFBEGCD_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  System_String_o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar4;
  undefined8 uVar5;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04567545 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4562);
    DAT_04567545 = 1;
  }
  iVar1 = (__this->fields).super.LOAFPIOGJAF;
  if (iVar1 == 3) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033d00e8;
    pSVar4 = (AHEFOIOKDOK->fields).FMCHOKFMHKC;
  }
  else if (iVar1 == 2) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033d00e8;
    pSVar4 = (AHEFOIOKDOK->fields).ILBBBFHKKHG;
  }
  else {
    if (iVar1 != 1) {
                    /* try { // try from 033d0038 to 034d005f has its CatchHandler @ 033d02bc */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_38.klass = (System_Enum_c *)LCAJGLLBBEC_ELJAALFNLIP_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      local_28 = (__this->fields).super.LOAFPIOGJAF;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      if (args == (System_Object_array *)0x0) goto LAB_033d00e8;
      if ((pSVar2 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 033d0094 to 034d00bf has its CatchHandler @ 033d02b8 */
      args->m_Items[0] = (Il2CppObject *)pSVar2;
      thunk_FUN_01c20e04(args->m_Items,pSVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_4562,args,(MethodInfo *)0x0);
    }
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_033d00e8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = (AHEFOIOKDOK->fields).GLFJDDHEMNO;
  }
  return pSVar4;
}

