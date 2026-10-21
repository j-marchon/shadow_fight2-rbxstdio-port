// MGNPHCAAEIO$$IENLGCHOJAB @ RVA 0x33FBBB4

bool MGNPHCAAEIO__IENLGCHOJAB(System_String_o *JAKHFEHMBIC,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567fbc & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Object>__);
    FUN_01bab630(&StringLiteral_22448);
    DAT_04567fbc = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar2 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
  pSVar2 = System_String__Format
                     (StringLiteral_22448,(Il2CppObject *)pSVar2,(Il2CppObject *)JAKHFEHMBIC,
                      (MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)
      UnityEngine_ResourcesAndBundles__Load<object>
                (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<Object>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

