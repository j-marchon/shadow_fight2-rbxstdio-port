// Nekki.SF2.GUI.SimpleScroll$$OGKNNMEDGGO @ RVA 0x302A57C

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__OGKNNMEDGGO
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o FGKNNDKHOGB,
          UnityEngine_Vector2_o KFCJCEIBICJ,UnityEngine_Vector2_o IADAOAEBFEB,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float val2;
  UnityEngine_Vector2_o UVar2;
  
  if ((DAT_04565cba & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565cba = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.m_Vertical == false) {
    if ((__this->fields).super.m_Horizontal == false) {
      val2 = 0.0;
      fVar1 = 0.0;
    }
    else {
      fVar1 = FGKNNDKHOGB.fields.x - KFCJCEIBICJ.fields.x * IADAOAEBFEB.fields.x;
      val2 = FGKNNDKHOGB.fields.x + KFCJCEIBICJ.fields.x * (1.0 - IADAOAEBFEB.fields.x);
    }
  }
  else {
    fVar1 = FGKNNDKHOGB.fields.y - KFCJCEIBICJ.fields.y * IADAOAEBFEB.fields.y;
    val2 = FGKNNDKHOGB.fields.y + KFCJCEIBICJ.fields.y * (1.0 - IADAOAEBFEB.fields.y);
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  UVar2.fields.x = System_Math__Min(fVar1,val2,(MethodInfo *)0x0);
  fVar1 = System_Math__Max(fVar1,val2,(MethodInfo *)0x0);
  UVar2.fields.y = fVar1;
  return (UnityEngine_Vector2_o)UVar2.fields;
}

