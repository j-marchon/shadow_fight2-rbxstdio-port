// Nekki.SF2.GUI.ResolutionImageSkew$$OnPopulateMesh @ RVA 0x34510A8

void Nekki_SF2_GUI_ResolutionImageSkew__OnPopulateMesh
               (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,
               UnityEngine_UI_VertexHelper_o *BALEEENOIJA,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o PGFAIJMMOHJ;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_UI_Image__OnPopulateMesh
            ((UnityEngine_UI_Image_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      PGFAIJMMOHJ.fields.y = UVar3.fields.m_Height;
      PGFAIJMMOHJ.fields.x = UVar2.fields.m_Width;
      Nekki_SF2_GUI_ResolutionImageSkew__MGEMOHEBNPF(__this,BALEEENOIJA,PGFAIJMMOHJ,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

