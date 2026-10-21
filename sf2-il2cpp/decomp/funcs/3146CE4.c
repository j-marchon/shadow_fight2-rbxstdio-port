// KKLJIDJBFEI$$OFCDLLNMGDP @ RVA 0x3146CE4

void KKLJIDJBFEI__OFCDLLNMGDP
               (KKLJIDJBFEI_o *__this,System_String_o *CELOLGNMKCG,System_String_o *JKHBMCBCNJC,
               int32_t CEOLOKFCKIG,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t local_34;
  
  if ((DAT_04566781 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5851);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566781 = 1;
  }
  if (CEOLOKFCKIG == 0) {
    return;
  }
  pSVar1 = StringLiteral_1;
  if (CELOLGNMKCG != (System_String_o *)0x0) {
    pSVar1 = CELOLGNMKCG;
  }
  pSVar2 = StringLiteral_1;
  if (JKHBMCBCNJC != (System_String_o *)0x0) {
    pSVar2 = JKHBMCBCNJC;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar1 != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_03246e88:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar1;
    thunk_FUN_01c20e04(args->m_Items,pSVar1);
    local_34 = CEOLOKFCKIG;
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_03246e88;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar4;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
      if ((pSVar2 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_03246e88;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pSVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_5851,args,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

