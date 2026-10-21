// Nekki.SF2.GUI.TextPic$$HOBJFEPMIGH @ RVA 0x30B8404

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_TextPic__HOBJFEPMIGH(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  int32_t iVar2;
  uint uVar3;
  System_Action_o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *pIVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  
  if ((DAT_04566208 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    DAT_04566208 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NFECDKAEFJL;
  if ((__this_00 != (System_Action_o *)0x0) &&
     (pIVar5 = (__this_00->fields).super.super.m_target, pIVar5 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar5[1].monitor < 1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b8544 with catch @ 031b8554
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b8500 with catch @ 031b8558
                        */
      return false;
    }
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                      ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)__this_00,method);
    if (iVar2 == 0) {
      return false;
    }
    Nekki_SF2_GUI_TextPic__LKJOHANKEDP(__this,method_00);
    fVar10 = *(float *)((long)&(__this->fields)._CECMNNLFJKO_k__BackingField + 4);
    fVar11 = (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z;
                    /* try { // try from 031b8478 to 032b84b7 has its CatchHandler @ 031b8478
                       catch() { ... } // from try @ 031b8478 with catch @ 031b8478
                       catch() { ... } // from try @ 031b854c with catch @ 031b8478
                       catch() { ... } // from try @ 031b8588 with catch @ 031b8478
                       catch() { ... } // from try @ 031b8658 with catch @ 031b8478 */
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar12 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar13 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        uVar3 = UnityEngine_UI_Text__get_alignment
                          ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b84b8 to 032b84bf has its CatchHandler @ 031b8550 */
        if (uVar3 < 9) {
          fVar8 = UVar13.fields.m_Height * 0.5;
          uVar3 = 1 << (ulong)(uVar3 & 0x1f);
          fVar9 = UVar12.fields.m_YMin + UVar12.fields.m_Height * 0.5;
          fVar6 = fVar9 + fVar8;
          fVar7 = fVar10 + fVar11;
          if ((uVar3 & 7) == 0) {
            fVar9 = fVar9 - fVar8;
            fVar10 = fVar10 - fVar11;
            if ((uVar3 & 0x38) == 0) {
              fVar9 = fVar9 - fVar10;
            }
            else {
                    /* try { // try from 031b8500 to 032b8533 has its CatchHandler @ 031b8558 */
              fVar9 = ((fVar6 - fVar7) - (fVar10 - fVar9)) * 0.5;
            }
          }
          else {
            fVar9 = fVar6 - fVar7;
          }
        }
        else {
          fVar9 = 0.0;
        }
        if (ABS(fVar9) <= 0.01) {
          return false;
        }
        auVar1._4_8_ = 0;
        auVar1._0_4_ = fVar9;
                    /* try { // try from 031b8544 to 032b8547 has its CatchHandler @ 031b8554 */
                    /* try { // try from 031b8548 to 032b854b has its CatchHandler @ 031b854c */
        OMANDMDCGMF__CKOPLFDLFPL
                  ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                   (UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
        return true;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b8548 with catch @ 031b854c
                       try { // try from 031b854c to 032b856f has its CatchHandler @ 031b8478 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b84b8 with catch @ 031b8550
                        */
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b8570 to 032b8587 has its CatchHandler @ 031b8650 */
  FUN_01bab8c8();
}

