// Nekki.SF2.GUI.Map.IndicatorFight$$set_CurrentState @ RVA 0x3081D78

void Nekki_SF2_GUI_Map_IndicatorFight__set_CurrentState
               (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
                    /* try { // try from 03181d9c to 03281da3 has its CatchHandler @ 03181e30 */
  if ((DAT_04565ffd & 1) == 0) {
                    /* try { // try from 03181da4 to 03281db3 has its CatchHandler @ 03181e3c */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&StringLiteral_9087);
    FUN_01bab630(&StringLiteral_9080);
                    /* try { // try from 03181dc4 to 03281dcf has its CatchHandler @ 03181e38 */
    FUN_01bab630(&StringLiteral_9088);
    FUN_01bab630(&StringLiteral_9086);
    DAT_04565ffd = 1;
  }
  (__this->fields).DFCJLLMHKLE = CJNHFNHJHPE;
                    /* try { // try from 03181de8 to 03281deb has its CatchHandler @ 03181e2c */
                    /* try { // try from 03181dec to 03281e0f has its CatchHandler @ 03181e40 */
  __this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar2 = StringLiteral_9080._4_4_;
    (__this_00->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_9080;
    (__this_00->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar2;
                    /* try { // try from 03181e10 to 03281e23 has its CatchHandler @ 03181e34 */
    thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
    uVar1 = (__this->fields).DFCJLLMHKLE;
    if (uVar1 < 3) {
                    /* try { // try from 03181e24 to 03281e57 has its CatchHandler @ 03181a10 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181de8 with catch @ 03181e2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181d9c with catch @ 03181e30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181e10 with catch @ 03181e34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181dc4 with catch @ 03181e38
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181da4 with catch @ 03181e3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03181dec with catch @ 03181e40
                        */
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,*(System_String_o **)(&PTR_StringLiteral_9088_03fc63c0)[(int)uVar1],
                 (MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03181e58 to 03281e6f has its CatchHandler @ 03181f10 */
  FUN_01bab8c8();
}

