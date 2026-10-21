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
    FUN_01bab630(&StringLiteral_22370);
    FUN_01bab630(&StringLiteral_4871);
    DAT_04568351 = 1;
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
            JLNPKGGFFDD = System_String__Format(StringLiteral_22370,args,(MethodInfo *)0x0);
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

