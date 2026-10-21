// WideScreenController$$GetVisibleSceneWidth @ RVA 0x31E9198

float WideScreenController__GetVisibleSceneWidth
                (float KJNOLCAONEB,float JLPMKKKMANE,MethodInfo *method)

{
  float fVar1;
  
                    /* try { // try from 032e919c to 033e91c3 has its CatchHandler @ 032e93b0 */
  fVar1 = JLPMKKKMANE * 1.7777778;
  if (KJNOLCAONEB / JLPMKKKMANE <= 1.7777778) {
    fVar1 = KJNOLCAONEB;
  }
  return fVar1;
}

