// MEHKKHFBNLM$$MHEKOCOGKEE @ RVA 0x33926C4

void MEHKKHFBNLM__MHEKOCOGKEE(MEHKKHFBNLM_o *__this,float MJCBABPPIAD,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = MJCBABPPIAD;
    value.fields.x = MJCBABPPIAD;
    value.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

