// GNJBJKEJEGC$$.ctor @ RVA 0x3004F18

void GNJBJKEJEGC___ctor(GNJBJKEJEGC_o *__this,float PHBEFCPEHCD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b46 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    DAT_04565b46 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
  (__this->fields).CMHJMGKMCCI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).DCBEAHGEHKL = PHBEFCPEHCD;
  return;
}

