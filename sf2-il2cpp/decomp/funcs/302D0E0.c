// Nekki.SF2.GUI.SimpleScroll$$LateUpdate @ RVA 0x302D0E0

void Nekki_SF2_GUI_SimpleScroll__LateUpdate(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar4;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector2_o UVar9;
  
  if ((DAT_04565cc9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04565cc9 = 1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE == '\0') {
    UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
        UVar7 = (__this->fields).IFDBJFNPOEK.fields;
        UVar8 = (__this->fields).AOLPGMKLBGK.fields;
        fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar6.x = ((UVar9.fields.x - UVar7.x) - UVar8.x) / fVar5;
        UVar6.y = ((UVar9.fields.y - UVar7.y) - UVar8.y) / fVar5;
        (__this->fields).KFDLOCBGNEA.fields = UVar6;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
        }
        pUVar2 = (__this->fields).super.m_Content;
        (__this->fields).AOLPGMKLBGK.fields =
             (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).JFFDCLAAPBE;
          (__this->fields).IFDBJFNPOEK.fields.x = UVar9.fields.x;
          (__this->fields).IFDBJFNPOEK.fields.y = UVar9.fields.y;
          if (pSVar4 == (System_Action_o *)0x0) {
            return;
          }
          bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_01);
          if ((!bVar1) && (*(char *)&(__this->fields).KIANNGNDAFC == '\0')) {
            return;
          }
          pSVar4 = (__this->fields).JFFDCLAAPBE;
          pNVar3 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_02);
          if (pSVar4 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0312d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar4->fields).super.super.invoke_impl)
                      ((pSVar4->fields).super.super.method_code,pNVar3,
                       (pSVar4->fields).super.super.method);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

