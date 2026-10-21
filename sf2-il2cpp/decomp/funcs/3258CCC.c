// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$.ctor @ RVA 0x3258CCC

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog___ctor
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ScrollDialogElement__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456717f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ScrollDialogElement>_TypeInfo);
    DAT_0456717f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ScrollDialogElement__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ScrollDialogElement>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ScrollDialogElement>__ctor__);
  (__this->fields).AALHBGHLAGO = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).AALHBGHLAGO,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

