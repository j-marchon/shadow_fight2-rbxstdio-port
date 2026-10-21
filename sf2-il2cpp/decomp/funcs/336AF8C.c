// MDFGJKBMECA.OJOAPHBHAFL$$AGHAGAMDNPE @ RVA 0x336AF8C

void MDFGJKBMECA_OJOAPHBHAFL__AGHAGAMDNPE(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567ae3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    FUN_01bab630(&StringLiteral_16898);
    DAT_04567ae3 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log(StringLiteral_16898,(MethodInfo *)0x0);
  MDFGJKBMECA_OJOAPHBHAFL__KIJILFAEKEL(__this,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).INCJHPNJFFA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

