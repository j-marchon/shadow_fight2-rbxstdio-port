// Nekki.SF2.GUI.TextPic.ABOHOFBMBHP$$.ctor @ RVA 0x30B4E40

void Nekki_SF2_GUI_TextPic_ABOHOFBMBHP___ctor
               (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Glyph__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456621c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Glyph>_TypeInfo);
    DAT_0456621c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Glyph__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Glyph>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Glyph>__ctor__);
  (__this->fields).CNFAHCPFONL = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

