// SFToggle$$.ctor @ RVA 0x30D5688

void SFToggle___ctor(SFToggle_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  auVar2 = NEON_fmov(0x3f800000,4);
  (__this->fields)._Control = -1;
  uVar3 = auVar2._8_8_;
  (__this->fields)._InactiveHintColor.fields.b = (float)(int)uVar3;
  (__this->fields)._InactiveHintColor.fields.a = (float)(int)((ulong)uVar3 >> 0x20);
  uVar1 = auVar2._0_8_;
  (__this->fields)._InactiveHintColor.fields.r = (float)(int)uVar1;
  (__this->fields)._InactiveHintColor.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._ActiveHintColor.fields.b = (float)(int)uVar3;
  (__this->fields)._ActiveHintColor.fields.a = (float)(int)((ulong)uVar3 >> 0x20);
  (__this->fields)._ActiveHintColor.fields.r = (float)(int)uVar1;
  (__this->fields)._ActiveHintColor.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
  UnityEngine_UI_Toggle___ctor((UnityEngine_UI_Toggle_o *)__this,(MethodInfo *)0x0);
  return;
}

