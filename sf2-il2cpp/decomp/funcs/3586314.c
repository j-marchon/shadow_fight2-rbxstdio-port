// Nekki.SF2.GUI.Map.MapScene$$GBJCFLOEJLF @ RVA 0x3586314

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Map_MapScene__GBJCFLOEJLF(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this_00;
  Nekki_SF2_GUI_Map_MapScene_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d07 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_TypeInfo);
    DAT_04568d07 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_TypeInfo,method);
  Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

