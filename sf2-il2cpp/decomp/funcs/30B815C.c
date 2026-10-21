// Nekki.SF2.GUI.TextPic$$GGKHBFKNNOC @ RVA 0x30B815C

void Nekki_SF2_GUI_TextPic__GGKHBFKNNOC
               (UnityEngine_TextGenerationSettings_o *__return_storage_ptr__,
               Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_Vector2_o AEEBBHBIHIK,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Font_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar5;
  UnityEngine_TextGenerationSettings_o local_138;
  System_Nullable_int__Fields local_d8;
  UnityEngine_Font_o *local_d0;
  UnityEngine_Color_Fields UStack_c8;
  UnityEngine_Vector2_Fields local_b0;
  UnityEngine_Vector2_Fields UStack_a8;
  bool_conflict local_a0;
  undefined7 uStack_9f;
  float local_90;
  bool_conflict bStack_8c;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  int32_t iStack_80;
  bool_conflict bStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((DAT_04566206 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566206 = 1;
  }
  local_d8.hasValue = false;
  local_d8._1_3_ = 0;
  local_d8.value = 0;
  UnityEngine_UI_Text__GetGenerationSettings
            (&local_138,(UnityEngine_UI_Text_o *)__this,AEEBBHBIHIK,(MethodInfo *)0x0);
  UStack_c8.b = local_138.fields.color.fields.b;
  UStack_c8.a = local_138.fields.color.fields.a;
  uStack_88 = local_138.fields._36_5_;
  local_90 = local_138.fields.lineSpacing;
  bStack_8c = local_138.fields.richText;
  uStack_8b = local_138.fields._33_3_;
  local_a0 = local_138.fields.generateOutOfBounds;
  uStack_9f = local_138.fields._89_7_;
  uStack_83 = local_138.fields.fontStyle._1_3_;
  iStack_80 = local_138.fields.textAnchor;
  bStack_7c = local_138.fields.alignByGeometry;
  UStack_c8.r = local_138.fields.color.fields.r;
  UStack_c8.g = local_138.fields.color.fields.g;
  local_d0 = local_138.fields.font;
  UStack_a8 = local_138.fields.pivot.fields;
  local_b0 = local_138.fields.generationExtents.fields;
  *(undefined1 *)&(__this->fields).MEIDNEHHHKI = 0;
  *(undefined4 *)((long)&(__this->fields).MEIDNEHHHKI + 4) = 0xffffffff;
  bVar2 = Nekki_SF2_GUI_TextPic__MCLPFBNCJIB(__this,method_00);
  uVar5 = local_138.fields._64_8_;
  if (bVar2) {
    local_d8 = (System_Nullable_int__Fields)Nekki_SF2_GUI_TextPic__LAGLMDPBDKN(__this,method_01);
    if (((ulong)local_d8 & 0xff) != 0) {
      *(undefined1 *)&(__this->fields).MEIDNEHHHKI = 1;
      iVar3 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_d8,Method_System_Nullable<int>_get_Value__);
      *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4) = iVar3;
      pUVar4 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      uVar5._0_4_ = 1;
      uVar5._4_4_ = 1;
      if (bVar2) {
        pUVar4 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Font_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = UnityEngine_Font__get_dynamic(pUVar4,(MethodInfo *)0x0);
        if (bVar2) {
          local_138.fields.fontSize = *(int32_t *)((long)&(__this->fields).MEIDNEHHHKI + 4);
          local_138.fields.resizeTextMinSize = 0;
          local_138.fields.resizeTextForBestFit = false;
          local_138.fields.resizeTextMaxSize = local_138.fields.fontSize;
          goto LAB_031b82fc;
        }
      }
      local_138.fields.resizeTextForBestFit = false;
    }
  }
LAB_031b82fc:
  (__return_storage_ptr__->fields).color.fields.r = UStack_c8.r;
  (__return_storage_ptr__->fields).color.fields.g = UStack_c8.g;
  (__return_storage_ptr__->fields).font = local_d0;
  (__return_storage_ptr__->fields).fontSize = local_138.fields.fontSize;
  (__return_storage_ptr__->fields).verticalOverflow = (int32_t)uVar5;
  (__return_storage_ptr__->fields).horizontalOverflow = SUB84(uVar5,4);
  (__return_storage_ptr__->fields).resizeTextForBestFit = local_138.fields.resizeTextForBestFit;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x32 = local_138.fields._50_2_;
  (__return_storage_ptr__->fields).resizeTextMinSize = local_138.fields.resizeTextMinSize;
  (__return_storage_ptr__->fields).resizeTextMaxSize = local_138.fields.resizeTextMaxSize;
  (__return_storage_ptr__->fields).updateBounds = local_138.fields.updateBounds;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x3d = local_138.fields._61_3_;
  (__return_storage_ptr__->fields).color.fields.b = UStack_c8.b;
  (__return_storage_ptr__->fields).color.fields.a = UStack_c8.a;
  *(ulong *)((long)&(__return_storage_ptr__->fields).fontStyle + 1) = CONCAT53(_iStack_80,uStack_83)
  ;
  (__return_storage_ptr__->fields).scaleFactor = (float)(int)uStack_88;
  (__return_storage_ptr__->fields).fontStyle = (int)(CONCAT35(uStack_83,uStack_88) >> 0x20);
  (__return_storage_ptr__->fields).lineSpacing = local_90;
  (__return_storage_ptr__->fields).richText = bStack_8c;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x21 = uStack_8b;
  (__return_storage_ptr__->fields).generateOutOfBounds = local_a0;
  *(undefined7 *)&(__return_storage_ptr__->fields).field_0x59 = uStack_9f;
  (__return_storage_ptr__->fields).pivot.fields = UStack_a8;
  (__return_storage_ptr__->fields).generationExtents.fields = local_b0;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

