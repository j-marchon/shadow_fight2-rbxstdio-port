// Nekki.SF2.GUI.Dialogs.StoryDialog$$KJMBGJFCHOA @ RVA 0x32BE6A0

void Nekki_SF2_GUI_Dialogs_StoryDialog__KJMBGJFCHOA
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Nekki_SF2_GUI_LabelAlias_o *GJCPJIFKLAI,
               MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  if (GJCPJIFKLAI != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    bVar1 = (__this->fields).ACPDELFFFHF;
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)GJCPJIFKLAI,(MethodInfo *)0x0);
    if (bVar1 == false) {
      fVar2 = 0.0;
LAB_033be748:
      UnityEngine_TransformExtensions__SetLocalPositionX(transform,fVar2,(MethodInfo *)0x0);
      return;
    }
    __this_00 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP(__this,method_00);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar4 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
      fVar3 = (__this->fields).BNJJNFFCCCA;
      fVar2 = (__this->fields).OAMNJIMNBAC;
      __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)GJCPJIFKLAI,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        fVar2 = (UVar4.fields.x - fVar3) + 40.0 + fVar2 * 0.9 * 0.5 + UVar5.fields.m_Width * 0.5;
        goto LAB_033be748;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

