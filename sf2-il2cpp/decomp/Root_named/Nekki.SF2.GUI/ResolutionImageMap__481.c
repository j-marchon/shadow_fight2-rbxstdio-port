// TypeDefIndex 481
// Namespace: Nekki.SF2.GUI
// public class ResolutionImageMap : ResolutionImage
// Fields:
//   private Nullable<Vector2> HBEGECDEHMP; // 0x124

// ===== public void .ctor()  [RVA 0x3581F74]
// Nekki.SF2.GUI.ResolutionImageMap$$.ctor @ RVA 0x3581F74

void Nekki_SF2_GUI_ResolutionImageMap___ctor
               (Nekki_SF2_GUI_ResolutionImageMap_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage___ctor((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void RefreshSprite()  [RVA 0x3581F7C]
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


// ===== protected override void GPCBFKCHEOB()  [RVA 0x358209C]
// Nekki.SF2.GUI.ResolutionImageMap$$GPCBFKCHEOB @ RVA 0x358209C

void Nekki_SF2_GUI_ResolutionImageMap__GPCBFKCHEOB
               (Nekki_SF2_GUI_ResolutionImageMap_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *HCAAAAMDCNO;
  MethodInfo *extraout_x1;
  MethodInfo_27FC88C *method_00;
  UnityEngine_Vector3_array *pUVar4;
  float fVar5;
  System_Nullable_Vector2__o __this_01;
  System_Nullable_Vector2__o __this_02;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o value;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_04568cd9 & 1) == 0) {
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cd9 = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields).super.super.super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo_27FC88C *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    puVar1 = (undefined8 *)((long)&(__this->fields).super._SpriteName + 4);
    if (*(char *)((long)&(__this->fields).super._SpriteName + 4) == '\0') {
      pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03682284;
      UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      local_38 = 0;
      local_40 = 0;
      __this_01.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
      __this_01.fields._0_8_ = &local_40;
      System_Nullable<Vector2>___ctor(__this_01,UVar6,(MethodInfo_27FC874 *)method_00);
      *(undefined4 *)&(__this->fields).super.field_0x11c = local_38;
      *puVar1 = local_40;
    }
    pUVar4 = (__this->fields).super.super.super.m_Corners;
    if ((pUVar4 == (UnityEngine_Vector3_array *)0x0) ||
       (__this_00 = UnityEngine_Sprite__get_texture
                              ((UnityEngine_Sprite_o *)pUVar4,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Texture2D_o *)0x0)) {
LAB_03682284:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    HCAAAAMDCNO = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
    }
    bVar2 = KKCBGIBKOCP__INHBAMFOLNC(HCAAAAMDCNO,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      __this_02.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
      __this_02.fields._0_8_ = puVar1;
      UVar6 = System_Nullable<Vector2>__get_Value(__this_02,method_00);
      if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045660f4 == '\0') {
                    /* try { // try from 03682230 to 037823f7 has its CatchHandler @ 03682230
                       catch() { ... } // from try @ 03682230 with catch @ 03682230
                       catch() { ... } // from try @ 03682728 with catch @ 03682230
                       catch() { ... } // from try @ 036827fc with catch @ 03682230
                       catch() { ... } // from try @ 03682804 with catch @ 03682230
                       catch() { ... } // from try @ 03682954 with catch @ 03682230 */
        FUN_01bab630(&MainSettings_TypeInfo);
        DAT_045660f4 = '\x01';
      }
      if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03682284;
      fVar5 = MainSettings_TypeInfo->static_fields->NADOFNLEECE;
      value.fields.y = UVar6.fields.y * fVar5;
      value.fields.x = UVar6.fields.x * fVar5;
      UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
    }
  }
  return;
}

