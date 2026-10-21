// Nekki.SF2.GUI.Profile.TricksController$$.ctor @ RVA 0x3155754

void Nekki_SF2_GUI_Profile_TricksController___ctor
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *__this_00;
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o **ppNVar1;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_01;
  System_Collections_Generic_List_KCLPNDAPADO__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
                    /* try { // try from 03255760 to 03355767 has its CatchHandler @ 03256644 */
                    /* try { // try from 03255768 to 03355783 has its CatchHandler @ 03256708 */
  if ((DAT_04566835 & 1) == 0) {
                    /* try { // try from 03255790 to 03355797 has its CatchHandler @ 03256650 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
                    /* try { // try from 032557a4 to 033557a7 has its CatchHandler @ 03256660 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_TypeInfo);
    DAT_04566835 = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnCellSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_KCLPNDAPADO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
                    /* try { // try from 032557e0 to 03355807 has its CatchHandler @ 032561e8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
  ppSVar2 = &(__this->fields).GLNEIGKMPDC;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Profile_ItemsController___ctor
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}

