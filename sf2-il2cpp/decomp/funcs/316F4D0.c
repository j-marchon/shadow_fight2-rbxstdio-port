// InControl.VersionInfo$$ToString @ RVA 0x316F4D0

System_String_o * InControl_VersionInfo__ToString(InControl_VersionInfo_o __this,MethodInfo *method)

{
  undefined4 *puVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  System_String_o *pSVar4;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = __this.fields._0_8_;
  if ((DAT_04566910 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo,__this.fields._8_8_);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_22355);
    FUN_01bab630(&StringLiteral_22356);
    DAT_04566910 = 1;
  }
  if (puVar1[3] == 0) {
    local_24 = *puVar1;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    local_28 = puVar1[1];
                    /* try { // try from 0326f6c0 to 0336f743 has its CatchHandler @ 0326f584 */
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
    local_34 = puVar1[2];
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar4 = System_String__Format(StringLiteral_22355,pIVar2,arg1,arg2,(MethodInfo *)0x0);
    return pSVar4;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  local_24 = *puVar1;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_0326f71c:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
                    /* try { // try from 0326f584 to 0336f63b has its CatchHandler @ 0326f584
                       catch() { ... } // from try @ 0326f584 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f6c0 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f748 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f750 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f7f4 with catch @ 0326f584 */
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04(args->m_Items,pIVar2);
    local_28 = puVar1[1];
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_0326f71c;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      local_34 = puVar1[2];
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0326f71c;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_38 = puVar1[3];
                    /* try { // try from 0326f63c to 0336f663 has its CatchHandler @ 0326f764 */
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_0326f71c;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format(StringLiteral_22356,args,(MethodInfo *)0x0);
          return pSVar4;
                    /* try { // try from 0326f698 to 0336f6bf has its CatchHandler @ 0326f760 */
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

