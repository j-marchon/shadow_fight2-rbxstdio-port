// TypeDefIndex 2110
// Namespace: 
// public sealed class ABIIOMHCLOI : LNADBMOHMKN, IDisposable
// Fields:

// ===== public void .ctor()  [RVA 0x32CD6B8]
// ABIIOMHCLOI$$.ctor @ RVA 0x32CD6B8

void ABIIOMHCLOI___ctor(ABIIOMHCLOI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x32CD6C0]
// ABIIOMHCLOI$$GIMAJOGGBHM @ RVA 0x32CD6C0

void ABIIOMHCLOI__GIMAJOGGBHM(ABIIOMHCLOI_o *__this,MethodInfo *method)

{
  if ((DAT_0456752d & 1) == 0) {
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_0456752d = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void DCIFPFIPGFD()  [RVA 0x32CD70C]
// ABIIOMHCLOI$$DCIFPFIPGFD @ RVA 0x32CD70C

void ABIIOMHCLOI__DCIFPFIPGFD(ABIIOMHCLOI_o *__this,MethodInfo *method)

{
  if ((DAT_0456752e & 1) == 0) {
    FUN_01bab630(&StringLiteral_3857/*"CancelAllNotifications"*/);
    DAT_0456752e = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_3857/*"CancelAllNotifications"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void Dispose()  [RVA 0x32CD758]
// ABIIOMHCLOI$$Dispose @ RVA 0x32CD758

void ABIIOMHCLOI__Dispose(ABIIOMHCLOI_o *__this,MethodInfo *method)

{
  if ((DAT_0456752f & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_0456752f = 1;
  }
                    /* try { // try from 033cd790 to 034cd91f has its CatchHandler @ 033cd790
                       catch() { ... } // from try @ 033cd790 with catch @ 033cd790
                       catch() { ... } // from try @ 033cd9ac with catch @ 033cd790
                       catch() { ... } // from try @ 033cda04 with catch @ 033cd790
                       catch() { ... } // from try @ 033cda54 with catch @ 033cd790
                       catch() { ... } // from try @ 033cda94 with catch @ 033cd790
                       catch() { ... } // from try @ 033cdad0 with catch @ 033cd790
                       catch() { ... } // from try @ 033cdaec with catch @ 033cd790
                       catch() { ... } // from try @ 033cdb2c with catch @ 033cd790 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void JHDKCCOBBED(int KKJPPDNKGAI)  [RVA 0x32CD7A4]
// ABIIOMHCLOI$$JHDKCCOBBED @ RVA 0x32CD7A4

void ABIIOMHCLOI__JHDKCCOBBED(ABIIOMHCLOI_o *__this,int32_t KKJPPDNKGAI,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  int32_t local_34;
  
  if ((DAT_04567530 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_3858/*"CancelNotification"*/);
    FUN_01bab630(&StringLiteral_22369/*"{0}:  id='{1}'"*/);
    DAT_04567530 = 1;
  }
  local_34 = KKJPPDNKGAI;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  JLNPKGGFFDD = System_String__Format(StringLiteral_22369/*"{0}:  id='{1}'"*/,StringLiteral_3858/*"CancelNotification"*/,arg1,(MethodInfo *)0x0)
  ;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== public void NFMANKNGJLM(int KKJPPDNKGAI, string NDNGGHKKMEJ, string HFOIODFEKCH, long FBHEGGHGADE)  [RVA 0x32CD858]
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
    FUN_01bab630(&StringLiteral_22370/*"{0}:  id='{1}', title='{2}', message='{3}', delaySeconds='{4}'"*/);
    FUN_01bab630(&StringLiteral_4871/*"CreateNotification"*/);
    DAT_04567531 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_4871/*"CreateNotification"*/ == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_4871/*"CreateNotification"*/,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_4871/*"CreateNotification"*/;
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
            JLNPKGGFFDD = System_String__Format(StringLiteral_22370/*"{0}:  id='{1}', title='{2}', message='{3}', delaySeconds='{4}'"*/,args,(MethodInfo *)0x0);
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

