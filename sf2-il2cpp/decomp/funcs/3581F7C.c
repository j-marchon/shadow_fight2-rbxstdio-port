// Nekki.SF2.GUI.ResolutionImageMap$$RefreshSprite @ RVA 0x3581F7C

void Nekki_SF2_GUI_ResolutionImageMap__RefreshSprite
               (Nekki_SF2_GUI_ResolutionImageMap_o *__this,MethodInfo *method)

{
  System_String_o *OOKEKJMFKPE;
  System_String_o *HCAAAAMDCNO;
  bool bVar1;
  UnityEngine_Sprite_o *value;
  BCAEBMNHBAN_o *__this_00;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_array *x;
  
  if ((DAT_04568cd8 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cd8 = 1;
    method = extraout_x1;
  }
  *(undefined1 *)((long)&(__this->fields).super._SpriteName + 1) = 1;
  OOKEKJMFKPE = *(System_String_o **)&(__this->fields).super.super.m_PixelsPerUnitMultiplier;
  HCAAAAMDCNO = (__this->fields).super._TexturePath;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo,method);
  }
  value = KKCBGIBKOCP__GMNKLNDACOO(OOKEKJMFKPE,HCAAAAMDCNO,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)__this,value,(MethodInfo *)0x0);
  x = (__this->fields).super.super.super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = BCAEBMNHBAN__AIHNLLGNBLC((MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Material_o *)
             (*(__this->klass->vtable)._32_get_material.methodPtr)
                       (__this,(__this->klass->vtable)._32_get_material.method);
    if (__this_00 != (BCAEBMNHBAN_o *)0x0) {
      pUVar2 = BCAEBMNHBAN__AOBCLEPMLHD
                         (__this_00,pUVar2,
                          (UnityEngine_Sprite_o *)(__this->fields).super.super.super.m_Corners,
                          (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03682084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._33_set_material.methodPtr)
                (__this,pUVar2,(__this->klass->vtable)._33_set_material.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

