// BackKeyManager$$get_Instance @ RVA 0x31AC628

BackKeyManager_o * BackKeyManager__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  MethodInfo *method_00;
  BackKeyManager_o *pBVar2;
  
  if ((DAT_04566b4d & 1) == 0) {
    FUN_01bab630(&BackKeyManager_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<BackKeyManager>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15427);
    DAT_04566b4d = 1;
  }
  pBVar2 = BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pBVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15427,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pBVar2 = (BackKeyManager_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<BackKeyManager>__);
      BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK = pBVar2;
      thunk_FUN_01c20e04(BackKeyManager_TypeInfo->static_fields,pBVar2);
      pBVar2 = BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pBVar2 != (BackKeyManager_o *)0x0) {
        BackKeyManager__GIENGNEGHPJ(pBVar2,method_00);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
        goto LAB_032ac74c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_032ac74c:
  return BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK;
}

