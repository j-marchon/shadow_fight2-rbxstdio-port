// TypeDefIndex 2621
// Namespace: 
// [Serializable]
// public class TwoAxisControlHandler.ControlAcceptedEvent : UnityEvent<Vector2>
// Fields:

// ===== public void .ctor()  [RVA 0x33B16A4]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler.ControlAcceptedEvent$$.ctor @ RVA 0x33B16A4

void Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent___ctor
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_o *__this,
               MethodInfo *method)

{
                    /* try { // try from 034b16b4 to 035b16bb has its CatchHandler @ 034b1a68 */
                    /* try { // try from 034b16c0 to 035b16c7 has its CatchHandler @ 034b1a70 */
  if ((DAT_04567d4e & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__);
    DAT_04567d4e = 1;
  }
                    /* try { // try from 034b16d8 to 035b16df has its CatchHandler @ 034b1a30 */
  UnityEngine_Events_UnityEvent<Vector2>___ctor
            ((UnityEngine_Events_UnityEvent_Vector2__o *)__this,
             Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__);
  return;
}

