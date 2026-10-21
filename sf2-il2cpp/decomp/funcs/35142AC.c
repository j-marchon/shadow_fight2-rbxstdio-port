// FEKEAPCCOOB$$.ctor @ RVA 0x35142AC

void FEKEAPCCOOB___ctor(FEKEAPCCOOB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *__this_00;
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o **ppSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456890f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_TypeInfo);
    DAT_0456890f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>__ctor__);
  ppSVar1 = &(__this->fields).IJLEELMHJNN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
  ppSVar2 = &(__this->fields).DPOMIJALCDD;
  *ppSVar2 = (System_Collections_Generic_Dictionary_int__string__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

