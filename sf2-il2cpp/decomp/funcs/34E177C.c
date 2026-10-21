// DJOGJDHNNJC$$.ctor @ RVA 0x34E177C

void DJOGJDHNNJC___ctor(DJOGJDHNNJC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568737 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_8153);
    FUN_01bab630(&StringLiteral_19271);
    FUN_01bab630(&StringLiteral_4337);
    FUN_01bab630(&StringLiteral_8280);
    FUN_01bab630(&StringLiteral_16995);
    FUN_01bab630(&StringLiteral_19324);
    FUN_01bab630(&StringLiteral_16996);
    DAT_04568737 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16995,StringLiteral_4337,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16996,StringLiteral_4337,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_19271,StringLiteral_8153,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_19324,StringLiteral_8280,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    (__this->fields).HBEMBIJGEJL =
         (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
    thunk_FUN_01c20e04(&__this->fields,__this_00);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

