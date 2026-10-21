// KAFCPHCBLPL$$.ctor @ RVA 0x339C524

void KAFCPHCBLPL___ctor(KAFCPHCBLPL_o *__this,
                       System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
                       MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_04567c84 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    DAT_04567c84 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FMGLHJDODPA = false;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).JAHFGPMFLGN.fields = CVar1;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    AHEFOIOKDOK = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
               Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  }
  (__this->fields).KDIMDBHMBEM = AHEFOIOKDOK;
  thunk_FUN_01c20e04(&__this->fields,AHEFOIOKDOK);
  return;
}

