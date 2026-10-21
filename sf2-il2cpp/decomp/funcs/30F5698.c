// BIACHHMPICI$$Write @ RVA 0x30F5698

void BIACHHMPICI__Write(BIACHHMPICI_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 uVar2;
  System_Text_Encoding_o *pSVar3;
  
  if ((DAT_0456644d & 1) == 0) {
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456644d = 1;
  }
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace(CJNHFNHJHPE,StringLiteral_47,StringLiteral_1,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).CFKLCHJHBFB;
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_47,(MethodInfo *)0x0);
    if (pSVar3 != (System_Text_Encoding_o *)0x0) {
      uVar2 = (*(pSVar3->klass->vtable)._19_GetBytes.methodPtr)
                        (pSVar3,pSVar1,(pSVar3->klass->vtable)._19_GetBytes.method);
                    /* WARNING: Could not recover jumptable at 0x031f5740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._10_Write.methodPtr)
                (__this,uVar2,(__this->klass->vtable)._10_Write.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

