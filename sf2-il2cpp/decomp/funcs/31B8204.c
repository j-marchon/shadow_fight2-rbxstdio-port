// Nekki.SF2.GUI.Map.MapButtonViewBase$$.ctor @ RVA 0x31B8204

void Nekki_SF2_GUI_Map_MapButtonViewBase___ctor
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidKey__o *pSVar1;
  System_Collections_Generic_List_RaidKey__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566bc6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RaidKey>_TypeInfo);
    DAT_04566bc6 = 1;
    method = extraout_x1;
  }
  (__this->fields)._hintMinWidth = 800;
  (__this->fields)._hintWidthSpace = 0x32;
  pSVar1 = (System_Collections_Generic_List_RaidKey__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<RaidKey>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<RaidKey>__ctor__);
  ppSVar2 = &(__this->fields).KFCOGLMHJGN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_RaidKey__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<RaidKey>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<RaidKey>__ctor__);
  ppSVar2 = &(__this->fields).GPBMNMEDLKB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  Nekki_SF2_GUI_Map_IRaidKeysView___ctor
            ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,(MethodInfo *)0x0);
  return;
}

