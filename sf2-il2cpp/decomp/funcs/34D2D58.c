// Nekki.SF2.GUI.TextGradient$$.ctor @ RVA 0x34D2D58

void Nekki_SF2_GUI_TextGradient___ctor(Nekki_SF2_GUI_TextGradient_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01ca4568(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  (__this->fields).topColor.fields.rgba = iVar1;
  uVar2 = FUN_01ca4568(0,0,0,0x3f800000,0);
  (__this->fields).topColor.fields.r = (char)uVar2;
  (__this->fields).topColor.fields.g = (char)((uint)uVar2 >> 8);
  (__this->fields).topColor.fields.b = (char)((uint)uVar2 >> 0x10);
  (__this->fields).topColor.fields.a = (char)((uint)uVar2 >> 0x18);
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  return;
}

