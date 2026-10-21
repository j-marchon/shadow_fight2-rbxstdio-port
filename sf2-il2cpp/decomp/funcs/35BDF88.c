// Nekki.SF2.GUI.Fight.ViewerFight$$PreInit @ RVA 0x35BDF88

void Nekki_SF2_GUI_Fight_ViewerFight__PreInit
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,GOJLGHMMDBO_o *NOKHDHCKCPH,
               GOJLGHMMDBO_o *KJDLPOFAIBB,MethodInfo *method)

{
  GOJLGHMMDBO_o **ppGVar1;
  JIMKCICMMIL_o **ppJVar2;
  System_Action_bool__o *CJNHFNHJHPE;
  
                    /* try { // try from 036bdf98 to 037bdf9f has its CatchHandler @ 036be048 */
                    /* try { // try from 036bdfa0 to 037bdfcb has its CatchHandler @ 036bde30 */
  if ((DAT_04568ef9 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* try { // try from 036bdfcc to 037bdfd3 has its CatchHandler @ 036be04c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_OMANLLACFOG__);
    DAT_04568ef9 = 1;
  }
  ppGVar1 = &(__this->fields)._CDKAFMECMHK_k__BackingField;
  *ppGVar1 = NOKHDHCKCPH;
                    /* try { // try from 036bdfec to 037bdff3 has its CatchHandler @ 036be03c */
  thunk_FUN_01c20e04(ppGVar1,NOKHDHCKCPH);
  ppGVar1 = &(__this->fields)._PHBDBOBEDOK_k__BackingField;
                    /* try { // try from 036bdff4 to 037be01f has its CatchHandler @ 036bde30 */
  *ppGVar1 = KJDLPOFAIBB;
  thunk_FUN_01c20e04(ppGVar1,KJDLPOFAIBB);
  ppJVar2 = &(__this->fields)._JHNEOBOKOJF_k__BackingField;
  *ppJVar2 = (JIMKCICMMIL_o *)0x0;
  thunk_FUN_01c20e04(ppJVar2,0);
  (__this->fields)._BBIBLNIKJMG_k__BackingField = false;
  (__this->fields)._NNPPLGMLHEK_k__BackingField = true;
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 036be020 to 037be023 has its CatchHandler @ 036be044 */
                    /* try { // try from 036be024 to 037be027 has its CatchHandler @ 036be040 */
                    /* try { // try from 036be028 to 037be02b has its CatchHandler @ 036be038 */
                    /* try { // try from 036be02c to 037be02f has its CatchHandler @ 036be034 */
                    /* try { // try from 036be030 to 037be063 has its CatchHandler @ 036bde30 */
  System_Action<bool>___ctor();
                    /* catch() { ... } // from try @ 036be02c with catch @ 036be034 */
                    /* catch() { ... } // from try @ 036be028 with catch @ 036be038 */
                    /* catch() { ... } // from try @ 036bdfec with catch @ 036be03c */
                    /* catch() { ... } // from try @ 036be024 with catch @ 036be040 */
                    /* catch() { ... } // from try @ 036be020 with catch @ 036be044 */
                    /* catch() { ... } // from try @ 036bdf98 with catch @ 036be048 */
                    /* catch() { ... } // from try @ 036bdfcc with catch @ 036be04c */
  Nekki_SF2_Core_ApplicationController__add_OnPause(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

