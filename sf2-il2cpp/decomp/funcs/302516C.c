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

