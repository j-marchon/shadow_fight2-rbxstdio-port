// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$.ctor @ RVA 0x3538F48

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *__this_00;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ab2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_TypeInfo);
    DAT_04568ab2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>__ctor__);
  ppSVar1 = &(__this->fields).JILLAJIPGFH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView_o *)__this,(MethodInfo *)0x0);
  return;
}

