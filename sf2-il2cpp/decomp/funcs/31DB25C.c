// UnityEngine.TransformExtensions$$IsIntersects @ RVA 0x31DB25C

bool UnityEngine_TransformExtensions__IsIntersects
               (UnityEngine_RectTransform_o *t1,UnityEngine_Vector3_o worldPos,
               UnityEngine_Vector3_array *verts4,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Rect_o UVar2;
  
  UVar2 = UnityEngine_TransformExtensions__GetWorldRect(t1,verts4,method);
  bVar1 = false;
  if (((UVar2.fields.m_YMin <= worldPos.fields.y) && (UVar2.fields.m_XMin <= worldPos.fields.x)) &&
     (worldPos.fields.x < UVar2.fields.m_XMin + UVar2.fields.m_Width)) {
    bVar1 = worldPos.fields.y < UVar2.fields.m_YMin + UVar2.fields.m_Height;
  }
  return bVar1;
}

