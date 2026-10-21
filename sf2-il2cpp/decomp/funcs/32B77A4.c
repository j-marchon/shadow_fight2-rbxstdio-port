// KHEDNGODOIC$$.ctor @ RVA 0x32B77A4

void KHEDNGODOIC___ctor(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  PKNBJJPHAKI_o *__this_01;
  PKNBJJPHAKI_o **ppPVar1;
  
  if ((DAT_04567460 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&PKNBJJPHAKI_TypeInfo);
    FUN_01bab630(&StringLiteral_11220);
    DAT_04567460 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_11220,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (PKNBJJPHAKI_o *)thunk_FUN_01bda818(PKNBJJPHAKI_TypeInfo);
  PKNBJJPHAKI___ctor(__this_01,(MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).BAFJNPPPBMK;
  *ppPVar1 = __this_01;
  thunk_FUN_01c20e04(ppPVar1,__this_01);
  return;
}

