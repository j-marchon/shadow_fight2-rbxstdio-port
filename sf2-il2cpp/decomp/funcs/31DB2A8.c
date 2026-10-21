// UnityEngine.TransformExtensions$$GetWorldRect @ RVA 0x31DB2A8

UnityEngine_Rect_o
UnityEngine_TransformExtensions__GetWorldRect
          (UnityEngine_RectTransform_o *t1,UnityEngine_Vector3_array *verts4,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_04566d13 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04566d13 = 1;
  }
  if ((verts4 == (UnityEngine_Vector3_array *)0x0) || ((int)verts4->max_length < 4)) {
    verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  }
  if ((t1 != (UnityEngine_RectTransform_o *)0x0) &&
     (UnityEngine_RectTransform__GetWorldCorners(t1,verts4,(MethodInfo *)0x0),
     verts4 != (UnityEngine_Vector3_array *)0x0)) {
    uVar1 = (uint)verts4->max_length;
    if (((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) {
      uVar2 = verts4->m_Items[0].fields.x;
      uVar3 = verts4->m_Items[0].fields.y;
      UVar4.fields.m_YMin = (float)uVar3;
      UVar4.fields.m_XMin = (float)uVar2;
      UVar4.fields.m_Width = ABS(verts4->m_Items[1].fields.x - verts4->m_Items[2].fields.x);
      UVar4.fields.m_Height = ABS(verts4->m_Items[0].fields.y - verts4->m_Items[1].fields.y);
      return (UnityEngine_Rect_o)UVar4.fields;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

