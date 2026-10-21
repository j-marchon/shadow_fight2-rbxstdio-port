// FCJBEKHDLAF$$HJFOLPOINNH @ RVA 0x33F1D90

OLKKAIFGGAK_o *
FCJBEKHDLAF__HJFOLPOINNH(FCJBEKHDLAF_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  if ((DAT_04567f1a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6321);
    DAT_04567f1a = 1;
  }
  if (HEHMPFLAEGE == 3) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = 3;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
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
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_6321,args,(MethodInfo *)0x0);
  }
  else {
    if (HEHMPFLAEGE == 2) {
      return (__this->fields).CLEKIBBCAOJ;
    }
    if (HEHMPFLAEGE == 1) {
      return (__this->fields).LAMENNMGPBN;
    }
  }
  return (OLKKAIFGGAK_o *)0x0;
}

