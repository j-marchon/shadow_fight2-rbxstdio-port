// Nekki.SF2.GUI.Map.MoveableMapPanel$$Open @ RVA 0x3257344

bool Nekki_SF2_GUI_Map_MoveableMapPanel__Open
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  
  bVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__IsClosed(__this,method);
  method_00 = extraout_x1;
  if (!bVar1) {
    t = (__this->fields).BGPAMNDALNP;
    if (t == (DG_Tweening_Sequence_o *)0x0) {
      return false;
    }
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    if ((!bVar1) || (method_00 = extraout_x1_00, (__this->fields).NEGADKBHGOM != 0)) {
      return false;
    }
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__INFGPIFPJGH(__this,method_00);
  return true;
}

