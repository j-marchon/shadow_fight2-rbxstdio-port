// AnimatedSprite$$Render @ RVA 0x33F604C

void AnimatedSprite__Render(AnimatedSprite_o *__this,float BLENDMCELBE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_SpriteRenderer_o *x;
  float fVar2;
  
  if ((DAT_04567f95 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f95 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).HFCMLMAKMNJ != false) {
    x = (__this->fields).CAOKGHKPFAE;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (fVar2 = (__this->fields).BJIKPLGMOMI + BLENDMCELBE, (__this->fields).BJIKPLGMOMI = fVar2,
       (__this->fields).PBKECMFHOPO <= fVar2)) {
      AnimatedSprite__GDAGKPBCOBE(__this,method_00);
      (__this->fields).BJIKPLGMOMI = 0.0;
    }
  }
  return;
}

