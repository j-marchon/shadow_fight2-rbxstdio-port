// Nekki.SF2.GUI.SimpleScroll$$AddItemFromPool @ RVA 0x302F2D8

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
          (Nekki_SF2_GUI_SimpleScroll_o *__this,bool FKNKAMAGHAI,System_String_o *PMACBPAMPJA,
          MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  
  if ((DAT_04565ce4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                );
    DAT_04565ce4 = 1;
  }
  if (__this[1].klass != (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
    method_00 = 
    Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__;
    __this_00 = (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           __this[1].klass,(Il2CppObject *)PMACBPAMPJA,
                           (MethodInfo_2332EA4 *)
                           Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                          );
    if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0) {
      IKKAMAMLIKA = Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__DGADHCHFLKN
                              (__this_00,(OGNCMFBMBMB_o *)(__this->fields).HBNEMFAMCED,method_00);
      Nekki_SF2_GUI_SimpleScroll__AddItem(__this,IKKAMAMLIKA,FKNKAMAGHAI,method);
      return IKKAMAMLIKA;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

