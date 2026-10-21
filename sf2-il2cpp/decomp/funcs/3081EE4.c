// Nekki.SF2.GUI.Map.IndicatorFight$$.ctor @ RVA 0x3081EE4

void Nekki_SF2_GUI_Map_IndicatorFight___ctor
               (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,MethodInfo *method)

{
                    /* try { // try from 03181f00 to 03281f0f has its CatchHandler @ 03181f10 */
  if ((DAT_04565fff & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
                    /* catch() { ... } // from try @ 03181e58 with catch @ 03181f10
                       catch() { ... } // from try @ 03181f00 with catch @ 03181f10 */
                    /* try { // try from 03181f14 to 03281f17 has its CatchHandler @ 03181f20 */
    DAT_04565fff = 1;
  }
                    /* try { // try from 03181f18 to 03281f23 has its CatchHandler @ 03181a10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03181f14 with catch @ 03181f20
                        */
  (__this->fields).DFCJLLMHKLE = 1;
  (__this->fields).OAEPPCNALGL = 1.0;
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}

