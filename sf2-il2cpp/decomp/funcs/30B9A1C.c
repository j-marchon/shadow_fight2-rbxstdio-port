// Nekki.SF2.GUI.TextPic$$get_TextBounds @ RVA 0x30B9A1C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__get_TextBounds
               (UnityEngine_Bounds_o *__return_storage_ptr__,Nekki_SF2_GUI_TextPic_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
  uVar3 = *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields;
  uVar2 = *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4);
  (__return_storage_ptr__->fields).m_Extents.fields.y = (float)(int)uVar1;
  (__return_storage_ptr__->fields).m_Extents.fields.z = (float)(int)((ulong)uVar1 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = uVar3;
  (__return_storage_ptr__->fields).m_Center.fields.x = (float)(int)uVar2;
  (__return_storage_ptr__->fields).m_Center.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  return;
}

