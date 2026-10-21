// KMAKOOHEKNB$$IPNKNBDBKMA @ RVA 0x2FF6DA8

float KMAKOOHEKNB__IPNKNBDBKMA
                (KMAKOOHEKNB_o *__this,UnityEngine_SocialPlatforms_Range_o CMHCEEPDACF,
                MethodInfo *method)

{
  int JDEFJPHCNMM;
  float fVar1;
  float fVar2;
  
  if (CMHCEEPDACF.fields.count != 0) {
    JDEFJPHCNMM = CMHCEEPDACF.fields.from + -1;
                    /* try { // try from 030f6dc0 to 031f6dc3 has its CatchHandler @ 030f6edc */
    fVar1 = KMAKOOHEKNB__GOFGJILDJLA(__this,JDEFJPHCNMM + CMHCEEPDACF.fields.count,method);
                    /* try { // try from 030f6dcc to 031f6ddb has its CatchHandler @ 030f6ed8 */
    fVar2 = KMAKOOHEKNB__GOFGJILDJLA(__this,JDEFJPHCNMM,method);
                    /* try { // try from 030f6de0 to 031f6deb has its CatchHandler @ 030f6ed4 */
    return fVar1 - fVar2;
  }
  return 0.0;
}

