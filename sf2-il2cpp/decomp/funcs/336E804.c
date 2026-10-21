// Nekki.SF2.GUI.Glyphs.Glyph$$MFGIDAHNDGI @ RVA 0x336E804

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Glyphs_Glyph__MFGIDAHNDGI
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,System_Nullable_Vector2__o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue = (bool_conflict)(char)uVar1;
  *(int3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1 =
       (int3)((ulong)uVar1 >> 8);
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x =
       (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y =
       CJNHFNHJHPE.fields.value.fields.y;
  return;
}

