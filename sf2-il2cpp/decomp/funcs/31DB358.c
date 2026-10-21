// UnityEngine.TransformExtensions$$IsIntersects @ RVA 0x31DB358

bool UnityEngine_TransformExtensions__IsIntersects
               (UnityEngine_RectTransform_o *t1,UnityEngine_RectTransform_o *t2,
               UnityEngine_Vector3_array *verts4,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_array *method_00;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  
  method_00 = verts4;
  UVar2 = UnityEngine_TransformExtensions__GetWorldRect(t1,verts4,(MethodInfo *)verts4);
  UVar3 = UnityEngine_TransformExtensions__GetWorldRect(t2,verts4,(MethodInfo *)method_00);
  bVar1 = false;
  if (((UVar2.fields.m_YMin < UVar3.fields.m_Height + UVar3.fields.m_YMin) &&
      (UVar3.fields.m_XMin < UVar2.fields.m_XMin + UVar2.fields.m_Width)) &&
     (UVar2.fields.m_XMin < UVar3.fields.m_Width + UVar3.fields.m_XMin)) {
    bVar1 = UVar3.fields.m_YMin < UVar2.fields.m_YMin + UVar2.fields.m_Height;
  }
  return bVar1;
}

