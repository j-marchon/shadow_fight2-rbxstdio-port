// Nekki.SF2.GUI.SimpleScroll.LIOIEDNIMLD$$.ctor @ RVA 0x302EFD8

void Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD___ctor
               (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD,System_String_o *PMACBPAMPJA,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o **ppNVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565ce9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<BaseScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<BaseScrollItem>_TypeInfo);
    DAT_04565ce9 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<BaseScrollItem>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<BaseScrollItem>__ctor__);
  (__this->fields).GNEMEBABBFF = (System_Collections_Generic_HashSet_BaseScrollItem__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields)._CIGDAHHAALG_k__BackingField;
  *ppNVar1 = DKIDCBPNMPD;
  thunk_FUN_01c20e04(ppNVar1,DKIDCBPNMPD);
  ppSVar2 = &(__this->fields)._LDCCMOFCEAN_k__BackingField;
  *ppSVar2 = PMACBPAMPJA;
  thunk_FUN_01c20e04(ppSVar2,PMACBPAMPJA);
  return;
}

