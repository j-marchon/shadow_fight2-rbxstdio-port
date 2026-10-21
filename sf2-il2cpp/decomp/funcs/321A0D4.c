// BKKPAKHJDKB$$ToString @ RVA 0x321A0D4

System_String_o * BKKPAKHJDKB__ToString(BKKPAKHJDKB_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  int32_t local_34;
  
  if ((DAT_04566ef4 & 1) == 0) {
    FUN_01bab630(&ADJEBFOPFFF_JMKJIJBLDGM_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1172);
    FUN_01bab630(&StringLiteral_4932);
    FUN_01bab630(&StringLiteral_22419);
    FUN_01bab630(&StringLiteral_22417);
    FUN_01bab630(&StringLiteral_10080);
    FUN_01bab630(&StringLiteral_12396);
    FUN_01bab630(&StringLiteral_8669);
    DAT_04566ef4 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
LAB_0331a3d4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_10080 == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_10080,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_10080;
    if (lVar1 == 0) goto LAB_0331a3c8;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04();
    pSVar4 = (__this->fields).EAHLGGCMKJN;
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_0331a3c8:
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar4;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar4);
      if (StringLiteral_12396 == (Il2CppObject *)0x0) {
        pIVar2 = (Il2CppObject *)0x0;
      }
      else {
        lVar1 = thunk_FUN_01bda71c(StringLiteral_12396,(((args->obj).klass)->_1).element_class);
        pIVar2 = StringLiteral_12396;
        if (lVar1 == 0) goto LAB_0331a3c8;
      }
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04();
        local_34 = (__this->fields).HHJIJKJCEOF;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(ADJEBFOPFFF_JMKJIJBLDGM_TypeInfo,&local_34);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_0331a3c8;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format(StringLiteral_22419,args,(MethodInfo *)0x0);
          if (values == (System_String_array *)0x0) goto LAB_0331a3d4;
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar4;
            thunk_FUN_01c20e04(values->m_Items,pSVar4);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = StringLiteral_4932;
              thunk_FUN_01c20e04(values->m_Items + 1);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = (__this->fields).FBNFLPPPEFL;
                thunk_FUN_01c20e04(values->m_Items + 2);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = StringLiteral_1172;
                  thunk_FUN_01c20e04(values->m_Items + 3);
                  pSVar4 = System_String__Format
                                     (StringLiteral_22417,StringLiteral_8669,
                                      (Il2CppObject *)(__this->fields).EBJBJCPBFLE,(MethodInfo *)0x0
                                     );
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar4;
                    thunk_FUN_01c20e04();
                    pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                    return pSVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

