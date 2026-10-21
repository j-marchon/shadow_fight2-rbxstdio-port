// InControl.UnityMouseAxisSource$$.ctor @ RVA 0x3487878

void InControl_UnityMouseAxisSource___ctor
               (InControl_UnityMouseAxisSource_o *__this,System_String_o *axis,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045683be & 1) == 0) {
    FUN_01bab630(&StringLiteral_19750);
    DAT_045683be = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_19750,axis,(MethodInfo *)0x0);
  (__this->fields).mouseAxisQuery = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  return;
}

