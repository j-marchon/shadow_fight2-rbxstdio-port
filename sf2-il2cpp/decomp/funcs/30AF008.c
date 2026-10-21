// CFEANGJDHEE$$OBPDBBODFGD @ RVA 0x30AF008

System_String_o * CFEANGJDHEE__OBPDBBODFGD(System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  int32_t capacity;
  uint16_t uVar1;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  int index;
  
  if ((DAT_045661c8 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_790);
    FUN_01bab630(&StringLiteral_795);
    FUN_01bab630(&StringLiteral_799);
    FUN_01bab630(&StringLiteral_798);
    DAT_045661c8 = 1;
    method = extraout_x1;
  }
  if (EHNFGMGKCHO == (System_String_o *)0x0) {
    return (System_String_o *)0x0;
  }
  capacity = (EHNFGMGKCHO->fields)._stringLength;
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this,capacity,(MethodInfo *)0x0);
  if ((EHNFGMGKCHO->fields)._stringLength < 1) {
    if (__this == (System_Text_StringBuilder_o *)0x0) {
LAB_031af1b0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    index = 0;
    do {
      uVar1 = System_String__get_Chars(EHNFGMGKCHO,index,(MethodInfo *)0x0);
      if (uVar1 < 0x27) {
        pSVar2 = StringLiteral_799;
        if ((uVar1 != 0x22) && (pSVar2 = StringLiteral_790, uVar1 != 0x26)) goto LAB_031af118;
        if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_031af1b0;
LAB_031af154:
        System_Text_StringBuilder__Append(__this,pSVar2,(MethodInfo *)0x0);
      }
      else {
        pSVar2 = StringLiteral_795;
        if ((uVar1 == 0x3e) || (pSVar2 = StringLiteral_798, uVar1 == 0x3c)) {
          if (__this != (System_Text_StringBuilder_o *)0x0) goto LAB_031af154;
          goto LAB_031af1b0;
        }
LAB_031af118:
        uVar1 = System_String__get_Chars(EHNFGMGKCHO,index,(MethodInfo *)0x0);
        if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_031af1b0;
        System_Text_StringBuilder__Append(__this,uVar1,(MethodInfo *)0x0);
      }
      index = index + 1;
    } while (index < (EHNFGMGKCHO->fields)._stringLength);
  }
                    /* WARNING: Could not recover jumptable at 0x031af1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._3_ToString.methodPtr)
                     (__this,(__this->klass->vtable)._3_ToString.method);
  return pSVar2;
}

