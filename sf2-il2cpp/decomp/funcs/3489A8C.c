// LDAJCBOOHPE$$.ctor @ RVA 0x3489A8C

void LDAJCBOOHPE___ctor(LDAJCBOOHPE_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_x1;
  long lVar2;
  
  if ((DAT_045683ce & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    DAT_045683ce = 1;
    method = extraout_x1;
  }
  lVar1 = Method_System_Array_Empty<string>__;
  lVar2 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar2 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__,method);
    lVar2 = *(long *)(lVar1 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  (__this->fields).IDPIHPBEHFC = (System_String_array *)**(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

