// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$.ctor @ RVA 0x300ED08

void Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML___ctor
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_bool____o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ba1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<bool[]>_TypeInfo);
    DAT_04565ba1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_bool____o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<bool[]>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<bool[]>__ctor__);
  (__this->fields).MFKHOLCJNKE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

