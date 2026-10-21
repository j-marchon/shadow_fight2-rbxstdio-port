// Nekki.SF2.GUI.Fight.EndFightContent$$CreateLine @ RVA 0x309BAC8

Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *
Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t COAIOPFEFHM,int64_t DCDLMCEEOCC,
          MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Func_long__string__o *CDBMJENDHFM;
  UnityEngine_GameObject_o *pUVar1;
  
                    /* try { // try from 0319bae4 to 0329bc97 has its CatchHandler @ 0319bae4
                       catch() { ... } // from try @ 0319bae4 with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c2fc with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c36c with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c444 with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c484 with catch @ 0319bae4 */
  if ((DAT_04566115 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_LHINFPOHDPH__);
    FUN_01bab630(&System_Func<long,_string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ExpAndMoneyLine>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566115 = 1;
  }
  pUVar1 = (__this->fields)._expAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar1,Method_UnityEngine_GameObject_GetComponent<ExpAndMoneyLine>__),
      __this_00 != (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *)0x0)) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      CDBMJENDHFM = (System_Func_long__string__o *)
                    thunk_FUN_01bda818(System_Func<long,_string>_TypeInfo);
      System_Func<long,_object>___ctor();
      Nekki_SF2_GUI_Fight_ExpAndMoneyLine__Init
                (__this_00,COAIOPFEFHM,DCDLMCEEOCC,CDBMJENDHFM,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

