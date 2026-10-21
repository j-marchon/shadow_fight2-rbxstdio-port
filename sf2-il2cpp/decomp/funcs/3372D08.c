// DICFMPEJCCB$$.ctor @ RVA 0x3372D08

void DICFMPEJCCB___ctor(DICFMPEJCCB_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  (__this->fields).KBNCFNICOOG.fields.g = (float)(int)auVar1._8_8_;
  (__this->fields).KBNCFNICOOG.fields.b = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  *(long *)&(__this->fields).super.field_0x54 = auVar1._0_8_;
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

