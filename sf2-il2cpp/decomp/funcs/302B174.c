// Nekki.SF2.GUI.SimpleScroll$$ScrollToNextItems @ RVA 0x302B174

void Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t MJBMLNKAPGC,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((*(char *)&(__this->fields).LNAPCDLIOOE == '\0') &&
     (bVar1 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling
                        (__this,(MethodInfo *)(ulong)(uint)MJBMLNKAPGC), bVar1)) {
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
    Nekki_SF2_GUI_SimpleScroll__JJNHMFIKFBM(__this,MJBMLNKAPGC,PNEIGGOFIOA,GAJONDLDKLI,method);
    return;
  }
  return;
}

