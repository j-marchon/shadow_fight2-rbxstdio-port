// LPGPNBGHDBD$$LGCPLHMKOKA @ RVA 0x3228FEC

void LPGPNBGHDBD__LGCPLHMKOKA
               (System_String_o **HPACPFLKHPK,System_String_o *IEPECMCLKJB,int32_t MEGOOCKNJOH,
               int32_t MKOINMONMKL,System_String_o *LHGFCIEDHJI,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Object_array *args;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  System_String_o *str0;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04566f8a & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_2447);
    DAT_04566f8a = 1;
  }
  pSVar1 = OFFIONDOEPM__AMJCJJALAJH(IEPECMCLKJB,(MethodInfo *)0x0);
  str0 = *HPACPFLKHPK;
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar1 != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_033291d0:
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar1;
    thunk_FUN_01c20e04(args->m_Items,pSVar1);
    local_44 = MEGOOCKNJOH;
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
    goto LAB_033291d0;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar3;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar3);
      local_48 = MKOINMONMKL;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_033291d0;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar3;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar3);
        if ((LHGFCIEDHJI != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(LHGFCIEDHJI,(((args->obj).klass)->_1).element_class),
           lVar2 == 0)) goto LAB_033291d0;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)LHGFCIEDHJI;
          thunk_FUN_01c20e04(args->m_Items + 3,LHGFCIEDHJI);
          pSVar1 = System_String__Format(StringLiteral_2447,args,(MethodInfo *)0x0);
          pSVar1 = System_String__Concat(str0,pSVar1,(MethodInfo *)0x0);
          *HPACPFLKHPK = pSVar1;
          thunk_FUN_01c20e04(HPACPFLKHPK,pSVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

