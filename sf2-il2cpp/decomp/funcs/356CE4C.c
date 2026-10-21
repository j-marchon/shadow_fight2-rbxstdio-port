// Nekki.SF2.GUI.Menu.MainMenu$$AONFAABDBBK @ RVA 0x356CE4C

void Nekki_SF2_GUI_Menu_MainMenu__AONFAABDBBK
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  UnityEngine_UI_LayoutElement_array *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_RectTransform_o *pUVar4;
  uint uVar5;
  float fVar6;
  
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this_00 = (__this->fields)._F2P_Spacers;
  if (__this_00 != (UnityEngine_UI_LayoutElement_array *)0x0) {
    fVar6 = src_GUI_Scripts_LerpParams__GPPKOIAJGGL
                      ((src_GUI_Scripts_LerpParams_o *)__this_00,(float)iVar2 / (float)iVar3,
                       (MethodInfo *)0x0);
    pUVar4 = (__this->fields)._dojoProgressBarPos;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      uVar1 = *(uint *)&pUVar4[1].klass;
      if (0 < (int)uVar1) {
        uVar5 = 0;
        do {
          if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          __this_01 = (&pUVar4[1].monitor)[(int)uVar5];
          if (__this_01 == (UnityEngine_Component_o *)0x0) goto LAB_0366cf2c;
          CMMIJCJOBBF = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
          Util__IHPDCBOFHPA(CMMIJCJOBBF,0.0 < fVar6,(MethodInfo *)0x0);
          if (0.0 < fVar6) {
            (*(code *)__this_01->klass[2]._1.castClass)
                      (fVar6,__this_01,__this_01->klass[2]._1.declaringType);
          }
          uVar1 = *(uint *)&pUVar4[1].klass;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar1);
      }
      return;
    }
  }
LAB_0366cf2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

