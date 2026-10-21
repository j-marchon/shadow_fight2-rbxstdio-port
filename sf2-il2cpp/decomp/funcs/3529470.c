// Nekki.SF2.GUI.DebugModules.ScreenDebug$$CLNAOMIIBLH @ RVA 0x3529470

void Nekki_SF2_GUI_DebugModules_ScreenDebug__CLNAOMIIBLH
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  
  if ((DAT_04568a0c & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ScreenDebug_OKNDDEJODAJ__);
    DAT_04568a0c = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__JBFHBECEOAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

