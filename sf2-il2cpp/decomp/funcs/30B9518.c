// Nekki.SF2.GUI.TextPic$$BMHJEBCABGH @ RVA 0x30B9518

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__BMHJEBCABGH
               (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_Bounds_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  UnityEngine_Bounds_o *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)&(CJNHFNHJHPE->fields).m_Center.fields.z;
  uVar2 = *(undefined8 *)&(CJNHFNHJHPE->fields).m_Center.fields;
  *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z =
       *(undefined8 *)&(CJNHFNHJHPE->fields).m_Extents.fields.y;
  pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
  (pUVar1->fields).m_Center.fields.x = (float)(int)uVar3;
  (pUVar1->fields).m_Center.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
  *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4) = uVar2;
  return;
}

