// TypeDefIndex 2222
// Namespace: 
// public class HBHNJNHNFHP : FCMAKNBEJDA
// Fields:
//   protected const float KNFKEEDFPEC = 0.5;
//   protected const float FCLFEIDBCNE = 0.1;
//   private bool <KDIICJELPNJ>k__BackingField; // 0x4C
//   private bool KCAGIPAKMPC; // 0x4D
//   private bool FPKLBEGBDNA; // 0x4E

// ===== private void LNLEFANOIDH()  [RVA 0x32ED844]
// HBHNJNHNFHP$$LNLEFANOIDH @ RVA 0x32ED844

void HBHNJNHNFHP__LNLEFANOIDH(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
  if ((DAT_04567652 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9838/*"OnAdFailedToLoad'"*/);
    DAT_04567652 = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9838/*"OnAdFailedToLoad'"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.HABJODEHCNL;
  (__this->fields).super.field_0x3d = 0;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ed8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ACHIPNNEFDL(bool CJNHFNHJHPE)  [RVA 0x32ED8B4]
// HBHNJNHNFHP$$ACHIPNNEFDL @ RVA 0x32ED8B4

void HBHNJNHNFHP__ACHIPNNEFDL(HBHNJNHNFHP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).super.field_0x3c = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x32ED8C0]
// HBHNJNHNFHP$$.ctor @ RVA 0x32ED8C0

void HBHNJNHNFHP___ctor(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  FCMAKNBEJDA___ctor((FCMAKNBEJDA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void BDIFEJCKEGH(float NACILJPLKBG, Action PKKMGBOIDJD)  [RVA 0x32ED8C8]
// HBHNJNHNFHP$$BDIFEJCKEGH @ RVA 0x32ED8C8

void HBHNJNHNFHP__BDIFEJCKEGH
               (HBHNJNHNFHP_o *__this,float NACILJPLKBG,System_Action_o *PKKMGBOIDJD,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  undefined4 in_register_00005004;
  
  if ((DAT_04567653 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567653 = 1;
  }
  if (NACILJPLKBG <= 0.0) {
    if (PKKMGBOIDJD != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ed978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PKKMGBOIDJD->fields).super.super.invoke_impl)
                ((PKKMGBOIDJD->fields).super.super.method_code,
                 (PKKMGBOIDJD->fields).super.super.method);
      return;
    }
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 2);
        goto LAB_033ed99c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_033ed99c:
                    /* WARNING: Could not recover jumptable at 0x033ed9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(CONCAT44(in_register_00005004,NACILJPLKBG),pPVar2,PKKMGBOIDJD,pVVar3->method)
  ;
  return;
}


// ===== private void DOKBCLHIPEA()  [RVA 0x32ED9C0]
// HBHNJNHNFHP$$DOKBCLHIPEA @ RVA 0x32ED9C0

/* WARNING: Type propagation algorithm not settling */

void HBHNJNHNFHP__DOKBCLHIPEA(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
  if ((DAT_04567654 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9841/*"OnAdOpened"*/);
    DAT_04567654 = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9841/*"OnAdOpened"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.IIEIOOACJJL;
  (__this->fields).super.field_0x3e = 0;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033eda28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Dispose()  [RVA 0x32EDA30]
// HBHNJNHNFHP$$Dispose @ RVA 0x32EDA30

void HBHNJNHNFHP__Dispose(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override bool CDEIMFELDHP()  [RVA 0x32EDA34]
// HBHNJNHNFHP$$CDEIMFELDHP @ RVA 0x32EDA34

bool HBHNJNHNFHP__CDEIMFELDHP(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x3d;
}


// ===== public override bool BPHNBPHFDLM()  [RVA 0x32EDA3C]
// HBHNJNHNFHP$$BPHNBPHFDLM @ RVA 0x32EDA3C

bool HBHNJNHNFHP__BPHNBPHFDLM(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x3e;
}


// ===== private void PCALMGLCBKG()  [RVA 0x32EDA44]
// HBHNJNHNFHP$$PCALMGLCBKG @ RVA 0x32EDA44

void HBHNJNHNFHP__PCALMGLCBKG(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
  if ((DAT_04567655 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9840/*"OnAdLoaded"*/);
    DAT_04567655 = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9840/*"OnAdLoaded"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.NEKJNNBFECK;
  *(undefined2 *)&(__this->fields).super.field_0x3d = 0x100;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033edab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void FDKDJJJDKKK(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x32EDAB8]
// HBHNJNHNFHP$$FDKDJJJDKKK @ RVA 0x32EDAB8

void HBHNJNHNFHP__FDKDJJJDKKK(HBHNJNHNFHP_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  if ((__this->fields).super.field_0x3d != '\0') {
    return;
  }
  (__this->fields).super.field_0x3d = 1;
  (__this->fields).super.JBNGADJBDHB = BKFOLMBMFNP;
  HBHNJNHNFHP__DEGIJPMOOOE(__this,(MethodInfo *)(ulong)(uint)BKFOLMBMFNP);
  return;
}


// ===== protected virtual void DDBOCELCFAL()  [RVA 0x32EDB74]
// HBHNJNHNFHP$$DDBOCELCFAL @ RVA 0x32EDB74

void HBHNJNHNFHP__DDBOCELCFAL(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  System_Action_o *PKKMGBOIDJD;
  HBHNJNHNFHP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567656 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HBHNJNHNFHP_LAJOGIIJIEO__);
    DAT_04567656 = 1;
    method = extraout_x1;
  }
  HBHNJNHNFHP__DOKBCLHIPEA(__this,method);
  PKKMGBOIDJD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  method_00 = Method_HBHNJNHNFHP_LAJOGIIJIEO__;
  System_Action___ctor();
  HBHNJNHNFHP__BDIFEJCKEGH(__this_00,0.1,PKKMGBOIDJD,method_00);
  return;
}


// ===== private void DEGIJPMOOOE()  [RVA 0x32EDAD4]
// HBHNJNHNFHP$$DEGIJPMOOOE @ RVA 0x32EDAD4

void HBHNJNHNFHP__DEGIJPMOOOE(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  char cVar2;
  System_Action_o *PKKMGBOIDJD;
  HBHNJNHNFHP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567657 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HBHNJNHNFHP_LNLEFANOIDH__);
    FUN_01bab630(&Method_HBHNJNHNFHP_PCALMGLCBKG__);
    DAT_04567657 = 1;
    method = extraout_x1;
  }
  cVar2 = (__this->fields).super.field_0x3c;
  PKKMGBOIDJD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  puVar1 = &Method_HBHNJNHNFHP_LNLEFANOIDH__;
  if (cVar2 != '\0') {
    puVar1 = &Method_HBHNJNHNFHP_PCALMGLCBKG__;
  }
  method_00 = (MethodInfo *)*puVar1;
  System_Action___ctor();
  HBHNJNHNFHP__BDIFEJCKEGH(__this_00,0.5,PKKMGBOIDJD,method_00);
  return;
}


// ===== public bool IDNAIAFNBJK()  [RVA 0x32EDC00]
// HBHNJNHNFHP$$IDNAIAFNBJK @ RVA 0x32EDC00

bool HBHNJNHNFHP__IDNAIAFNBJK(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x3c;
}


// ===== public override bool OLHHONOHBMB()  [RVA 0x32EDC08]
// HBHNJNHNFHP$$OLHHONOHBMB @ RVA 0x32EDC08

bool HBHNJNHNFHP__OLHHONOHBMB(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  return true;
}


// ===== private void LAJOGIIJIEO()  [RVA 0x32EDC10]
// HBHNJNHNFHP$$LAJOGIIJIEO @ RVA 0x32EDC10

void HBHNJNHNFHP__LAJOGIIJIEO(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
                    /* try { // try from 033edc18 to 034edc3f has its CatchHandler @ 033ee014 */
  if ((DAT_04567658 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9836/*"OnAdClosed"*/);
    DAT_04567658 = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9836/*"OnAdClosed"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.EDPLNAAICPE;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033edc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 033edc74 to 034edc9f has its CatchHandler @ 033ee010 */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void BFCCEGGDJEF(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x32EDC7C]
// HBHNJNHNFHP$$BFCCEGGDJEF @ RVA 0x32EDC7C

void HBHNJNHNFHP__BFCCEGGDJEF(HBHNJNHNFHP_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  ulong uVar1;
  HBHNJNHNFHP_c *pHVar2;
  System_Action_MPAKDCNMLEG__o *pSVar3;
  
  pHVar2 = __this->klass;
  (__this->fields).super.JBNGADJBDHB = BKFOLMBMFNP;
  uVar1 = (*(pHVar2->vtable)._6_BPHNBPHFDLM.methodPtr)
                    (__this,(pHVar2->vtable)._6_BPHNBPHFDLM.method);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x033edca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._11_DDBOCELCFAL.methodPtr)
              (__this,(__this->klass->vtable)._11_DDBOCELCFAL.method);
    return;
  }
  pSVar3 = (__this->fields).super.NBEAOEDKFLO;
  if (pSVar3 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033edcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar3->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

