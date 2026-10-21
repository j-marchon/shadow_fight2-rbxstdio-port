// KKKHGGHNHLO$$KDMBCCPCLAJ @ RVA 0x3505588

void KKKHGGHNHLO__KDMBCCPCLAJ(KKKHGGHNHLO_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_Color_o UVar2;
  UnityEngine_Color_o value;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
  if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UVar2 = UnityEngine_SpriteRenderer__get_color(pUVar1,(MethodInfo *)0x0);
    value.fields.b = UVar2.fields.b;
    pUVar1 = (__this->fields).IAKCIALILLN;
    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
      value.fields.a = CJNHFNHJHPE;
      value.fields.r = (float)(int)UVar2.fields._0_8_;
      value.fields.g = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
      UnityEngine_SpriteRenderer__set_color(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

