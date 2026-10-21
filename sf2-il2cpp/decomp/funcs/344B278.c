// MEJPIPJPKNP$$GDDGNMOMMCE @ RVA 0x344B278

int32_t MEJPIPJPKNP__GDDGNMOMMCE(System_String_o *LIBJOIJMLDO,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04568275 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8569);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_5455);
    FUN_01bab630(&StringLiteral_10427);
    FUN_01bab630(&StringLiteral_11737);
    FUN_01bab630(&StringLiteral_10491);
    FUN_01bab630(&StringLiteral_8819);
    FUN_01bab630(&StringLiteral_6729);
    FUN_01bab630(&StringLiteral_12000);
    FUN_01bab630(&StringLiteral_10599);
    DAT_04568275 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(LIBJOIJMLDO,(MethodInfo *)0x0);
  if (uVar2 < 0x5e57a19d) {
    if (uVar2 < 0x4473ced2) {
      if (uVar2 == 0x28742cc9) {
        bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_12000,(MethodInfo *)0x0);
        if (bVar1) {
          return 4;
        }
      }
      else if ((uVar2 == 0x4473ced1) &&
              (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_10427,(MethodInfo *)0x0)
              , bVar1)) {
        return 0;
      }
    }
    else if (uVar2 == 0x44a7f051) {
      bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_8819,(MethodInfo *)0x0);
      if (bVar1) {
        return 5;
      }
    }
    else if ((uVar2 == 0x5e57a19c) &&
            (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_6729,(MethodInfo *)0x0),
            bVar1)) {
      return 8;
    }
  }
  else if (uVar2 < 0xa3dc3490) {
    if (uVar2 == 0xa3dc348f) {
      bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_5455,(MethodInfo *)0x0);
      if (bVar1) {
        return 3;
      }
    }
    else if ((uVar2 == 0x6249c9c2) &&
            (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_8569,(MethodInfo *)0x0),
            bVar1)) {
      return 2;
    }
  }
  else if (uVar2 == 0xcc7558d1) {
    bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_10599,(MethodInfo *)0x0);
    if (bVar1) {
      return 9;
    }
  }
  else if (uVar2 == 0xcd17328e) {
    bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_10491,(MethodInfo *)0x0);
    if (bVar1) {
      return 7;
    }
  }
  else if ((uVar2 == 0xcd184169) &&
          (bVar1 = System_String__op_Equality(LIBJOIJMLDO,StringLiteral_6310,(MethodInfo *)0x0),
          bVar1)) {
    return 6;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((LIBJOIJMLDO != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(LIBJOIJMLDO,(((args->obj).klass)->_1).element_class), lVar3 == 0))
  {
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)LIBJOIJMLDO;
    thunk_FUN_01c20e04(args->m_Items,LIBJOIJMLDO);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_11737,args,(MethodInfo *)0x0);
    return 0xb;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

