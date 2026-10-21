// DNELIPCHKLK$$LFHPFJOAJIO @ RVA 0x33CCF74

bool DNELIPCHKLK__LFHPFJOAJIO(DNELIPCHKLK_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  System_String_o *a;
  
  if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
    b = (System_String_o *)
        (*(DBIAAJNKHLH->klass->vtable)._3_ToString.methodPtr)
                  (DBIAAJNKHLH,(DBIAAJNKHLH->klass->vtable)._3_ToString.method);
    a = (System_String_o *)
        (*(__this->klass->vtable)._3_ToString.methodPtr)
                  (__this,(__this->klass->vtable)._3_ToString.method);
    bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

