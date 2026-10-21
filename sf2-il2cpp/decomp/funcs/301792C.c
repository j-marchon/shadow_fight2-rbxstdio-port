// ECENNHNBAME.DNGAEDAAIJE$$.ctor @ RVA 0x301792C

void ECENNHNBAME_DNGAEDAAIJE___ctor(ECENNHNBAME_DNGAEDAAIJE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c00 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04565c00 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  (__this->fields).PCGACGNHJHF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

