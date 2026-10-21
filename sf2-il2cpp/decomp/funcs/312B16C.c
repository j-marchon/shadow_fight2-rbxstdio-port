// ABMPAOFAAEI$$.ctor @ RVA 0x312B16C

void ABMPAOFAAEI___ctor(ABMPAOFAAEI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04566691 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_TypeInfo);
    DAT_04566691 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>__ctor__);
  (__this->fields).OKGFMGOALJF =
       (System_Collections_Generic_Dictionary_string__ABMPAOFAAEI__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}

