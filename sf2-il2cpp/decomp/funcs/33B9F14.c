// Nekki.SF2.GUI.Profile.PerkSubItem$$Clear @ RVA 0x33B9F14

void Nekki_SF2_GUI_Profile_PerkSubItem__Clear
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  System_Action_T__o *pSVar1;
  MethodInfo *extraout_x1;
  JLGNBOILFLN_o *pJVar2;
  
  if ((DAT_04567d9b & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_EMDBNFHFCBF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_EOBOFFLGNDI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_GFDMDMPOFMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_PGOGHEIHHFI__);
    DAT_04567d9b = 1;
    method = extraout_x1;
  }
  pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
    pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method);
    System_Action<object>___ctor();
    OMLLDCIMLBB<object>__RemoveEventListener
              ((OMLLDCIMLBB_object__o *)pJVar2,0,pSVar1,
               Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
      OMLLDCIMLBB<object>__RemoveEventListener
                ((OMLLDCIMLBB_object__o *)pJVar2,1,pSVar1,
                 Method_OMLLDCIMLBB<object>_RemoveEventListener__);
      pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
      pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
        OMLLDCIMLBB<object>__RemoveEventListener
                  ((OMLLDCIMLBB_object__o *)pJVar2,2,pSVar1,
                   Method_OMLLDCIMLBB<object>_RemoveEventListener__);
        pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
        pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
          OMLLDCIMLBB<object>__RemoveEventListener
                    ((OMLLDCIMLBB_object__o *)pJVar2,3,pSVar1,
                     Method_OMLLDCIMLBB<object>_RemoveEventListener__);
          goto LAB_034ba094;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_034ba094:
  (__this->fields)._Position = 0;
  return;
}

