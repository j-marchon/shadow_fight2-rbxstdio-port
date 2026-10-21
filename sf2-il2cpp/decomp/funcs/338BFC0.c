// Nekki.SF2.GUI.Menu.MenuScroll$$EDCPAMPAOIC @ RVA 0x338BFC0

void Nekki_SF2_GUI_Menu_MenuScroll__EDCPAMPAOIC
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  ulong uVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Image_c *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined1 in_q2 [16];
  float fVar8;
  float fVar9;
  
  if ((DAT_04567be6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567be6 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  fVar6 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,method_00);
  pUVar5 = (__this->fields)._background;
  if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
    fVar9 = (__this->fields).FDFCNIMNHFK;
    fVar8 = (__this->fields).GBAGCMBPGHI;
    uVar7 = (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                      (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
    pUVar2 = (__this->fields)._background;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
    (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
              (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
    pUVar2 = (__this->fields)._background;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
    fVar8 = (ABS(fVar6 / fVar9) * 255.0) / fVar8;
    (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
              (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (uVar7,in_d1,in_q2,(ulong)(uint)fVar8,pUVar5,
               (pUVar5->klass->vtable)._23_set_color.method);
    if (fVar8 <= 0.0) {
      pUVar5 = (__this->fields)._background;
      if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
      uVar3 = (*(pUVar5->klass->vtable)._24_get_raycastTarget.methodPtr)
                        (pUVar5,(pUVar5->klass->vtable)._24_get_raycastTarget.method);
      if ((uVar3 & 1) != 0) {
        pUVar5 = (__this->fields)._background;
        if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0348c16c;
        pUVar4 = pUVar5->klass;
        uVar7 = 0;
        goto LAB_0348c14c;
      }
    }
    if (fVar8 <= 0.0) {
      return;
    }
    pUVar5 = (__this->fields)._background;
    if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
      uVar3 = (*(pUVar5->klass->vtable)._24_get_raycastTarget.methodPtr)
                        (pUVar5,(pUVar5->klass->vtable)._24_get_raycastTarget.method);
      if ((uVar3 & 1) != 0) {
        return;
      }
      pUVar5 = (__this->fields)._background;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar4 = pUVar5->klass;
        uVar7 = 1;
LAB_0348c14c:
                    /* WARNING: Could not recover jumptable at 0x0348c168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar4->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar5,uVar7,(pUVar4->vtable)._25_set_raycastTarget.method);
        return;
      }
    }
  }
LAB_0348c16c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

