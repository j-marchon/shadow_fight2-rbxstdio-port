// GEIHBHEDJJM$$ToString @ RVA 0x3516CB4

System_String_o * GEIHBHEDJJM__ToString(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar5;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((DAT_04568936 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_22301);
    FUN_01bab630(&StringLiteral_10723);
    DAT_04568936 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_10723 == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_10723,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_10723;
    if (lVar1 == 0) goto LAB_03616e74;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04();
    pCVar5 = (__this->fields).PCNEDMAJMOJ;
    if ((pCVar5 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pCVar5,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_03616e74:
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pCVar5;
      thunk_FUN_01c20e04(args->m_Items + 1,pCVar5);
      local_24[0] = (__this->fields).JKDNFNLGGLI.fields.hasValue;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_03616e74;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_28[0] = (__this->fields).NKMGMPKKEAA;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_28);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_03616e74;
                    /* try { // try from 03616e2c to 03716eab has its CatchHandler @ 03616e2c
                       catch() { ... } // from try @ 03616e2c with catch @ 03616e2c
                       catch() { ... } // from try @ 03616f74 with catch @ 03616e2c
                       catch() { ... } // from try @ 0361700c with catch @ 03616e2c
                       catch() { ... } // from try @ 036170bc with catch @ 03616e2c
                       catch() { ... } // from try @ 03617164 with catch @ 03616e2c */
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar3 = System_String__Format(StringLiteral_22301,args,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

