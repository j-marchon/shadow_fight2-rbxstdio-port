// PJNPKJMMNDI$$.ctor @ RVA 0x321A8EC

void PJNPKJMMNDI___ctor(PJNPKJMMNDI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566efc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JKHPOKJIMHC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JKHPOKJIMHC>_TypeInfo);
    DAT_04566efc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JKHPOKJIMHC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<JKHPOKJIMHC>__ctor__);
  (__this->fields).KDIMDBHMBEM = (System_Collections_Generic_List_JKHPOKJIMHC__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

