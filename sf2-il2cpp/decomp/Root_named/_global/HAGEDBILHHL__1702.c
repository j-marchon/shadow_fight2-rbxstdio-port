// TypeDefIndex 1702
// Namespace: 
// public class HAGEDBILHHL : IJIHLBLCJMG
// Fields:
//   private readonly JNDFOKIMHPB GIBKACGIOPM; // 0x28

// ===== public override void NKLGCNHLBAF()  [RVA 0x31D3AA0]
// HAGEDBILHHL$$NKLGCNHLBAF @ RVA 0x31D3AA0

void HAGEDBILHHL__NKLGCNHLBAF(HAGEDBILHHL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  long lVar2;
  KAKGABBLHGP_o *__this_00;
  VirtualInvokeData *pVVar3;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  long lVar4;
  JNDFOKIMHPB_c *pJVar5;
  ulong uVar6;
  int32_t *piVar7;
  JNDFOKIMHPB_o *pJVar8;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  
                    /* try { // try from 032d3aa0 to 033d3aab has its CatchHandler @ 032d4050 */
  if ((DAT_04566cc7 & 1) == 0) {
                    /* try { // try from 032d3acc to 033d3ad3 has its CatchHandler @ 032d3fe4 */
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_HAGEDBILHHL_JEGLOKEBHBM__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
    DAT_04566cc7 = 1;
    method = extraout_x1;
  }
  lVar2 = Method_System_Array_Empty<PackType>__;
  pJVar8 = (__this->fields).GIBKACGIOPM;
  lVar4 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  if (lVar4 == 0) {
                    /* try { // try from 032d3b38 to 033d3b3f has its CatchHandler @ 032d3fdc */
    FUN_01b8167c(Method_System_Array_Empty<PackType>__,method);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
                    /* try { // try from 032d3b54 to 033d3b5f has its CatchHandler @ 032d4008 */
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
                    /* try { // try from 032d3b80 to 033d3b8b has its CatchHandler @ 032d3fdc */
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar2 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
                    /* try { // try from 032d3b8c to 033d3c77 has its CatchHandler @ 032d2bd0 */
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
  if (pJVar8 == (JNDFOKIMHPB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032d3c78 to 033d3c7f has its CatchHandler @ 032d417c */
    FUN_01bab8c8();
  }
  pJVar5 = pJVar8->klass;
  uVar1._0_1_ = (pJVar5->_2).rank;
  uVar1._1_1_ = (pJVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pJVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)JNDFOKIMHPB_TypeInfo) {
        pVVar3 = pJVar5->vtable + (*piVar7 + 2);
        goto LAB_032d3c18;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar8,JNDFOKIMHPB_TypeInfo,2);
LAB_032d3c18:
  source = (System_IObservable_T__o *)(*pVVar3->methodPtr)(pJVar8,__this_00,pVVar3->method);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
  System_Action<object>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (source,onNext,Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)
             (__this->fields).super.ACHHOOFKHLD,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x31D3C7C]
// HAGEDBILHHL$$KGGGBHEMAOO @ RVA 0x31D3C7C

int32_t HAGEDBILHHL__KGGGBHEMAOO(HAGEDBILHHL_o *__this,MethodInfo *method)

{
  return 10;
}


// ===== private void JEGLOKEBHBM(KHODJHFHCDE EKHNABFCAMM)  [RVA 0x31D3C84]
// HAGEDBILHHL$$JEGLOKEBHBM @ RVA 0x31D3C84

void HAGEDBILHHL__JEGLOKEBHBM(HAGEDBILHHL_o *__this,KHODJHFHCDE_o *EKHNABFCAMM,MethodInfo *method)

{
  if (EKHNABFCAMM != (KHODJHFHCDE_o *)0x0) {
                    /* try { // try from 032d3c98 to 033d3caf has its CatchHandler @ 032d4178 */
    IJIHLBLCJMG__FGNINNOOCCL
              ((IJIHLBLCJMG_o *)__this,(EKHNABFCAMM->fields)._NJFBLJHECFH_k__BackingField,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x31D3CA0]
// HAGEDBILHHL$$JFGBPBOCOIC @ RVA 0x31D3CA0

bool HAGEDBILHHL__JFGBPBOCOIC(HAGEDBILHHL_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor(JNDFOKIMHPB JNJAJHMEKHA)  [RVA 0x31D3CA8]
// HAGEDBILHHL$$.ctor @ RVA 0x31D3CA8

void HAGEDBILHHL___ctor(HAGEDBILHHL_o *__this,JNDFOKIMHPB_o *JNJAJHMEKHA,MethodInfo *method)

{
  JNDFOKIMHPB_o **ppJVar1;
  
                    /* try { // try from 032d3cbc to 033d3cc7 has its CatchHandler @ 032d4174 */
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  ppJVar1 = &(__this->fields).GIBKACGIOPM;
  *ppJVar1 = JNJAJHMEKHA;
                    /* try { // try from 032d3cc8 to 033d3f07 has its CatchHandler @ 032d2bd0 */
  thunk_FUN_01c20e04(ppJVar1,JNJAJHMEKHA);
  return;
}

