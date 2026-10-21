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

