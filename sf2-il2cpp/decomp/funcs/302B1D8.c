// Nekki.SF2.GUI.SimpleScroll$$CanInvokeScrolling @ RVA 0x302B1D8

bool Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((DAT_04565cd8 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565cd8 = 1;
  }
  if ((*(char *)&(__this->fields).KIANNGNDAFC != '\0') ||
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                         Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__), bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_00);
    bVar1 = !bVar1;
  }
  return bVar1;
}

