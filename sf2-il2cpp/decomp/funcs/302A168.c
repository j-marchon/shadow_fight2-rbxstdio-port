// Nekki.SF2.GUI.SimpleScroll$$ScrollToOrth @ RVA 0x302A168

void Nekki_SF2_GUI_SimpleScroll__ScrollToOrth
               (Nekki_SF2_GUI_SimpleScroll_o *__this,float LDMFIPMKKBA,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_BaseScrollItem__o *pSVar6;
  Nekki_SF2_GUI_SimpleScroll_c *pNVar7;
  System_Action_o *pSVar8;
  UnityEngine_Vector2_Fields UVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o local_38;
  
  if ((*(char *)&(__this->fields).LNAPCDLIOOE != '\0') ||
     (bVar3 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling
                        (__this,(MethodInfo *)(ulong)(uint)GAJONDLDKLI), !bVar3)) {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
  pUVar4 = (__this->fields).super.m_Content;
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    UVar10 = UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    local_38.fields.y = UVar10.fields.y;
    local_38.fields.x = UVar10.fields.x;
    if ((__this->fields).super.m_Vertical != false) {
      local_38.fields.y = LDMFIPMKKBA;
      Nekki_SF2_GUI_SimpleScroll__OLABKBMECLF(__this,&local_38,method);
    }
    if ((__this->fields).super.m_Horizontal != false) {
      local_38.fields.x = LDMFIPMKKBA;
      Nekki_SF2_GUI_SimpleScroll__HGDFKDAJKOB(__this,&local_38,method);
    }
    fVar2 = local_38.fields.y;
    fVar1 = local_38.fields.x;
    if (0.01 < PNEIGGOFIOA) {
      (*(__this->klass->vtable)._41_StopMovement.methodPtr)
                (__this,(__this->klass->vtable)._41_StopMovement.method);
      UVar10.fields.y = local_38.fields.y;
      UVar10.fields.x = local_38.fields.x;
      Nekki_SF2_GUI_SimpleScroll__MGGKMCMKAPB(__this,UVar10,PNEIGGOFIOA,1,method);
      return;
    }
    pUVar4 = (__this->fields).super.m_Content;
    if (DAT_04560001 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_04560001 = '\x01';
    }
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = (UnityEngine_Vector2_TypeInfo->static_fields->rightVector).fields;
      value.fields.x = fVar1 - UVar9.x;
      value.fields.y = fVar2 - UVar9.y;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
      UVar9.y = local_38.fields.y;
      UVar9.x = local_38.fields.x;
      pNVar7 = __this->klass;
      (__this->fields).IFDBJFNPOEK.fields = UVar9;
      (*(pNVar7->vtable)._41_StopMovement.methodPtr)
                (__this,(pNVar7->vtable)._41_StopMovement.method);
      pSVar8 = (__this->fields).JFFDCLAAPBE;
      if (pSVar8 != (System_Action_o *)0x0) {
        pNVar5 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_01);
        (*(code *)(pSVar8->fields).super.super.invoke_impl)
                  ((pSVar8->fields).super.super.method_code,pNVar5,
                   (pSVar8->fields).super.super.method);
      }
      pSVar6 = (__this->fields).FOKMEOHPDJL;
      if (pSVar6 != (System_Action_BaseScrollItem__o *)0x0) {
        (*(code *)(pSVar6->fields).super.super.invoke_impl)
                  ((pSVar6->fields).super.super.method_code,(pSVar6->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

