// KDKLBPLOHJL$$.ctor @ RVA 0x34FA648

void KDKLBPLOHJL___ctor(KDKLBPLOHJL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_IEnumerable_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456881a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456881a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields)._HLDLEFHAHCE_k__BackingField;
  *ppSVar1 = (System_Collections_Generic_IEnumerable_string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

