// KBECBDOOHCO$$MHEKOCOGKEE @ RVA 0x358F22C

void KBECBDOOHCO__MHEKOCOGKEE(KBECBDOOHCO_o *__this,float HGPGMCGOOLL,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = HGPGMCGOOLL;
    value.fields.x = HGPGMCGOOLL;
    value.fields.z = HGPGMCGOOLL;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

