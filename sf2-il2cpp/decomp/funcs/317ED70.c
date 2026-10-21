// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$.ctor @ RVA 0x317ED70

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IILNJJJFGLL__o **ppSVar1;
  System_Action_DFHAHEOKHFA__o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Action_DFHAHEOKHFA__o *pSVar3;
  
  if ((DAT_045669ab & 1) == 0) {
    FUN_01bab630(&System_Action<DFHAHEOKHFA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo);
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_FEGNDIMALAC__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo);
    DAT_045669ab = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
  ppSVar1 = &(__this->fields).KNPKLNHJLEN;
  *ppSVar1 = (System_Collections_Generic_List_IILNJJJFGLL__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->_2).cctor_finished
      == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->static_fields
           ->__9__28_0;
  if (pSVar3 == (System_Action_DFHAHEOKHFA__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->_2).
        cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_DFHAHEOKHFA__o *)thunk_FUN_01bda818(System_Action<DFHAHEOKHFA>_TypeInfo)
    ;
    System_Action<Int32Enum>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->
               static_fields->__9__28_0;
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
  }
  ppSVar2 = &(__this->fields).FJKKBHOCDFI;
  *ppSVar2 = pSVar3;
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
  (__this->fields).PNIMHIAPIMJ = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

