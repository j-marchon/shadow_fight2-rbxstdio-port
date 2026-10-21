// TypeDefIndex 1674
// Namespace: 
// public static class GKOFFCMIOFC
// Fields:
//   private const string EMOBHEHGLLK = "Prefabs/Hints/{0}";
//   private static Dictionary<string, GameObject> AOOHGJHCEJJ; // 0x0

// ===== public static ButtonHintUI NLFGHCGIJIE()  [RVA 0x31CC798]
// GKOFFCMIOFC$$NLFGHCGIJIE @ RVA 0x31CC798

Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o * GKOFFCMIOFC__NLFGHCGIJIE(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *pNVar2;
  
  if ((DAT_04566c79 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ButtonHintUI>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15483/*"[HintCreator]: ButtonHintUI prefab is empty!"*/);
    FUN_01bab630(&StringLiteral_3615/*"ButtonHint"*/);
    DAT_04566c79 = 1;
  }
  if ((GKOFFCMIOFC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_15483/*"[HintCreator]: ButtonHintUI prefab is empty!"*/,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_Object_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)0x0,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,StringLiteral_3615/*"ButtonHint"*/,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<ButtonHintUI>__);
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static HintUI LDEODGHMPCG(MIBHAJBEMIK OHLKNCPBCBL, CHEKBFHAHDA HDAEJLFDNJC)  [RVA 0x31CC8F0]
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
    FUN_01bab630(&StringLiteral_7116/*"HintUI/Hint_"*/);
    FUN_01bab630(&StringLiteral_1024/*"(Clone)"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_15485/*"[HintCreator]: HintUI prefab is empty '{0}'!"*/);
    DAT_04566c7a = 1;
  }
  local_58.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_58.monitor = (void *)0xffffffffffffffff;
  local_48 = OHLKNCPBCBL;
  pSVar2 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
  System_String__Concat(StringLiteral_7116/*"HintUI/Hint_"*/,pSVar2,(MethodInfo *)0x0);
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
        UnityEngine_Debug__LogErrorFormat(StringLiteral_15485/*"[HintCreator]: HintUI prefab is empty '{0}'!"*/,args,(MethodInfo *)0x0);
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
      pSVar2 = System_String__Replace(pSVar2,StringLiteral_1024/*"(Clone)"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
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


// ===== private static void .cctor()  [RVA 0x31CCB80]
// GKOFFCMIOFC$$.cctor @ RVA 0x31CCB80

void GKOFFCMIOFC___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04566c7b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_GameObject>_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    DAT_04566c7b = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_GameObject>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_GameObject>__ctor__);
  GKOFFCMIOFC_TypeInfo->static_fields->AOOHGJHCEJJ =
       (System_Collections_Generic_Dictionary_string__GameObject__o *)__this;
  thunk_FUN_01c20e04(GKOFFCMIOFC_TypeInfo->static_fields,__this);
  return;
}


// ===== public static HintGroup EJKKHEHGNPN(BECNIAAJCFO MGKGAOFOPLA)  [RVA 0x31CCC18]
// GKOFFCMIOFC$$EJKKHEHGNPN @ RVA 0x31CCC18

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
GKOFFCMIOFC__EJKKHEHGNPN(int32_t MGKGAOFOPLA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *str1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *pNVar2;
  UnityEngine_Object_o *__this;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04566c7c & 1) == 0) {
    FUN_01bab630(&BECNIAAJCFO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintGroup>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15484/*"[HintCreator]: HintGroup prefab is empty!"*/);
    FUN_01bab630(&StringLiteral_7108/*"HintGroup_"*/);
    FUN_01bab630(&StringLiteral_7107/*"HintGroup"*/);
    DAT_04566c7c = 1;
  }
  local_48.klass = (System_Enum_c *)BECNIAAJCFO_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = MGKGAOFOPLA;
  str1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  System_String__Concat(StringLiteral_7108/*"HintGroup_"*/,str1,(MethodInfo *)0x0);
  if ((GKOFFCMIOFC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_15484/*"[HintCreator]: HintGroup prefab is empty!"*/,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
  }
  else {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)0x0,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Object__set_name(__this,StringLiteral_7107/*"HintGroup"*/,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<HintGroup>__);
  }
  return pNVar2;
}


// ===== private static GameObject PPIEDMKJCNF(string OHGNHOLIAEK)  [RVA 0x31CC8E8]
// GKOFFCMIOFC$$PPIEDMKJCNF @ RVA 0x31CC8E8

UnityEngine_GameObject_o * GKOFFCMIOFC__PPIEDMKJCNF(System_String_o *OHGNHOLIAEK,MethodInfo *method)

{
  return (UnityEngine_GameObject_o *)0x0;
}

