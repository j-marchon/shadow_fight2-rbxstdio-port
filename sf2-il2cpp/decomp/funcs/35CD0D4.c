// Nekki.SF2.GUI.BaseScrollContent$$GetDistanceToCenter @ RVA 0x35CD0D4

float Nekki_SF2_GUI_BaseScrollContent__GetDistanceToCenter
                (Nekki_SF2_GUI_BaseScrollContent_o *__this,
                Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o UVar5;
  
  if ((DAT_04568fb0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fb0 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (__this->fields)._Center_k__BackingField;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_Transform__get_position
                        ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      if ((IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UVar5 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        if (DAT_04560276 == '\0') {
          FUN_01bab630(UVar5.fields.x,UVar5.fields.y,UVar5.fields.z,&System_Math_TypeInfo);
          DAT_04560276 = '\x01';
        }
        fVar3 = UVar4.fields.x - UVar5.fields.x;
        fVar2 = UVar4.fields.y - UVar5.fields.y;
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        return SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}

