// Nekki.SF2.GUI.SimpleScroll$$Delete @ RVA 0x302E6E4

void Nekki_SF2_GUI_SimpleScroll__Delete
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04565cd4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    DAT_04565cd4 = 1;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<BaseScrollItem>_Remove__;
    System_Collections_Generic_List<object>__Remove
              (__this_00,(Il2CppObject *)IKKAMAMLIKA,
               (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<BaseScrollItem>_Remove__
              );
    Nekki_SF2_GUI_SimpleScroll__CJANIMOCLJJ(__this,IKKAMAMLIKA,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

