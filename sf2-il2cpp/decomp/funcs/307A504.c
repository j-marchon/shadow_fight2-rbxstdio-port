// ProgressBarMask$$OLOBIPCHMCC @ RVA 0x307A504

void ProgressBarMask__OLOBIPCHMCC(ProgressBarMask_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o value;
  
  __this_00 = (__this->fields)._mask;
  fVar2 = (__this->fields).HPFDLDBKGPB.fields.m_Width;
  fVar1 = ProgressBarBase__KHNHBNKJPAE((ProgressBarBase_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    value.fields.y = (__this->fields).HPFDLDBKGPB.fields.m_Height;
    value.fields.x = fVar2 * fVar1;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

