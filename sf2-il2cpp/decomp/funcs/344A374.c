// MEJPIPJPKNP$$BELOCFNPIAN @ RVA 0x344A374

System_String_o * MEJPIPJPKNP__BELOCFNPIAN(int32_t NFOBCFADDHA,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int32_t local_14;
  
  if ((DAT_04568273 & 1) == 0) {
    FUN_01bab630(&DBMPKPJGIPI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8569);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_5455);
    FUN_01bab630(&StringLiteral_11736);
    FUN_01bab630(&StringLiteral_10427);
    FUN_01bab630(&StringLiteral_10491);
    FUN_01bab630(&StringLiteral_8819);
    FUN_01bab630(&StringLiteral_6729);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_12000);
    FUN_01bab630(&StringLiteral_10599);
    DAT_04568273 = 1;
  }
  switch(NFOBCFADDHA) {
  case 0:
    puVar4 = &StringLiteral_10427;
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_14 = NFOBCFADDHA;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(DBMPKPJGIPI_TypeInfo,&local_14);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_11736,args,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_1;
    break;
  case 2:
    puVar4 = &StringLiteral_8569;
    break;
  case 3:
    puVar4 = &StringLiteral_5455;
    break;
  case 4:
    puVar4 = &StringLiteral_12000;
    break;
  case 5:
    puVar4 = &StringLiteral_8819;
    break;
  case 6:
    puVar4 = &StringLiteral_6310;
    break;
  case 7:
    puVar4 = &StringLiteral_10491;
    break;
  case 8:
    puVar4 = &StringLiteral_6729;
    break;
  case 9:
    puVar4 = &StringLiteral_10599;
  }
  return (System_String_o *)*puVar4;
}

