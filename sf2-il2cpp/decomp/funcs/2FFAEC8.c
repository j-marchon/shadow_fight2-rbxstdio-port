// JMDPBFOCHHP.HJLEKMDIDPO$$CPKIMMEEOCF @ RVA 0x2FFAEC8

System_String_o *
JMDPBFOCHHP_HJLEKMDIDPO__CPKIMMEEOCF(JMDPBFOCHHP_HJLEKMDIDPO_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  uint32_t local_28;
  float local_24;
  
  if ((DAT_04565acd & 1) == 0) {
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&uint_TypeInfo);
    FUN_01bab630(&StringLiteral_21629);
    DAT_04565acd = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (__this->fields).BGHFADDGPAD;
  if ((pSVar4 != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_030fb078:
    uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar3,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar4;
    thunk_FUN_01c20e04(args->m_Items,pSVar4);
    local_24 = (__this->fields).IJDAKGKCHLG;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
    goto LAB_030fb078;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      pSVar4 = (__this->fields).HEMGHNOOJPI;
      if ((pSVar4 != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_030fb078;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar4;
        thunk_FUN_01c20e04(args->m_Items + 2,pSVar4);
        local_28 = (__this->fields).JDPEHPMKDIF;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(uint_TypeInfo,&local_28);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_030fb078;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format(StringLiteral_21629,args,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

