// TypeDefIndex 378
// Namespace: 
// public sealed class JJHOKPKFIIO : LNADBMOHMKN, IDisposable
// Fields:

// ===== public void NFMANKNGJLM(int KKJPPDNKGAI, string NDNGGHKKMEJ, string HFOIODFEKCH, long FBHEGGHGADE)  [RVA 0x347BAC8]
// JJHOKPKFIIO$$NFMANKNGJLM @ RVA 0x347BAC8

void JJHOKPKFIIO__NFMANKNGJLM
               (JJHOKPKFIIO_o *__this,int32_t KKJPPDNKGAI,System_String_o *NDNGGHKKMEJ,
               System_String_o *HFOIODFEKCH,int64_t FBHEGGHGADE,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  System_String_o *JLNPKGGFFDD;
  undefined8 uVar3;
  int64_t local_50;
  int32_t local_44;
  
  if ((DAT_04568351 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_22370/*"{0}:  id='{1}', title='{2}', message='{3}', delaySeconds='{4}'"*/);
    FUN_01bab630(&StringLiteral_4871/*"CreateNotification"*/);
    DAT_04568351 = 1;
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
    if (lVar1 == 0) goto LAB_0357bce8;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04();
    local_44 = KKJPPDNKGAI;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_0357bce8:
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      if ((NDNGGHKKMEJ != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(NDNGGHKKMEJ,(((args->obj).klass)->_1).element_class),
         lVar1 == 0)) goto LAB_0357bce8;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)NDNGGHKKMEJ;
        thunk_FUN_01c20e04(args->m_Items + 2,NDNGGHKKMEJ);
        if ((HFOIODFEKCH != (System_String_o *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(HFOIODFEKCH,(((args->obj).klass)->_1).element_class),
           lVar1 == 0)) goto LAB_0357bce8;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)HFOIODFEKCH;
          thunk_FUN_01c20e04(args->m_Items + 3,HFOIODFEKCH);
          local_50 = FBHEGGHGADE;
          pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_50);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0
             )) goto LAB_0357bce8;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar2;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar2);
            JLNPKGGFFDD = System_String__Format(StringLiteral_22370/*"{0}:  id='{1}', title='{2}', message='{3}', delaySeconds='{4}'"*/,args,(MethodInfo *)0x0);
            KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void JHDKCCOBBED(int KKJPPDNKGAI)  [RVA 0x347BCF8]
// JJHOKPKFIIO$$JHDKCCOBBED @ RVA 0x347BCF8

void JJHOKPKFIIO__JHDKCCOBBED(JJHOKPKFIIO_o *__this,int32_t KKJPPDNKGAI,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  int32_t local_34;
  
  if ((DAT_04568352 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_3858/*"CancelNotification"*/);
    FUN_01bab630(&StringLiteral_22369/*"{0}:  id='{1}'"*/);
    DAT_04568352 = 1;
  }
  local_34 = KKJPPDNKGAI;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  JLNPKGGFFDD = System_String__Format(StringLiteral_22369/*"{0}:  id='{1}'"*/,StringLiteral_3858/*"CancelNotification"*/,arg1,(MethodInfo *)0x0)
  ;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== public void DCIFPFIPGFD()  [RVA 0x347BDAC]
// JJHOKPKFIIO$$DCIFPFIPGFD @ RVA 0x347BDAC

void JJHOKPKFIIO__DCIFPFIPGFD(JJHOKPKFIIO_o *__this,MethodInfo *method)

{
  if ((DAT_04568353 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3857/*"CancelAllNotifications"*/);
    DAT_04568353 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_3857/*"CancelAllNotifications"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void Dispose()  [RVA 0x347BDF8]
// JJHOKPKFIIO$$Dispose @ RVA 0x347BDF8

void JJHOKPKFIIO__Dispose(JJHOKPKFIIO_o *__this,MethodInfo *method)

{
  if ((DAT_04568354 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04568354 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x347BE44]
// JJHOKPKFIIO$$.ctor @ RVA 0x347BE44

void JJHOKPKFIIO___ctor(JJHOKPKFIIO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x347BE4C]
// JJHOKPKFIIO$$GIMAJOGGBHM @ RVA 0x347BE4C

void JJHOKPKFIIO__GIMAJOGGBHM(JJHOKPKFIIO_o *__this,MethodInfo *method)

{
  if ((DAT_04568355 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04568355 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  return;
}

