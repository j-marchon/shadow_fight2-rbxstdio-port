// Nekki.SF2.GUI.Map.DifficultyPanel$$.cctor @ RVA 0x30F21A8

void Nekki_SF2_GUI_Map_DifficultyPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this;
  
  if ((DAT_04566431 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    DAT_04566431 = 1;
  }
  __this = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
  Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields,__this);
  return;
}

