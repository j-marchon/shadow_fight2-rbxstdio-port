// GHACLGGJIKK$$NKLGCNHLBAF @ RVA 0x315BFA4

void GHACLGGJIKK__NKLGCNHLBAF
               (GHACLGGJIKK_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Converter_string__string__o **ppSVar1;
  GHACLGGJIKK_CDAKEOFFIAJ_o *pGVar2;
  System_Converter_string__string__o *converter;
  
  if ((DAT_04566869 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_ConvertAll<string,_string>__);
    FUN_01bab630(&System_Converter<string,_string>_TypeInfo);
    FUN_01bab630(&Method_GHACLGGJIKK_<>c_JBCLNEBFCBA__);
    FUN_01bab630(&GHACLGGJIKK_<>c_TypeInfo);
    DAT_04566869 = 1;
  }
  if ((__this->fields).ECNOLIAHAJB != false) {
    if ((GHACLGGJIKK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    converter = GHACLGGJIKK_<>c_TypeInfo->static_fields->__9__3_0;
    if (converter == (System_Converter_string__string__o *)0x0) {
      if ((GHACLGGJIKK_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      converter = (System_Converter_string__string__o *)
                  thunk_FUN_01bda818(System_Converter<string,_string>_TypeInfo);
      System_Converter<object,_object>___ctor();
      ppSVar1 = &GHACLGGJIKK_<>c_TypeInfo->static_fields->__9__3_0;
      *ppSVar1 = converter;
      thunk_FUN_01c20e04(ppSVar1,converter);
    }
    OPAEPDIIOEB = (System_String_array *)
                  System_Array__ConvertAll<object,_object>
                            ((System_Object_array *)OPAEPDIIOEB,
                             (System_Converter_TInput__TOutput__o *)converter,
                             Method_System_Array_ConvertAll<string,_string>__);
  }
  pGVar2 = (__this->fields).NAPDMLAGBJC;
  if (pGVar2 != (GHACLGGJIKK_CDAKEOFFIAJ_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0325c0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pGVar2->fields).super.super.invoke_impl)
              ((pGVar2->fields).super.super.method_code,OPAEPDIIOEB,
               (pGVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

