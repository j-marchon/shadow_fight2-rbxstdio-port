// Nekki.SF2.GUI.TableView$$Update @ RVA 0x30DAE0C

void Nekki_SF2_GUI_TableView__Update(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Tween_o *t;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  
  if ((DAT_04566354 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566354 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  t = (__this->fields).OGBOMAHLDKN;
  method_00 = extraout_x1_00;
  if ((t == (DG_Tweening_Tween_o *)0x0) ||
     (bVar1 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0), method_00 = extraout_x1_01
     , !bVar1)) {
    pNVar2 = (__this->fields).IDIMFLMKDMD;
    if (pNVar2 == (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this->fields).PLICNBJGDFL = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
  }
  if ((__this->fields).EIOEGKDNAJK != false) {
    Nekki_SF2_GUI_TableView__ReloadData(__this,method_00);
    method_00 = extraout_x1_02;
  }
  if ((__this->fields).FNIBBMLOJIJ != false) {
    Nekki_SF2_GUI_TableView__BFHNEAPPOFM(__this,method_00);
    method_00 = extraout_x1_03;
  }
  if ((__this->fields).IsLockSelection != false) {
    return;
  }
  Nekki_SF2_GUI_TableView__DFKBPGLFOPK(__this,method_00);
  return;
}

