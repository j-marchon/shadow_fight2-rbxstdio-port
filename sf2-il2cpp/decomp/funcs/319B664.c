// PKHLGDMJPMF$$GJIBIJANHPO @ RVA 0x319B664

float PKHLGDMJPMF__GJIBIJANHPO
                (PKHLGDMJPMF_o *FMPJLBLNHMC,PKHLGDMJPMF_o *IHEPHBIPLPM,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((FMPJLBLNHMC != (PKHLGDMJPMF_o *)0x0) && (IHEPHBIPLPM != (PKHLGDMJPMF_o *)0x0)) {
    fVar1 = (FMPJLBLNHMC->fields).OHHDBINAJCB;
    fVar5 = (FMPJLBLNHMC->fields).JOLEIODMLFL;
    fVar3 = (IHEPHBIPLPM->fields).OHHDBINAJCB;
    fVar2 = (IHEPHBIPLPM->fields).JOLEIODMLFL;
    fVar4 = fVar1 * fVar2 - fVar5 * fVar3;
    fVar1 = fVar2 * fVar5 + fVar1 * fVar3;
    fVar2 = 1.0 / SQRT(fVar4 * fVar4 + fVar1 * fVar1);
    fVar1 = atan2f(fVar4 * fVar2,fVar1 * fVar2);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

