// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsMoving @ RVA 0x32572F8

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsMoving
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).BGPAMNDALNP;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

