// GKOFFCMIOFC$$LDEODGHMPCG @ RVA 0x31CC8F0

Nekki_SF2_GUI_Common_Hints_HintUI_o *
GKOFFCMIOFC__LDEODGHMPCG(int32_t OHLKNCPBCBL,int32_t HDAEJLFDNJC,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *__this_00;
  undefined8 uVar5;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04566c7a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintUI>__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_7116);
    FUN_01bab630(&StringLiteral_1024);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_15485);
    DAT_04566c7a = 1;
  }
  local_58.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_58.monitor = (void *)0xffffffffffffffff;
  local_48 = OHLKNCPBCBL;
  pSVar2 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
  System_String__Concat(StringLiteral_7116,pSVar2,(MethodInfo *)0x0);
  if ((GKOFFCMIOFC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_58.klass = (System_Enum_c *)CONCAT44(local_58.klass._4_4_,OHLKNCPBCBL);
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_58);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar3;
        thunk_FUN_01c20e04(args->m_Items,pIVar3);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_15485,args,(MethodInfo *)0x0);
        return (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
  else {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)0x0,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((__this != (UnityEngine_Object_o *)0x0) &&
       (pSVar2 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0),
       pSVar2 != (System_String_o *)0x0)) {
      pSVar2 = System_String__Replace(pSVar2,StringLiteral_1024,StringLiteral_1,(MethodInfo *)0x0);
      UnityEngine_Object__set_name(__this,pSVar2,(MethodInfo *)0x0);
      __this_00 = (Nekki_SF2_GUI_Common_Hints_HintUI_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            ((UnityEngine_GameObject_o *)__this,
                             Method_UnityEngine_GameObject_GetComponent<HintUI>__);
      if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintUI__set_Style(__this_00,HDAEJLFDNJC,(MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

