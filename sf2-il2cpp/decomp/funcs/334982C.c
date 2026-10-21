// src.GUI.Scripts.LerpParams$$.ctor @ RVA 0x334982C

void src_GUI_Scripts_LerpParams___ctor(src_GUI_Scripts_LerpParams_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  (__this->fields).Arg1 = (float)(int)auVar1._8_8_;
  (__this->fields).Arg2 = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  (__this->fields).Value1 = (float)(int)auVar1._0_8_;
  (__this->fields).Value2 = (float)(int)((ulong)auVar1._0_8_ >> 0x20);
  (__this->fields).Ease = 1;
  (__this->fields).Clamp = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

