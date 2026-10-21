// TypeDefIndex 2650
// Namespace: 
// public class DHMDCOPJMDO : HBHNJNHNFHP
// Fields:
//   private const float NOBPIPJIBNB = 0.05;

// ===== protected override void DDBOCELCFAL()  [RVA 0x33B896C]
// DHMDCOPJMDO$$DDBOCELCFAL @ RVA 0x33B896C

void DHMDCOPJMDO__DDBOCELCFAL(DHMDCOPJMDO_o *__this,MethodInfo *method)

{
  System_Action_o *PKKMGBOIDJD;
  
                    /* try { // try from 034b8994 to 035b899b has its CatchHandler @ 034b8b08 */
  if ((DAT_04567d8d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 034b89a4 to 035b89b3 has its CatchHandler @ 034b8b0c */
    FUN_01bab630(&Method_DHMDCOPJMDO_KIIMDDDFKML__);
    DAT_04567d8d = 1;
  }
  HBHNJNHNFHP__DDBOCELCFAL((HBHNJNHNFHP_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 034b89c4 to 035b89db has its CatchHandler @ 034b8b10 */
  PKKMGBOIDJD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
                    /* try { // try from 034b89e0 to 035b89eb has its CatchHandler @ 034b8b04 */
                    /* try { // try from 034b89fc to 035b89ff has its CatchHandler @ 034b8aec */
                    /* try { // try from 034b8a00 to 035b8a0f has its CatchHandler @ 034b8af8 */
  HBHNJNHNFHP__BDIFEJCKEGH((HBHNJNHNFHP_o *)__this,0.05,PKKMGBOIDJD,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x33B8A04]
// DHMDCOPJMDO$$.ctor @ RVA 0x33B8A04

void DHMDCOPJMDO___ctor(DHMDCOPJMDO_o *__this,MethodInfo *method)

{
  HBHNJNHNFHP___ctor((HBHNJNHNFHP_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KIIMDDDFKML()  [RVA 0x33B8A0C]
// DHMDCOPJMDO$$KIIMDDDFKML @ RVA 0x33B8A0C

void DHMDCOPJMDO__KIIMDDDFKML(DHMDCOPJMDO_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
                    /* try { // try from 034b8a18 to 035b8a7f has its CatchHandler @ 034b8b00 */
  if ((DAT_04567d8e & 1) == 0) {
    FUN_01bab630(&StringLiteral_9842/*"OnAdReward"*/);
    DAT_04567d8e = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9842/*"OnAdReward"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.super.MNEPPPPEJKF;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034b8a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

