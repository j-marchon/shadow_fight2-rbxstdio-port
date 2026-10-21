// Nekki.SF2.GUI.Dialogs.SimpleDialog$$IJEDDPJEHCH @ RVA 0x301E460

float Nekki_SF2_GUI_Dialogs_SimpleDialog__IJEDDPJEHCH
                (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_RectTransform_o *pUVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04565c35 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04565c35 = 1;
  }
  uVar3 = (__this->fields).super.JOLPNMNNKCJ;
  fVar6 = 0.0;
  if ((uVar3 | 2) == 3) {
    pLVar1 = (__this->fields).super._btnOK;
    if ((pLVar1 == (LabelButton_o *)0x0) ||
       (pUVar2 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pLVar1,
                            Method_UnityEngine_Component_GetComponent<RectTransform>__),
       pUVar2 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0311e53c;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar5 = UVar7.fields.m_Width;
    uVar3 = (__this->fields).super.JOLPNMNNKCJ;
    iVar4 = 2;
    if (uVar3 != 3) goto LAB_0311e4e8;
  }
  else {
    iVar4 = 1;
    fVar5 = 0.0;
LAB_0311e4e8:
    if (uVar3 != 2) goto LAB_0311e514;
  }
  pLVar1 = (__this->fields).super._btnCancel;
  if ((pLVar1 == (LabelButton_o *)0x0) ||
     (pUVar2 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pLVar1,
                          Method_UnityEngine_Component_GetComponent<RectTransform>__),
     pUVar2 == (UnityEngine_RectTransform_o *)0x0)) {
LAB_0311e53c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
  fVar6 = UVar7.fields.m_Width;
  iVar4 = iVar4 + 1;
LAB_0311e514:
  return fVar5 + fVar6 + (float)iVar4 * 60.0;
}

