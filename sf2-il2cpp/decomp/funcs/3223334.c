// Nekki.SF2.GUI.Pvp.PhasePerks$$.ctor @ RVA 0x3223334

void Nekki_SF2_GUI_Pvp_PhasePerks___ctor(Nekki_SF2_GUI_Pvp_PhasePerks_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PerkItem__o *__this_00;
  System_Collections_Generic_List_PerkItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f56 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkItem>_TypeInfo);
    DAT_04566f56 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_PerkItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkItem>__ctor__);
  ppSVar1 = &(__this->fields)._Perks;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Pvp_PhaseItem___ctor((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  return;
}

