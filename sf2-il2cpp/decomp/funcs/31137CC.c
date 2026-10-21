// FJIFBJMMKHG$$.ctor @ RVA 0x31137CC

void FJIFBJMMKHG___ctor(FJIFBJMMKHG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_int__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456659a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_0456659a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar1 = &(__this->fields)._FJCAMFHOJBB_k__BackingField;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields)._DIDFGKLCHLK_k__BackingField = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

