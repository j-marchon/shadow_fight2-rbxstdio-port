// ECENNHNBAME$$MADPEPAMMJD @ RVA 0x3017D08

void ECENNHNBAME__MADPEPAMMJD(ECENNHNBAME_o *__this,ECENNHNBAME_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04565bdd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_21499);
    DAT_04565bdd = 1;
  }
  if (__this == CJNHFNHJHPE) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (__this->fields).JIJLBFGKNJK;
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
      uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar2,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar3;
    thunk_FUN_01c20e04(args->m_Items,pSVar3);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_21499,args,(MethodInfo *)0x0);
  }
  (__this->fields).CPCDDBKNDAC = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).CPCDDBKNDAC,CJNHFNHJHPE);
  return;
}

