// Nekki.SF2.GUI.TextPic$$LocalTextMeshBounds_Anchored @ RVA 0x30B441C

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Vector3_o
Nekki_SF2_GUI_TextPic__LocalTextMeshBounds_Anchored
          (Nekki_SF2_GUI_TextPic_o *__this,int32_t POJKEOPHOAI,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  UnityEngine_Vector3_Fields UVar2;
  UnityEngine_Bounds_o local_30;
  
  local_30.fields.m_Extents.fields._4_8_ =
       *(undefined8 *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
  pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
  local_30.fields.m_Center.fields.z = (pUVar1->fields).m_Center.fields.x;
  local_30.fields.m_Extents.fields.x = (pUVar1->fields).m_Center.fields.y;
  local_30.fields.m_Center.fields._0_8_ = *(undefined8 *)((long)&(__this->fields).GlyphPrefabs + 4);
  UVar2 = (UnityEngine_Vector3_Fields)
          OMANDMDCGMF__OIMANFCDDIJ(POJKEOPHOAI,&local_30,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar2;
}

