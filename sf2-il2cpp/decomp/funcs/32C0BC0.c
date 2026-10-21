// Nekki.SF2.GUI.Dialogs.StoryDialog$$GKPJMHOFIOO @ RVA 0x32C0BC0

void Nekki_SF2_GUI_Dialogs_StoryDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *transform;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar5;
  Nekki_SF2_GUI_Dialogs_StoryDialog_c *pNVar6;
  Il2CppMethodPointer pIVar7;
  Nekki_SF2_GUI_CompositeImage_o *pNVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_o value;
  
  if ((DAT_045674c9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674c9 = 1;
    method = extraout_x1;
  }
  pNVar8 = (__this->fields)._compositeImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar8,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields)._compositeImage;
    if (pNVar8 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) goto LAB_033c0d78;
    Nekki_SF2_GUI_CompositeImage__set_Data(pNVar8,(__this->fields).MEELBFGHELO,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields)._compositeImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar8,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).MEELBFGHELO != (IGNEHHMICKB_o *)0x0)) {
    pNVar2 = (__this->fields)._portrait;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0d78;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
  }
  else {
    pNVar2 = (__this->fields)._portrait;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0d78;
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._35_EMNMKABDINP.methodPtr)
              (__this,(__this->fields).DHLCIGNKKPP,(__this->klass->vtable)._35_EMNMKABDINP.method);
  }
  pNVar6 = __this->klass;
  if ((__this->fields).NHNBEPIDGIB == false) {
    pIVar7 = (pNVar6->vtable)._39_IFHIOMOEIPE.methodPtr;
    pMVar5 = (pNVar6->vtable)._39_IFHIOMOEIPE.method;
  }
  else {
    pIVar7 = (pNVar6->vtable)._36_IMHIFGGIIMF.methodPtr;
    pMVar5 = (pNVar6->vtable)._36_IMHIFGGIIMF.method;
  }
  (*pIVar7)(__this,pMVar5);
  pUVar3 = (__this->fields).super._content;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,20.0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).super._content;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar10 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).super._content;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          fVar9 = (__this->fields).OAMNJIMNBAC;
          pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            value.fields.y = fVar9 * 0.9 * 0.8;
            value.fields.x = UVar10.fields.m_Width;
            UnityEngine_RectTransform__set_sizeDelta(pUVar4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_033c0d78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

