// DBGBHDDCAJC$$GIOOKIPAIAB @ RVA 0x31D9370

int32_t DBGBHDDCAJC__GIOOKIPAIAB(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04566d07 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11831);
    FUN_01bab630(&StringLiteral_11126);
    FUN_01bab630(&StringLiteral_10632);
    FUN_01bab630(&StringLiteral_10159);
    DAT_04566d07 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11126,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_10159,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11831,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 3;
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((KGLJICLJHEL != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
        thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10632,args,(MethodInfo *)0x0);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

