// Nekki.SF2.GUI.Menu.MenuScroll$$KBAFINNJPGC @ RVA 0x338BA7C

void Nekki_SF2_GUI_Menu_MenuScroll__KBAFINNJPGC
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,float HFBFLHCIGNB,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  UnityEngine_RectTransform_o *__this_00;
  MethodInfo *method_00;
  System_Action_bool__o *pSVar3;
  System_Action_o *pSVar4;
  System_Action_MenuScroll_OAPJJKKCANC__o *pSVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o value;
  
  fVar7 = (__this->fields).FDFCNIMNHFK;
  __this_00 = Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform(__this,method);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0348bbb4;
  iVar1 = (__this->fields).JDNKKGPNHPB;
  if (HFBFLHCIGNB <= 0.0) {
    HFBFLHCIGNB = 0.0;
  }
  fVar7 = ABS(fVar7);
  UVar8 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
  fVar6 = HFBFLHCIGNB;
  fVar2 = UVar8.fields.m_Width;
  if (iVar1 != 1) {
    fVar6 = UVar8.fields.m_Height;
    fVar2 = HFBFLHCIGNB;
  }
  value.fields.y = fVar6;
  value.fields.x = fVar2;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Menu_MenuScroll__EDCPAMPAOIC(__this,method_00);
  if (HFBFLHCIGNB == 0.0) {
    if ((__this->fields).CurScrollState == 2) {
      if (ABS(HFBFLHCIGNB) == fVar7) goto LAB_0348bb08;
    }
    else {
      pSVar3 = (__this->fields).NEEFCIAEAJG;
      (__this->fields).CurScrollState = 2;
      if (pSVar3 == (System_Action_bool__o *)0x0) goto LAB_0348bbb4;
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,0,(pSVar3->fields).super.super.method);
      pSVar4 = (__this->fields).DKPPMJCLNAB;
joined_r0x0348bb6c:
      if (pSVar4 == (System_Action_o *)0x0) goto LAB_0348bbb4;
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method);
    }
  }
  else if (ABS(HFBFLHCIGNB) == fVar7) {
LAB_0348bb08:
    if ((__this->fields).CurScrollState != 1) {
      pSVar3 = (__this->fields).NEEFCIAEAJG;
      (__this->fields).CurScrollState = 1;
      if (pSVar3 == (System_Action_bool__o *)0x0) goto LAB_0348bbb4;
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,1,(pSVar3->fields).super.super.method);
      pSVar4 = (__this->fields).LGFDPLGBHAM;
      goto joined_r0x0348bb6c;
    }
  }
  else {
    (__this->fields).CurScrollState = 0;
  }
  pSVar5 = (__this->fields).NPBCGNGDANF;
  if (pSVar5 != (System_Action_MenuScroll_OAPJJKKCANC__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,(__this->fields).CurScrollState,
               (pSVar5->fields).super.super.method);
    return;
  }
LAB_0348bbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

