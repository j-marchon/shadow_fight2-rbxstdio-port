// Nekki.SF2.GUI.Fight.PreFight.JNJIBDGLBPC$$.ctor @ RVA 0x2FFEA64

void Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC___ctor
               (Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this,MethodInfo *method)

{
  if ((DAT_04565b18 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>__ctor__);
    DAT_04565b18 = 1;
  }
  UnityEngine_Events_UnityEvent<Int32Enum>___ctor
            ((UnityEngine_Events_UnityEvent_T0__o *)__this,
             Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>__ctor__);
  return;
}

