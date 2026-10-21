// JMDPBFOCHHP.ODJJOAOCFKO$$CPKIMMEEOCF @ RVA 0x2FFAD34

System_String_o *
JMDPBFOCHHP_ODJJOAOCFKO__CPKIMMEEOCF(JMDPBFOCHHP_ODJJOAOCFKO_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04565acc & 1) == 0) {
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_19790);
    DAT_04565acc = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = (__this->fields).JIJLBFGKNJK;
  if ((pSVar3 != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_030fae88:
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar3;
    thunk_FUN_01c20e04(args->m_Items,pSVar3);
    pSVar3 = (__this->fields).APBICPEOMOM;
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0))
    goto LAB_030fae88;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar3);
      pSVar3 = (__this->fields).PCAIPKLGAHP;
      if ((pSVar3 != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_030fae88;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar3;
        thunk_FUN_01c20e04(args->m_Items + 2,pSVar3);
        pSVar3 = (__this->fields).EJEPJCHIGFE;
        if ((pSVar3 != (System_String_o *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_030fae88;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)pSVar3;
          thunk_FUN_01c20e04(args->m_Items + 3,pSVar3);
          pSVar3 = System_String__Format(StringLiteral_19790,args,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

