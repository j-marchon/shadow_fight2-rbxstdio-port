// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsClosing @ RVA 0x32573D8

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsClosing
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).BGPAMNDALNP;
  bVar1 = false;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = (__this->fields).NEGADKBHGOM == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

