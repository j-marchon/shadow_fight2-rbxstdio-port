// Nekki.SF2.Core.Fights.Controls.Stick$$MCOFHDGMOBP @ RVA 0x30697AC

void Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,UnityEngine_Vector2_o FEDEPKJBDDM,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o value;
  ulong uVar2;
  
  fVar3 = FEDEPKJBDDM.fields.y;
  fVar1 = FEDEPKJBDDM.fields.x;
  uVar2 = (ulong)FEDEPKJBDDM.fields & 0xffffffff;
  fVar4 = (__this->fields).DANNCCNEPKF;
  if (DAT_04565f35 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565f35 = '\x01';
    method = extraout_x1;
  }
  fVar5 = fVar1 * fVar1 + fVar3 * fVar3;
  if (fVar4 * fVar4 < fVar5) {
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo,method);
    }
    fVar5 = SQRT(fVar5);
    uVar2 = (ulong)(uint)((fVar1 / fVar5) * fVar4);
    fVar3 = (fVar3 / fVar5) * fVar4;
  }
  __this_00 = (__this->fields)._selectedController;
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.x = (undefined4)uVar2;
    value.fields.y = fVar3;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

