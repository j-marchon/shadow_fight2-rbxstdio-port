// HEFOANCOHDC$$.cctor @ RVA 0x3422434

void HEFOANCOHDC___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *__this;
  
  if ((DAT_045680e6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_TypeInfo);
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&StringLiteral_21606);
    FUN_01bab630(&StringLiteral_18991);
    FUN_01bab630(&StringLiteral_18299);
    FUN_01bab630(&StringLiteral_16937);
    DAT_045680e6 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>__ctor__);
  if (__this != (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_18299,0
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_16937,1
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_21606,2
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_18991,3
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    HEFOANCOHDC_TypeInfo->static_fields->MHONJANODKB = __this;
    thunk_FUN_01c20e04(HEFOANCOHDC_TypeInfo->static_fields,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

