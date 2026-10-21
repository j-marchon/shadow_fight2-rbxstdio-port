// Nekki.SF2.GUI.SimpleScroll$$MEIKBHLKJJK @ RVA 0x302B740

bool Nekki_SF2_GUI_SimpleScroll__MEIKBHLKJJK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_RectTransform_o *PLDLIICJOEC,
               bool EDPALOCNMAC,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_Vector3_array *verts4;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  if ((DAT_04565ccc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565ccc = 1;
  }
  verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  UVar5 = UnityEngine_TransformExtensions__GetWorldRect
                    ((__this->fields).super.m_Viewport,verts4,(MethodInfo *)0x0);
  UVar6 = UnityEngine_TransformExtensions__GetWorldRect(PLDLIICJOEC,verts4,(MethodInfo *)0x0);
  fVar3 = UVar6.fields.m_YMin;
  fVar4 = UVar6.fields.m_XMin;
  if ((__this->fields).super.m_Vertical == false) {
    if ((__this->fields).super.m_Horizontal == false) {
      return false;
    }
    if (EDPALOCNMAC) {
      fVar3 = UVar5.fields.m_XMin + -1.0;
      bVar2 = NAN(fVar4) || NAN(fVar3);
      bVar1 = fVar4 < fVar3;
      goto LAB_0312b80c;
    }
    fVar3 = UVar6.fields.m_Width + fVar4;
    fVar4 = UVar5.fields.m_Width + UVar5.fields.m_XMin;
  }
  else {
    if (!EDPALOCNMAC) {
      fVar4 = UVar5.fields.m_YMin + -1.0;
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3) && !NAN(fVar4)) {
        bVar1 = fVar3 < fVar4;
        bVar2 = false;
      }
LAB_0312b80c:
      return bVar1 == bVar2;
    }
    fVar3 = UVar6.fields.m_Height + fVar3;
    fVar4 = UVar5.fields.m_Height + UVar5.fields.m_YMin;
  }
  return fVar3 <= fVar4 + 1.0;
}

