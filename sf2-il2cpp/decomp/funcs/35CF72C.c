// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$.ctor @ RVA 0x35CF72C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_00;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fcd & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_TypeInfo
                );
    DAT_04568fcd = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>__ctor__
            );
  ppSVar1 = &(__this->fields).PEIHFKHLGMO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

