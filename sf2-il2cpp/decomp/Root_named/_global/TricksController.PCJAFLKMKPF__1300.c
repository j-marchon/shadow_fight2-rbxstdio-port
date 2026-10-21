// TypeDefIndex 1300
// Namespace: 
// public class TricksController.PCJAFLKMKPF : UnityEvent<ProfileCell>
// Fields:

// ===== public void .ctor()  [RVA 0x3155810]
// Nekki.SF2.GUI.Profile.TricksController.PCJAFLKMKPF$$.ctor @ RVA 0x3155810

void Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF___ctor
               (Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *__this,MethodInfo *method)

{
  if ((DAT_04566838 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ProfileCell>__ctor__);
                    /* try { // try from 0325583c to 03355867 has its CatchHandler @ 032561e4 */
    DAT_04566838 = 1;
  }
  UnityEngine_Events_UnityEvent<object>___ctor
            ((UnityEngine_Events_UnityEvent_T0__o *)__this,
             Method_UnityEngine_Events_UnityEvent<ProfileCell>__ctor__);
  return;
}

