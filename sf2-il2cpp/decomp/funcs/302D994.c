// Nekki.SF2.GUI.SimpleScroll$$OnDrag @ RVA 0x302D994

void Nekki_SF2_GUI_SimpleScroll__OnDrag
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04565ccd & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565ccd = 1;
    method_00 = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE == '\0') {
    Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,(MethodInfo *)method_00);
    *(undefined1 *)&(__this->fields).KIANNGNDAFC = 1;
    *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_01);
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if (!bVar1) {
      UnityEngine_UI_ScrollRect__OnDrag
                ((UnityEngine_UI_ScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
    }
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
  }
  return;
}

