// TypeDefIndex 665
// Namespace: 
// public class RaidSwitchButtonsRoot : MonoBehaviour
// Fields:
//   private float _minRatio_ForPos; // 0x20
//   private float _maxRatio_ForPos; // 0x24
//   private float _minRatioPosX; // 0x28
//   private float _maxRatioPosX; // 0x2C
//   private float _minRatio_ForScale; // 0x30
//   private float _maxRatio_ForScale; // 0x34
//   private float _minRatioScale; // 0x38
//   private float _maxRatioScale; // 0x3C
//   private Vector3 EJBDDOCDMEE; // 0x40

// ===== public void .ctor()  [RVA 0x3025150]
// RaidSwitchButtonsRoot$$.ctor @ RVA 0x3025150

void RaidSwitchButtonsRoot___ctor(RaidSwitchButtonsRoot_o *__this,MethodInfo *method)

{
  (__this->fields)._minRatioPosX = -850.0;
  (__this->fields)._maxRatioPosX = -890.0;
  (__this->fields)._minRatio_ForPos = 1.3;
  (__this->fields)._maxRatio_ForPos = 1.5;
  (__this->fields)._minRatioScale = 0.75;
  (__this->fields)._maxRatioScale = 1.0;
  (__this->fields)._minRatio_ForScale = 1.3;
  (__this->fields)._maxRatio_ForScale = 1.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void Awake()  [RVA 0x302516C]
// RaidSwitchButtonsRoot$$Awake @ RVA 0x302516C

void RaidSwitchButtonsRoot__Awake(RaidSwitchButtonsRoot_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar1 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
    (__this->fields).EJBDDOCDMEE.fields.x = UVar1.fields.x;
    (__this->fields).EJBDDOCDMEE.fields.y = UVar1.fields.y;
    (__this->fields).EJBDDOCDMEE.fields.z = UVar1.fields.z;
    RaidSwitchButtonsRoot__FOOHBJNHOKK(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FOOHBJNHOKK()  [RVA 0x30251A0]
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


// ===== private RectTransform LLCHPOHDNEK()  [RVA 0x302525C]
// RaidSwitchButtonsRoot$$LLCHPOHDNEK @ RVA 0x302525C

UnityEngine_RectTransform_o *
RaidSwitchButtonsRoot__LLCHPOHDNEK(RaidSwitchButtonsRoot_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04565c88 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565c88 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}

