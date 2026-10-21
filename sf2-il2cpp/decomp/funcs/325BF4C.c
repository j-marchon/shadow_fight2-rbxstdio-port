// ILNFICAMFCI$$.cctor @ RVA 0x325BF4C

void ILNFICAMFCI___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *__this;
  
  if ((DAT_0456718c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_TypeInfo);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&StringLiteral_16766);
    FUN_01bab630(&StringLiteral_19571);
    FUN_01bab630(&StringLiteral_17995);
    FUN_01bab630(&StringLiteral_16925);
    FUN_01bab630(&StringLiteral_19521);
    FUN_01bab630(&StringLiteral_20229);
    DAT_0456718c = 1;
  }
  __this = (System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>__ctor__);
  if (__this != (System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_19571,
               0x12,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_19521,6
               ,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_20229,
               0x17,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_16766,
               0x18,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_16925,
               0x19,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_17995,
               0x13,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    ILNFICAMFCI_TypeInfo->static_fields->OOKCNDCNADD = __this;
    thunk_FUN_01c20e04(ILNFICAMFCI_TypeInfo->static_fields,__this);
    ILNFICAMFCI_TypeInfo->static_fields->BNDFDNCBEFI = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

