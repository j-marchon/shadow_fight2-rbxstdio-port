// IJBEKFLAPNK$$.ctor @ RVA 0x3391828

void IJBEKFLAPNK___ctor(IJBEKFLAPNK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c22 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_TypeInfo)
    ;
    DAT_04567c22 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>__ctor__
            );
  (__this->fields).AIGFEBEBGCK =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__float___o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

