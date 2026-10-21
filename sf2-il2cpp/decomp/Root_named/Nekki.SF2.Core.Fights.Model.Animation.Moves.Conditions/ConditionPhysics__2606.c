// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionPhysics  (obfuscated EFPOGFPCBNE)
// TypeDefIndex 2606
// Namespace: 
// public class ConditionPhysics : ConditionAnimation
// Fields:
//   private float AKPNOPAEKEF; // 0x28
//   private float HFBHMJBLLOI; // 0x2C

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x33AC040]
// ConditionPhysics$$EPBENPDCBFE @ RVA 0x33AC040

bool ConditionPhysics__EPBENPDCBFE(ConditionPhysics_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  
                    /* try { // try from 034ac044 to 035ac04f has its CatchHandler @ 034acc98 */
  fVar2 = (__this->fields).AKPNOPAEKEF;
  if (fVar2 == -1.0) {
LAB_034ac068:
    fVar2 = (__this->fields).HFBHMJBLLOI;
    if (fVar2 != -1.0) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_034ac0ac:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034ac080 to 035ac087 has its CatchHandler @ 034acc68 */
      if (fVar2 < (float)(AHEFOIOKDOK->fields).AFMOEMAGCBO) goto LAB_034ac088;
    }
    bVar1 = 1;
  }
  else {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_034ac0ac;
                    /* try { // try from 034ac060 to 035ac06f has its CatchHandler @ 034acc94 */
    if (fVar2 <= (float)(AHEFOIOKDOK->fields).AFMOEMAGCBO) goto LAB_034ac068;
LAB_034ac088:
    bVar1 = 0;
  }
                    /* try { // try from 034ac098 to 035ac09f has its CatchHandler @ 034acc5c */
                    /* try { // try from 034ac0a0 to 035ac0bf has its CatchHandler @ 034acc90 */
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x33AC0B0]
// ConditionPhysics$$.ctor @ RVA 0x33AC0B0

void ConditionPhysics___ctor(ConditionPhysics_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  float fVar1;
  MGNDHCBAPEN_float__float__o *pMVar2;
  
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0xb,(MethodInfo *)0x0);
                    /* try { // try from 034ac0cc to 035ac0d3 has its CatchHandler @ 034acc64 */
  pMVar2 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,-1.0,-1.0,(MethodInfo *)0x0);
  if (pMVar2 != (MGNDHCBAPEN_float__float__o *)0x0) {
                    /* try { // try from 034ac0e4 to 035ac0eb has its CatchHandler @ 034acc38 */
    fVar1 = (pMVar2->fields).DOKHHBGJICA;
    (__this->fields).AKPNOPAEKEF = (pMVar2->fields).PHPELPFMOII;
    (__this->fields).HFBHMJBLLOI = fVar1;
                    /* try { // try from 034ac0ec to 035ac107 has its CatchHandler @ 034acc7c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

