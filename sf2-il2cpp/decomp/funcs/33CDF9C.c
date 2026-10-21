// GHOPMMBKGMB$$.ctor @ RVA 0x33CDF9C

void GHOPMMBKGMB___ctor(GHOPMMBKGMB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e3b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TypeInfo);
    DAT_04567e3b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>__ctor__);
  (__this->fields).HGCIIJGGNKN =
       (System_Collections_Generic_Dictionary_string__GLDKIFOLMAO__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

