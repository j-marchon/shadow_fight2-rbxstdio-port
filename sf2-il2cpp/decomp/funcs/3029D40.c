// Nekki.SF2.GUI.SimpleScroll$$Contains @ RVA 0x3029D40

bool Nekki_SF2_GUI_SimpleScroll__Contains
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04565cb3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Contains__);
    DAT_04565cb3 = 1;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

