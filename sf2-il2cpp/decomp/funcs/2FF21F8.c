// HintButton$$Awake @ RVA 0x2FF21F8

void HintButton__Awake(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_Transform_o *pUVar2;
  
  if ((DAT_04565a72 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a72 = 1;
  }
  SFButton__Awake((SFButton_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._EnableClickAnimation = true;
  pUVar2 = (__this->fields)._HintsParent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._HintsParent = pUVar2;
    thunk_FUN_01c20e04(&(__this->fields)._HintsParent,pUVar2);
    method_00 = extraout_x1_00;
  }
  HintButton__GMGNDMJDBAL(__this,method_00);
  HintButton__ADOIJKNGHON(__this,method_01);
  bVar1 = HintButton__LMONINNGKAP(__this,method_02);
  if (bVar1) {
    HintButton__AIJPMKIMPPN(__this,method_03);
    return;
  }
  return;
}

