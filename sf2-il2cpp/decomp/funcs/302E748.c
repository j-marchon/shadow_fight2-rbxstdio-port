// Nekki.SF2.GUI.SimpleScroll$$CJANIMOCLJJ @ RVA 0x302E748

void Nekki_SF2_GUI_SimpleScroll__CJANIMOCLJJ
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  long lVar1;
  
  if ((DAT_04565cdf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cdf = 1;
  }
  if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
    method_00 = (IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.method;
    (*(IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.methodPtr)(IKKAMAMLIKA,0);
    if ((__this->fields).HBNEMFAMCED ==
        (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_0312e828;
      UnityEngine_Transform__SetParent(__this_01,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    else {
      __this_00 = Nekki_SF2_GUI_SimpleScroll__GIMFBOCFNBN(__this,IKKAMAMLIKA,method_00);
      if (__this_00 == (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0) goto LAB_0312e828;
      Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__KIANJPCPEGE
                (__this_00,IKKAMAMLIKA,(OGNCMFBMBMB_o *)(__this->fields).HBNEMFAMCED,in_x3);
    }
    lVar1 = *(long *)&(__this->fields)._snapEase;
    *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 1;
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) < 1) {
        *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 1;
      }
      return;
    }
  }
LAB_0312e828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

