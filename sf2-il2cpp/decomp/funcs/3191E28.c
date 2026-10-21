// JFDNJGDAMHJ$$.ctor @ RVA 0x3191E28

void JFDNJGDAMHJ___ctor(JFDNJGDAMHJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_float__o *__this_00;
  System_Collections_Generic_List_float__o **ppSVar1;
  
  if ((DAT_04566a47 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<float>_TypeInfo);
    FUN_01bab630(&StringLiteral_14694);
    DAT_04566a47 = 1;
  }
  (__this->fields).NAKOKMPECML = StringLiteral_14694;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<float>_TypeInfo);
  System_Collections_Generic_List<float>___ctor
            (__this_00,Method_System_Collections_Generic_List<float>__ctor__);
  ppSVar1 = &(__this->fields).PEMHPNLDPHD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

