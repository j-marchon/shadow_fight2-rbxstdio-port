// MEHKKHFBNLM$$FGGIFIGBPBI @ RVA 0x3392130

void MEHKKHFBNLM__FGGIFIGBPBI(MEHKKHFBNLM_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  MethodInfo *extraout_x1;
  double dVar1;
  
  if ((DAT_04567c2a & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567c2a = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    dVar1 = System_Math__Round((double)OOGPLJBADCD,2,1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,(float)dVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

