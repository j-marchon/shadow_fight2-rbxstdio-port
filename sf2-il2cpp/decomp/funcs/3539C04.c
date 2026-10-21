// Nekki.SF2.GUI.LockScreen$$OAHAAAHHMOL @ RVA 0x3539C04

void Nekki_SF2_GUI_LockScreen__OAHAAAHHMOL
               (Nekki_SF2_GUI_LockScreen_o *__this,bool CMPKOOEKFKF,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  bool bVar4;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  MethodInfo *method_00;
  UnityEngine_Color_o *pUVar7;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  
  if ((DAT_04568ab9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ab9 = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_03639d64;
    UnityEngine_GameObject__SetActive(pUVar5,CMPKOOEKFKF,(MethodInfo *)0x0);
  }
  if (CMPKOOEKFKF) {
    pUVar6 = (__this->fields).background;
    if (CCOCAIEPCOJ) {
      pUVar7 = &(__this->fields).visibleColor;
      pUVar1 = &(__this->fields).visibleColor;
      pUVar2 = &(__this->fields).visibleColor;
      pUVar3 = &(__this->fields).visibleColor;
    }
    else {
      pUVar7 = &(__this->fields).invisibleColor;
      pUVar1 = &(__this->fields).invisibleColor;
      pUVar2 = &(__this->fields).invisibleColor;
      pUVar3 = &(__this->fields).invisibleColor;
    }
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03639d64;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
              ((pUVar7->fields).r,(pUVar1->fields).g,(pUVar2->fields).b,(pUVar3->fields).a,pUVar6,
               (pUVar6->klass->vtable)._23_set_color.method);
  }
  pNVar8 = (__this->fields).rotateImg;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pNVar8 = (__this->fields).rotateImg;
  if ((pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar5,CMPKOOEKFKF && CCOCAIEPCOJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_LockScreen__MHENCNPBING(__this,CMPKOOEKFKF && CCOCAIEPCOJ,method_00);
    return;
  }
LAB_03639d64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

