// WideScreenController$$Update @ RVA 0x31EA48C

void WideScreenController__Update(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_Fields UVar5;
  
  fVar2 = (__this->fields).NBJELGMNNEJ.fields.x;
  fVar3 = (__this->fields).NBJELGMNNEJ.fields.y;
  pUVar1 = WideScreenController__MBEOLOBEACM(__this,method);
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032ea520;
  UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
  fVar2 = fVar2 - UVar4.fields.x;
  fVar3 = fVar3 - UVar4.fields.y;
  if (fVar2 * fVar2 + fVar3 * fVar3 <= 0.1) {
    method_01 = method_00;
    if ((__this->fields)._Flag != false) goto LAB_032ea4f4;
  }
  else {
    pUVar1 = WideScreenController__MBEOLOBEACM(__this,method_00);
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032ea520;
    UVar5 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    (__this->fields).NBJELGMNNEJ.fields = UVar5;
    method_01 = extraout_x1;
LAB_032ea4f4:
    (__this->fields)._Flag = false;
    WideScreenController__Run(__this,method_01);
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_032ea520:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

