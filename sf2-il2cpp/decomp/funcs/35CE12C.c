// Nekki.SF2.GUI.BaseScrollContent.ClickItemEvent$$.ctor @ RVA 0x35CE12C

void Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent___ctor
               (Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *__this,MethodInfo *method)

{
                    /* try { // try from 036ce12c to 037ce137 has its CatchHandler @ 036cd9d8 */
                    /* try { // try from 036ce138 to 037ce13f has its CatchHandler @ 036ce140 */
                    /* catch() { ... } // from try @ 036ce01c with catch @ 036ce140
                       catch() { ... } // from try @ 036ce0c4 with catch @ 036ce140
                       catch() { ... } // from try @ 036ce138 with catch @ 036ce140 */
  if ((DAT_04568fbe & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>__ctor__);
    DAT_04568fbe = 1;
  }
  UnityEngine_Events_UnityEvent<object>___ctor
            ((UnityEngine_Events_UnityEvent_T0__o *)__this,
             Method_UnityEngine_Events_UnityEvent<BaseScrollItem>__ctor__);
  return;
}

