// Nekki.SF2.GUI.TextPic$$get_AlignedTextBounds @ RVA 0x30B9678

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__get_AlignedTextBounds
               (UnityEngine_Bounds_o *__return_storage_ptr__,Nekki_SF2_GUI_TextPic_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_Bounds__o *pSVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z;
  uVar3 = *(undefined8 *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields;
  pSVar2 = (__this->fields)._CECMNNLFJKO_k__BackingField;
  (__return_storage_ptr__->fields).m_Extents.fields.y = (float)(int)uVar1;
  (__return_storage_ptr__->fields).m_Extents.fields.z = (float)(int)((ulong)uVar1 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = uVar3;
  *(System_Collections_Generic_List_Bounds__o **)&(__return_storage_ptr__->fields).m_Center.fields =
       pSVar2;
  return;
}

