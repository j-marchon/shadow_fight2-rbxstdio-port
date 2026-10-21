// Nekki.SF2.GUI.Dialogs.SimpleDialog$$LPOJJPJFMOI @ RVA 0x301E540

void Nekki_SF2_GUI_Dialogs_SimpleDialog__LPOJJPJFMOI
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  LabelButton_o *pLVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_04565c31 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04565c31 = 1;
  }
  iVar1 = (__this->fields).super.JOLPNMNNKCJ;
  if (iVar1 == 1) {
    pLVar2 = (__this->fields).super._btnOK;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      pLVar2 = (__this->fields).super._btnOK;
      if ((pLVar2 == (LabelButton_o *)0x0) ||
         (pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pLVar2,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0311e640;
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnCancel;
      if ((pLVar2 == (LabelButton_o *)0x0) ||
         (pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pLVar2,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0311e640;
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnCancel;
      if (pLVar2 == (LabelButton_o *)0x0) goto LAB_0311e640;
      fVar5 = (__this->fields).FJBAGGCNDLF;
      fVar7 = UVar9.fields.m_Width * 0.5;
      fVar6 = ((fVar5 - UVar8.fields.m_Width) - UVar9.fields.m_Width) / 3.0;
      fVar5 = fVar7 + (fVar6 - fVar5 * 0.5);
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar5,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnOK;
      if (pLVar2 == (LabelButton_o *)0x0) goto LAB_0311e640;
      fVar5 = fVar5 + UVar8.fields.m_Width * 0.5 + fVar7 + fVar6;
      goto LAB_0311e650;
    }
    pLVar2 = (__this->fields).super._btnCancel;
  }
  if (pLVar2 == (LabelButton_o *)0x0) {
LAB_0311e640:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar5 = 0.0;
LAB_0311e650:
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0)
  ;
  UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar5,(MethodInfo *)0x0);
  return;
}

