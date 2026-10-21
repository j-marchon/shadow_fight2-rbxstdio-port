// TypeDefIndex 1334
// Namespace: 
// public static class LFFOOBFIJHP
// Fields:

// ===== public static float BHKAMEOBPEG(Vector2 LHHGNLJGDDD)  [RVA 0x315D6D0]
// LFFOOBFIJHP$$BHKAMEOBPEG @ RVA 0x315D6D0

float LFFOOBFIJHP__BHKAMEOBPEG(UnityEngine_Vector2_o LHHGNLJGDDD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = atan2f(LHHGNLJGDDD.fields.y,LHHGNLJGDDD.fields.x);
  fVar1 = 360.0;
  fVar3 = fmodf(fVar2 * 57.29578,360.0);
                    /* try { // try from 0325d708 to 0335d733 has its CatchHandler @ 0325dafc */
  if (0.0 <= fVar2 * 57.29578) {
    fVar1 = 0.0;
  }
  return fVar3 + fVar1;
}


// ===== public static float AOELLMMMKHC(Vector2 LHHGNLJGDDD, Vector2 KDAIEPDLOHO)  [RVA 0x315D784]
// LFFOOBFIJHP$$AOELLMMMKHC @ RVA 0x315D784

float LFFOOBFIJHP__AOELLMMMKHC
                (UnityEngine_Vector2_o LHHGNLJGDDD,UnityEngine_Vector2_o KDAIEPDLOHO,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = atan2f(KDAIEPDLOHO.fields.y - LHHGNLJGDDD.fields.y,
                 KDAIEPDLOHO.fields.x - LHHGNLJGDDD.fields.x);
                    /* try { // try from 0325d79c to 0335d7a3 has its CatchHandler @ 0325daf0 */
  return fVar1 * 57.29578;
}


// ===== public static float FCDKIHIABJF(float GMOPOJHAMBE)  [RVA 0x315D74C]
// LFFOOBFIJHP$$FCDKIHIABJF @ RVA 0x315D74C

float LFFOOBFIJHP__FCDKIHIABJF(float GMOPOJHAMBE,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 360.0;
  fVar2 = fmodf(GMOPOJHAMBE,360.0);
  if (0.0 <= GMOPOJHAMBE) {
    fVar1 = 0.0;
  }
                    /* try { // try from 0325d77c to 0335d78b has its CatchHandler @ 0325db08 */
  return fVar2 + fVar1;
}


// ===== public static float JAMFMJCKOEB(Vector2 LHHGNLJGDDD)  [RVA 0x315D724]
// LFFOOBFIJHP$$JAMFMJCKOEB @ RVA 0x315D724

float LFFOOBFIJHP__JAMFMJCKOEB(UnityEngine_Vector2_o LHHGNLJGDDD,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = atan2f(LHHGNLJGDDD.fields.y,LHHGNLJGDDD.fields.x);
  return fVar1 * 57.29578;
}


// ===== public static float EHFFMNBMNNF(Vector2 LHHGNLJGDDD, Vector2 KDAIEPDLOHO)  [RVA 0x315D7AC]
// LFFOOBFIJHP$$EHFFMNBMNNF @ RVA 0x315D7AC

float LFFOOBFIJHP__EHFFMNBMNNF
                (UnityEngine_Vector2_o LHHGNLJGDDD,UnityEngine_Vector2_o KDAIEPDLOHO,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 0325d7b4 to 0335d7bb has its CatchHandler @ 0325daec */
                    /* try { // try from 0325d7bc to 0335d7c7 has its CatchHandler @ 0325daf4 */
  fVar2 = atan2f(KDAIEPDLOHO.fields.y - LHHGNLJGDDD.fields.y,
                 KDAIEPDLOHO.fields.x - LHHGNLJGDDD.fields.x);
                    /* try { // try from 0325d7c8 to 0335d7e7 has its CatchHandler @ 0325db04 */
  fVar1 = 360.0;
  fVar3 = fmodf(fVar2 * 57.29578,360.0);
  if (0.0 <= fVar2 * 57.29578) {
    fVar1 = 0.0;
  }
                    /* try { // try from 0325d7f4 to 0335d7fb has its CatchHandler @ 0325dad8 */
  return fVar3 + fVar1;
}

