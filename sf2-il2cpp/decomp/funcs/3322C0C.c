// IAGNPGHOAIC$$BKALFJAFEOE @ RVA 0x3322C0C

bool IAGNPGHOAIC__BKALFJAFEOE(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456785a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456785a = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).IMJGDBPFCLJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

