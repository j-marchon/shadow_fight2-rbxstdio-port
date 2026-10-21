// Nekki.SF2.GUI.TableViewScroll$$SetNormalizedPosition @ RVA 0x31110EC

void Nekki_SF2_GUI_TableViewScroll__SetNormalizedPosition
               (Nekki_SF2_GUI_TableViewScroll_o *__this,float AFGBOBIMHOJ,MethodInfo *method)

{
  if ((__this->fields).HBFGPJPFNBG == 1) {
    Nekki_SF2_GUI_SFScrollRect__set_horizontalNormalizedPosition
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this,AFGBOBIMHOJ,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__set_verticalNormalizedPosition
            ((Nekki_SF2_GUI_SFScrollRect_o *)__this,AFGBOBIMHOJ,(MethodInfo *)0x0);
  return;
}

