// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$.ctor @ RVA 0x345016C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,MethodInfo *method)

{
  System_Action_CPAPMBPHEAB__o **ppSVar1;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o **ppSVar2;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *__this_01;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o **ppSVar3;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *__this_02;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_CPAPMBPHEAB__o *pSVar5;
  
  if ((DAT_045682a0 & 1) == 0) {
    FUN_01bab630(&System_Action<CPAPMBPHEAB>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_EFCJODPJKJE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo);
    DAT_045682a0 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->static_fields->
           __9__53_0;
  if (pSVar5 == (System_Action_CPAPMBPHEAB__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->_2).cctor_finished == 0)
    {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_CPAPMBPHEAB__o *)thunk_FUN_01bda818(System_Action<CPAPMBPHEAB>_TypeInfo)
    ;
    System_Action<Int32Enum>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->static_fields->
               __9__53_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
    ppSVar1 = &(__this->fields).MFOGEDBHCHA;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    __this_00 = (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>__ctor__);
    ppSVar2 = &(__this->fields).NOLPECJJJPE;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    __this_01 = (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>__ctor__);
    ppSVar3 = &(__this->fields).ANCLLFGPFAF;
    *ppSVar3 = __this_01;
    thunk_FUN_01c20e04(ppSVar3,__this_01);
    __this_02 = (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>__ctor__);
    ppSVar4 = &(__this->fields).LCJAAPPDFJJ;
    *ppSVar4 = __this_02;
    thunk_FUN_01c20e04(ppSVar4,__this_02);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

