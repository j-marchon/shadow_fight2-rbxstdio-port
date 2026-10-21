// InControl.VersionInfo$$ToShortString @ RVA 0x316F72C

System_String_o *
InControl_VersionInfo__ToShortString(InControl_VersionInfo_o __this,MethodInfo *method)

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
                    /* try { // try from 0326f744 to 0336f747 has its CatchHandler @ 0326f75c */
                    /* try { // try from 0326f748 to 0336f74b has its CatchHandler @ 0326f584 */
  if ((DAT_04566911 & 1) == 0) {
                    /* try { // try from 0326f74c to 0336f74f has its CatchHandler @ 0326f758 */
                    /* try { // try from 0326f750 to 0336f77b has its CatchHandler @ 0326f584 */
    FUN_01bab630(&int_TypeInfo,__this.fields._8_8_);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f74c with catch @ 0326f758
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f744 with catch @ 0326f75c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f698 with catch @ 0326f760
                        */
    FUN_01bab630(&object___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f63c with catch @ 0326f764
                        */
    FUN_01bab630(&StringLiteral_22355);
    FUN_01bab630(&StringLiteral_22358);
                    /* try { // try from 0326f77c to 0336f77f has its CatchHandler @ 0326f78c */
    DAT_04566911 = 1;
  }
                    /* catch() { ... } // from try @ 0326f77c with catch @ 0326f78c */
  if (puVar1[3] == 0) {
    local_24 = *puVar1;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    local_28 = puVar1[1];
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
                    /* try { // try from 0326f7cc to 0336f7f3 has its CatchHandler @ 0326f808 */
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_0326f978:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
                    /* try { // try from 0326f7f4 to 0336f7ff has its CatchHandler @ 0326f584 */
    thunk_FUN_01c20e04(args->m_Items,pIVar2);
    local_28 = puVar1[1];
                    /* try { // try from 0326f800 to 0336f807 has its CatchHandler @ 0326f808 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326f7cc with catch @ 0326f808
                       catch(type#2 @ 00000000) { ... } // from try @ 0326f800 with catch @ 0326f808
                        */
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_0326f978;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      local_34 = puVar1[2];
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0326f978;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_38 = puVar1[3];
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_0326f978;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format(StringLiteral_22358,args,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

