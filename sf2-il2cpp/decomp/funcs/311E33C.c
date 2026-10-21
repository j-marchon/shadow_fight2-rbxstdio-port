// Nekki.SF2.GUI.Profile.SealsController$$.ctor @ RVA 0x311E33C

void Nekki_SF2_GUI_Profile_SealsController___ctor
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_00;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o **ppNVar1;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_0456660a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    DAT_0456660a = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnCellSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  ppSVar2 = &(__this->fields).BMEJJFBFFIH;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Profile_ItemsController___ctor
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}

