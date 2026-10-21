// TypeDefIndex 321
// Namespace: src.GUI.Scripts
// [Serializable]
// public class LerpParams
// Fields:
//   public float Value1; // 0x10
//   public float Value2; // 0x14
//   public float Arg1; // 0x18
//   public float Arg2; // 0x1C
//   public Ease Ease; // 0x20
//   public bool Clamp; // 0x24

// ===== public float GPPKOIAJGGL(float PLPFOJADDML)  [RVA 0x3349804]
// src.GUI.Scripts.LerpParams$$GPPKOIAJGGL @ RVA 0x3349804

float src_GUI_Scripts_LerpParams__GPPKOIAJGGL
                (src_GUI_Scripts_LerpParams_o *__this,float PLPFOJADDML,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = Util__OGAMEOMFKPD((__this->fields).Value1,(__this->fields).Value2,(__this->fields).Arg1,
                            (__this->fields).Arg2,PLPFOJADDML,(__this->fields).Clamp,
                            (__this->fields).Ease,(MethodInfo *)0x0);
  return fVar1;
}


// ===== public void .ctor()  [RVA 0x334982C]
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

