// EINKKMIHCHI$$FNGMPMDBIKB @ RVA 0x34C8004

void EINKKMIHCHI__FNGMPMDBIKB(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  GPFMGALHFJK_o *pGVar1;
  
                    /* try { // try from 035c8004 to 036c800b has its CatchHandler @ 035c8780 */
                    /* try { // try from 035c8020 to 036c8027 has its CatchHandler @ 035c80b8 */
  if ((DAT_0456864c & 1) == 0) {
    FUN_01bab630(&StringLiteral_12125);
    DAT_0456864c = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_12125,(MethodInfo *)0x0);
  pGVar1 = (__this->fields).KAKIHIMNDAE;
  if (pGVar1 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c8064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable)._32_EPIDMPBKPGE.methodPtr)
              (pGVar1,(pGVar1->klass->vtable)._32_EPIDMPBKPGE.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

