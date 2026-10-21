// TypeDefIndex 412
// Namespace: 
// public class MJGADOLMGKK : IJIHLBLCJMG
// Fields:
//   private readonly ODEIOKOJGDM BFCFIPCBCJK; // 0x28

// ===== public void .ctor(ODEIOKOJGDM CMKMIAJKFCG)  [RVA 0x3486844]
// MJGADOLMGKK$$.ctor @ RVA 0x3486844

void MJGADOLMGKK___ctor(MJGADOLMGKK_o *__this,ODEIOKOJGDM_o *CMKMIAJKFCG,MethodInfo *method)

{
  ODEIOKOJGDM_o **ppOVar1;
  
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).BFCFIPCBCJK;
  *ppOVar1 = CMKMIAJKFCG;
  thunk_FUN_01c20e04(ppOVar1,CMKMIAJKFCG);
  return;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x3486874]
// MJGADOLMGKK$$JFGBPBOCOIC @ RVA 0x3486874

bool MJGADOLMGKK__JFGBPBOCOIC(MJGADOLMGKK_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
                    /* try { // try from 03586874 to 0368689b has its CatchHandler @ 035870f8 */
  return true;
}


// ===== public override void NKLGCNHLBAF()  [RVA 0x348687C]
// MJGADOLMGKK$$NKLGCNHLBAF @ RVA 0x348687C

void MJGADOLMGKK__NKLGCNHLBAF(MJGADOLMGKK_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  ODEIOKOJGDM_c *pOVar4;
  ulong uVar5;
  int32_t *piVar6;
  ODEIOKOJGDM_o *pOVar7;
  
  if ((DAT_045683b3 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_MJGADOLMGKK_JEGLOKEBHBM__);
                    /* try { // try from 035868d0 to 036868f7 has its CatchHandler @ 035870f4 */
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_045683b3 = 1;
    method = extraout_x1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo,method);
  }
  bVar2 = EOOEOHKLOFJ__HBGCPAEJCJJ((MethodInfo *)0x0);
  if (!bVar2) {
                    /* try { // try from 035869cc to 036869d7 has its CatchHandler @ 035870b0 */
    IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 03586908 to 0368690f has its CatchHandler @ 035870dc */
  source = AFIJIPMBKHP__DFKGJOOBNPB((__this->fields).BFCFIPCBCJK,(MethodInfo *)0x0);
                    /* try { // try from 03586914 to 0368691b has its CatchHandler @ 035870e8 */
                    /* try { // try from 03586920 to 03686927 has its CatchHandler @ 035870ec */
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 0358692c to 03686933 has its CatchHandler @ 035870f0 */
                    /* try { // try from 03586944 to 0368694b has its CatchHandler @ 035870b8 */
  System_Action<Unit>___ctor();
                    /* try { // try from 0358695c to 03686963 has its CatchHandler @ 035870c8 */
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)
             (__this->fields).super.ACHHOOFKHLD,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 03586974 to 0368697b has its CatchHandler @ 0358707c */
  pOVar7 = (__this->fields).BFCFIPCBCJK;
  if (pOVar7 == (ODEIOKOJGDM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar4 = pOVar7->klass;
  uVar1._0_1_ = (pOVar4->_2).rank;
  uVar1._1_1_ = (pOVar4->_2).minimumAlignment;
                    /* try { // try from 03586988 to 0368698f has its CatchHandler @ 035870a0 */
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pOVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 035869a0 to 036869a7 has its CatchHandler @ 03587098 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)ODEIOKOJGDM_TypeInfo) {
        pVVar3 = pOVar4->vtable + *piVar6;
        goto LAB_035869e8;
      }
                    /* try { // try from 035869a8 to 036869bb has its CatchHandler @ 03587090 */
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pOVar7,ODEIOKOJGDM_TypeInfo,0);
                    /* try { // try from 035869c0 to 036869cb has its CatchHandler @ 035870bc */
LAB_035869e8:
                    /* try { // try from 035869e8 to 036869f7 has its CatchHandler @ 035870d8 */
                    /* WARNING: Could not recover jumptable at 0x035869fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pOVar7,1,pVVar3->method);
  return;
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x3486A04]
// MJGADOLMGKK$$KGGGBHEMAOO @ RVA 0x3486A04

int32_t MJGADOLMGKK__KGGGBHEMAOO(MJGADOLMGKK_o *__this,MethodInfo *method)

{
  return 9;
}


// ===== private void JEGLOKEBHBM(Unit HOKBHLPPCAH)  [RVA 0x3486A0C]
// MJGADOLMGKK$$JEGLOKEBHBM @ RVA 0x3486A0C

void MJGADOLMGKK__JEGLOKEBHBM(IJIHLBLCJMG_o *__this)

{
                    /* try { // try from 03586a0c to 03686a13 has its CatchHandler @ 0358709c */
  IJIHLBLCJMG__FGNINNOOCCL(__this,true,(MethodInfo *)0x0);
  return;
}

