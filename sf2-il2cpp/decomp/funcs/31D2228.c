// IIHMKHNLJKD$$.ctor @ RVA 0x31D2228

void IIHMKHNLJKD___ctor(IIHMKHNLJKD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cb3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TypeInfo);
    DAT_04566cb3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>__ctor__);
  (__this->fields).FODILKIIDCE =
       (System_Collections_Generic_Dictionary_string__IIHMKHNLJKD_MGNPEFBKION__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

