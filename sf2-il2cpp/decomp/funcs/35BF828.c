// Nekki.SF2.GUI.Fight.ViewerFight$$PausePress @ RVA 0x35BF828

void Nekki_SF2_GUI_Fight_ViewerFight__PausePress
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  Il2CppObject *PLPFOJADDML;
  undefined4 local_24;
  
  if ((DAT_04568f0f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
    DAT_04568f0f = 1;
  }
  local_24 = 0;
  PLPFOJADDML = (Il2CppObject *)
                thunk_FUN_01bda448(Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo,&local_24);
  Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,PLPFOJADDML,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
                    /* try { // try from 036bf898 to 037bf89f has its CatchHandler @ 036bfd28 */
  return;
}

