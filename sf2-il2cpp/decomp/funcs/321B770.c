// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$.ctor @ RVA 0x321B770

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell___ctor
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PerkUI__o *__this_00;
  System_Collections_Generic_List_PerkUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkUI>_TypeInfo);
    DAT_04566f04 = 1;
    method = extraout_x1;
  }
  (__this->fields)._hintOffset.fields = (UnityEngine_Vector2_Fields)0xc1c8000000000000;
  __this_00 = (System_Collections_Generic_List_PerkUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkUI>__ctor__);
  ppSVar1 = &(__this->fields).AHJLOHFIEGJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

