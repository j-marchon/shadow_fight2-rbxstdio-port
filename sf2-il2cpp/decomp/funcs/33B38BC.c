// PBNDDBCDELD$$LOIGLPPPEBD @ RVA 0x33B38BC

bool PBNDDBCDELD__LOIGLPPPEBD(float IDGIPLNJMEF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint32_t uVar4;
  System_String_o *CJNHFNHJHPE;
  uint uVar5;
  
                    /* try { // try from 034b38c4 to 035b38df has its CatchHandler @ 034b4a30 */
  if ((DAT_04567d64 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567d64 = 1;
  }
                    /* try { // try from 034b38ec to 035b38f3 has its CatchHandler @ 034b47fc */
  CJNHFNHJHPE = HLIDLFKDMHG__CJGIKJBCAII((MethodInfo *)0x0);
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 034b3904 to 035b390b has its CatchHandler @ 034b4834 */
  bVar2 = false;
                    /* try { // try from 034b390c to 035b3927 has its CatchHandler @ 034b4a2c */
  if ((IDGIPLNJMEF != 0.0) && (!bVar3)) {
    uVar4 = PCOEHCPGBBG__GEAOHBLPINE(CJNHFNHJHPE,false,(MethodInfo *)0x0);
                    /* try { // try from 034b3934 to 035b393b has its CatchHandler @ 034b47f4 */
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
                    /* try { // try from 034b394c to 035b3953 has its CatchHandler @ 034b481c */
                    /* try { // try from 034b3960 to 035b3977 has its CatchHandler @ 034b4a3c */
    uVar5 = (uint)((1.0 / ABS(IDGIPLNJMEF)) * 10000.0);
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar4 / uVar5;
    }
    bVar2 = uVar4 - uVar1 * uVar5 < 0x2711;
  }
                    /* try { // try from 034b3984 to 035b398b has its CatchHandler @ 034b4860 */
  return bVar2;
}

