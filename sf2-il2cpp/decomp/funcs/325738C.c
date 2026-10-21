// Nekki.SF2.GUI.Map.MoveableMapPanel$$IsClosed @ RVA 0x325738C

bool Nekki_SF2_GUI_Map_MoveableMapPanel__IsClosed
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  float fVar2;
  
  fVar2 = Nekki_SF2_GUI_Map_MoveableMapPanel__KILOIOEILFL(__this,method);
  if (1199.0 <= fVar2) {
    t = (__this->fields).BGPAMNDALNP;
    if (t == (DG_Tweening_Sequence_o *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = DG_Tweening_TweenExtensions__IsPlaying((DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

