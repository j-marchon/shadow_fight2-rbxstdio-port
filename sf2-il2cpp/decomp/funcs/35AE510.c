// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$.cctor @ RVA 0x35AE510

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *__this;
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o **ppSVar1;
  
  if ((DAT_04568e6c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    FUN_01bab630(&StringLiteral_9089);
    FUN_01bab630(&StringLiteral_9085);
    FUN_01bab630(&StringLiteral_10932);
    DAT_04568e6c = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->CNEFGALKDDI = StringLiteral_9089
  ;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields,
                     StringLiteral_9089);
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->CBOLBCCOBLA = StringLiteral_9085
  ;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->NKHHIFKCKBB =
       StringLiteral_10932;
  thunk_FUN_01c20e04();
  __this = (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TypeInfo);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>__ctor__);
  ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->JLLAGIOFBAI;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

