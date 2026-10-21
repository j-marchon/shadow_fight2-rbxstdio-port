// Nekki.SF2.GUI.Dialogs.BaseDialog$$OFGMFNANEGD @ RVA 0x33ADF64

/* WARNING: Removing unreachable block (ram,0x034ae00c) */

float Nekki_SF2_GUI_Dialogs_BaseDialog__OFGMFNANEGD
                (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_04567d2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d2b = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    fVar2 = 272.0;
  }
  else {
    __this_00 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO(__this,method_00);
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar4 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar3 = UVar4.fields.m_Height * 0.5 + 60.0;
    fVar2 = 272.0;
    if (272.0 <= fVar3) {
      fVar2 = fVar3;
    }
  }
  return fVar2;
}

