// Nekki.SF2.GUI.TableView$$get_IsMoving @ RVA 0x30DA9E8

bool Nekki_SF2_GUI_TableView__get_IsMoving(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Tween_o *t;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  float fVar3;
  float fVar4;
  
  t = (__this->fields).OGBOMAHLDKN;
  if ((t != (DG_Tweening_Tween_o *)0x0) &&
     (bVar1 = DG_Tweening_TweenExtensions__IsPlaying(t,(MethodInfo *)0x0), bVar1)) {
    return true;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    fVar3 = (pNVar2->fields).super.CDHNBOKGCCN.fields.x;
    fVar4 = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
    bVar1 = Util__KEJBDHBDGNI(fVar3 * fVar3 + fVar4 * fVar4,1e-10,(MethodInfo *)0x0);
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

