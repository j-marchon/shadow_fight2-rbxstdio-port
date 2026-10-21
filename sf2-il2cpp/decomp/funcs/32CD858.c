// ABIIOMHCLOI$$NFMANKNGJLM @ RVA 0x32CD858

void ABIIOMHCLOI__NFMANKNGJLM
               (ABIIOMHCLOI_o *__this,int32_t KKJPPDNKGAI,System_String_o *NDNGGHKKMEJ,
               System_String_o *HFOIODFEKCH,int64_t FBHEGGHGADE,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  System_String_o *JLNPKGGFFDD;
  undefined8 uVar3;
  int64_t local_50;
  int32_t local_44;
  
  if ((DAT_04567531 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_22370);
    FUN_01bab630(&StringLiteral_4871);
    DAT_04567531 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_4871 == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_4871,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_4871;
    if (lVar1 == 0) goto LAB_033cda78;
  }
  if ((int)args->max_length != 0) {
                    /* try { // try from 033cd920 to 034cd927 has its CatchHandler @ 033cda78 */
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04();
    local_44 = KKJPPDNKGAI;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
                    /* try { // try from 033cd948 to 034cd94f has its CatchHandler @ 033cda60 */
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_033cda78:
                    /* catch() { ... } // from try @ 033cd920 with catch @ 033cda78 */
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      if ((NDNGGHKKMEJ != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(NDNGGHKKMEJ,(((args->obj).klass)->_1).element_class),
         lVar1 == 0)) goto LAB_033cda78;
      if (2 < (uint)args->max_length) {
                    /* try { // try from 033cd9a0 to 034cd9ab has its CatchHandler @ 033cda58 */
        args->m_Items[2] = (Il2CppObject *)NDNGGHKKMEJ;
                    /* try { // try from 033cd9ac to 034cd9e3 has its CatchHandler @ 033cd790 */
        thunk_FUN_01c20e04(args->m_Items + 2,NDNGGHKKMEJ);
        if ((HFOIODFEKCH != (System_String_o *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(HFOIODFEKCH,(((args->obj).klass)->_1).element_class),
           lVar1 == 0)) goto LAB_033cda78;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)HFOIODFEKCH;
                    /* try { // try from 033cd9e4 to 034cd9eb has its CatchHandler @ 033cdad0 */
          thunk_FUN_01c20e04(args->m_Items + 3,HFOIODFEKCH);
          local_50 = FBHEGGHGADE;
          pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_50);
                    /* try { // try from 033cda00 to 034cda03 has its CatchHandler @ 033cda74 */
                    /* try { // try from 033cda04 to 034cda3b has its CatchHandler @ 033cd790 */
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0
             )) goto LAB_033cda78;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar2;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar2);
                    /* try { // try from 033cda3c to 034cda3f has its CatchHandler @ 033cda70 */
                    /* try { // try from 033cda40 to 034cda43 has its CatchHandler @ 033cda6c */
                    /* try { // try from 033cda44 to 034cda47 has its CatchHandler @ 033cda68 */
                    /* try { // try from 033cda48 to 034cda4b has its CatchHandler @ 033cda64 */
            JLNPKGGFFDD = System_String__Format(StringLiteral_22370,args,(MethodInfo *)0x0);
                    /* try { // try from 033cda4c to 034cda53 has its CatchHandler @ 033cda5c */
                    /* try { // try from 033cda54 to 034cda8f has its CatchHandler @ 033cd790 */
                    /* catch() { ... } // from try @ 033cd9a0 with catch @ 033cda58 */
            KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033cda4c with catch @ 033cda5c */
                    /* catch() { ... } // from try @ 033cd948 with catch @ 033cda60 */
                    /* catch() { ... } // from try @ 033cda48 with catch @ 033cda64 */
                    /* catch() { ... } // from try @ 033cda44 with catch @ 033cda68 */
                    /* catch() { ... } // from try @ 033cda40 with catch @ 033cda6c */
                    /* catch() { ... } // from try @ 033cda3c with catch @ 033cda70 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033cda00 with catch @ 033cda74 */
  FUN_01bab8d0();
}

