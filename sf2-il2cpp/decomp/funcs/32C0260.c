// Nekki.SF2.GUI.Dialogs.StoryDialog$$IMGPKHODFAN @ RVA 0x32C0260

void Nekki_SF2_GUI_Dialogs_StoryDialog__IMGPKHODFAN
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,UnityEngine_Color_o LNHGGJMDJBJ,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector2_o value;
  
  pNVar2 = (__this->fields)._text;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(pNVar2,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._text;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar2,0x67,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._text;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                    (CONCAT44((int)((ulong)LNHGGJMDJBJ.fields._0_8_ >> 0x20),LNHGGJMDJBJ.fields.r),
                     CONCAT44((int)((ulong)LNHGGJMDJBJ.fields._4_8_ >> 0x20),LNHGGJMDJBJ.fields.g),
                     CONCAT44((int)((ulong)LNHGGJMDJBJ.fields._8_8_ >> 0x20),LNHGGJMDJBJ.fields.b),
                     CONCAT44((int)((ulong)register0x00005060 >> 0x20),LNHGGJMDJBJ.fields.a),pNVar2,
                     (pNVar2->klass->vtable)._23_set_color.method);
          pNVar2 = (__this->fields)._text;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)pNVar2,3,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._text;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              transform = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalPositionY(transform,0.0,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._text;
              if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                                      ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._text;
                if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  bVar1 = (__this->fields).FKDKFGIFBIJ;
                  __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                                        ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar4 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
                    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                      fVar3 = 1680.0;
                      if (bVar1 != false) {
                        fVar3 = 900.0;
                      }
                      value.fields.y = UVar4.fields.m_Height;
                      value.fields.x = fVar3;
                      UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

