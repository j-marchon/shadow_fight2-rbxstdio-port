// MMDDDDFHOLG$$.cctor @ RVA 0x336228C

void MMDDDDFHOLG___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_string__int__o **ppSVar1;
  
  if ((DAT_04567a8c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_TypeInfo
                );
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a8c = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,
             Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>__ctor__
            );
  MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN =
       (System_Collections_Generic_Dictionary_string__List_MMDDDDFHOLG_DOCBHLNBECF___o *)__this;
  thunk_FUN_01c20e04(MMDDDDFHOLG_TypeInfo->static_fields,__this);
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  ppSVar1 = &MMDDDDFHOLG_TypeInfo->static_fields->HIHPADFEPFO;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}

