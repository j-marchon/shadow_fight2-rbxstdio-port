// Nekki.SF2.GUI.SimpleScroll$$OnBeginDrag @ RVA 0x302A2EC

void Nekki_SF2_GUI_SimpleScroll__OnBeginDrag
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar2;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04565cb5 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565cb5 = 1;
    method_00 = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,(MethodInfo *)method_00);
  *(undefined1 *)&(__this->fields).KIANNGNDAFC = 1;
  *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_01);
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
  if (!bVar1) {
    UnityEngine_UI_ScrollRect__OnBeginDrag
              ((UnityEngine_UI_ScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).FOOOBJNPNEH;
  *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0312a398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

