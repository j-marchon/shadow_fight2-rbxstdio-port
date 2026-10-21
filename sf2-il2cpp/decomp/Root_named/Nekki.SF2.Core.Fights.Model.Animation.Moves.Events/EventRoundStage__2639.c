// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Events.EventRoundStage  (obfuscated AOMIBNJMLEL)
// TypeDefIndex 2639
// Namespace: 
// public class EventRoundStage : EventAnimation
// Fields:
//   private StageType.HEJHMMBJODB JCIKOLNGLBE; // 0x48

// ===== public void .ctor()  [RVA 0x33B3988]
// EventRoundStage$$.ctor @ RVA 0x33B3988

void EventRoundStage___ctor(EventRoundStage_o *__this,MethodInfo *method)

{
  EventAnimation___ctor((EventAnimation_o *)__this,1,(MethodInfo *)0x0);
                    /* try { // try from 034b399c to 035b39a3 has its CatchHandler @ 034b4798 */
  (__this->fields).JCIKOLNGLBE = 0;
                    /* try { // try from 034b39a4 to 035b39af has its CatchHandler @ 034b4850 */
  return;
}


// ===== public StageType.HEJHMMBJODB BAJACGJJDGL()  [RVA 0x33B39A8]
// EventRoundStage$$BAJACGJJDGL @ RVA 0x33B39A8

int32_t EventRoundStage__BAJACGJJDGL(EventRoundStage_o *__this,MethodInfo *method)

{
  return (__this->fields).JCIKOLNGLBE;
}


// ===== protected override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x33B39B0]
// EventRoundStage$$HNIHOIAMDPC @ RVA 0x33B39B0

void EventRoundStage__HNIHOIAMDPC
               (EventRoundStage_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t iVar1;
  
                    /* try { // try from 034b39b4 to 035b39bb has its CatchHandler @ 034b47c0 */
  iVar1 = StageType__GILKLPLMPFM((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0);
  (__this->fields).JCIKOLNGLBE = iVar1;
                    /* try { // try from 034b39cc to 035b39d3 has its CatchHandler @ 034b4a94 */
  return;
}


// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x33B39D0]
// EventRoundStage$$DGCODECJJCC @ RVA 0x33B39D0

bool EventRoundStage__DGCODECJJCC(EventRoundStage_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
                    /* try { // try from 034b39e0 to 035b39e7 has its CatchHandler @ 034b482c */
  if ((DAT_04567d65 & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<StageType_HEJHMMBJODB>__);
                    /* try { // try from 034b39f8 to 035b39ff has its CatchHandler @ 034b4818 */
    DAT_04567d65 = 1;
  }
                    /* try { // try from 034b3a00 to 035b3a0b has its CatchHandler @ 034b47e8 */
  bVar1 = EventAnimation__DGCODECJJCC((EventAnimation_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar1) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034b3a20 to 035b3a27 has its CatchHandler @ 034b47e4 */
    iVar2 = EventAnimation__AOKIANMEBCH<Int32Enum>
                      ((KDFMDHADHMD->fields).KOANCCDDBDA,0,
                       Method_KJFPGDFNFCL_AOKIANMEBCH<StageType_HEJHMMBJODB>__);
                    /* try { // try from 034b3a38 to 035b3a3f has its CatchHandler @ 034b480c */
                    /* try { // try from 034b3a40 to 035b3a5b has its CatchHandler @ 034b4a18 */
    bVar1 = (iVar2 == (__this->fields).JCIKOLNGLBE) != ((__this->fields).super.GBBHFPBFOPI != false)
    ;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

