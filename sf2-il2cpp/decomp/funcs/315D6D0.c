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

