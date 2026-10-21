// RaidSwitchButtonsRoot$$FOOHBJNHOKK @ RVA 0x30251A0

void RaidSwitchButtonsRoot__FOOHBJNHOKK(RaidSwitchButtonsRoot_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rt;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o value;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar4 = (__this->fields).EJBDDOCDMEE.fields.x;
  fVar5 = (__this->fields).EJBDDOCDMEE.fields.y;
  fVar6 = (__this->fields).EJBDDOCDMEE.fields.z;
  fVar3 = Util__EGNDHMHOPCG((__this->fields)._minRatioScale,(__this->fields)._maxRatioScale,
                            (__this->fields)._minRatio_ForScale,(__this->fields)._maxRatio_ForScale,
                            (float)iVar1 / (float)iVar2,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    value.fields.z = fVar6 * fVar3;
    value.fields.y = fVar5 * fVar3;
    value.fields.x = fVar4 * fVar3;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
    rt = RaidSwitchButtonsRoot__LLCHPOHDNEK(__this,method_00);
    fVar3 = Util__EGNDHMHOPCG((__this->fields)._minRatioPosX,(__this->fields)._maxRatioPosX,
                              (__this->fields)._minRatio_ForPos,(__this->fields)._maxRatio_ForPos,
                              (float)iVar1 / (float)iVar2,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetAnchoredPositionX(rt,fVar3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

