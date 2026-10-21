// TypeDefIndex 386
// Namespace: 
// [CompilerGenerated]
// private sealed class KPLJFEEMAOH.GCJCGBFLHEE
// Fields:
//   public IObserver<bool> observer; // 0x10
//   public KPLJFEEMAOH <>4__this; // 0x18

// ===== public void .ctor()  [RVA 0x347DFF0]
// KPLJFEEMAOH.GCJCGBFLHEE$$.ctor @ RVA 0x347DFF0

void KPLJFEEMAOH_GCJCGBFLHEE___ctor(KPLJFEEMAOH_GCJCGBFLHEE_o *__this,MethodInfo *method)

{
                    /* try { // try from 0357dff0 to 0367dfff has its CatchHandler @ 0357e0f0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void MOGKIIFFLCH(IEnumerable<string> permissions, bool result)  [RVA 0x347E0F4]
// KPLJFEEMAOH.GCJCGBFLHEE$$MOGKIIFFLCH @ RVA 0x347E0F4

void KPLJFEEMAOH_GCJCGBFLHEE__MOGKIIFFLCH
               (KPLJFEEMAOH_GCJCGBFLHEE_o *__this,
               System_Collections_Generic_IEnumerable_string__o *permissions,bool result,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObserver_bool__c *pSVar3;
  ulong uVar4;
  int32_t *piVar5;
  System_IObserver_bool__o *pSVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = permissions;
  auVar7._0_8_ = __this;
                    /* catch() { ... } // from try @ 0357dfac with catch @ 0357e0f4 */
                    /* catch() { ... } // from try @ 0357dfcc with catch @ 0357e0f8 */
                    /* catch() { ... } // from try @ 0357df70 with catch @ 0357e0fc */
                    /* catch() { ... } // from try @ 0357df14 with catch @ 0357e100 */
  if ((DAT_0456836d & 1) == 0) {
                    /* try { // try from 0357e118 to 0367e11b has its CatchHandler @ 0357e128 */
    auVar7 = FUN_01bab630(&System_IObserver<bool>_TypeInfo);
    DAT_0456836d = 1;
  }
  pSVar6 = (__this->fields).observer;
                    /* catch() { ... } // from try @ 0357e118 with catch @ 0357e128 */
  if (pSVar6 == (System_IObserver_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pSVar3 = pSVar6->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pSVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)System_IObserver<bool>_TypeInfo) {
        pVVar2 = pSVar3->vtable + *piVar5;
        goto LAB_0357e180;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 0357e168 to 0367e18f has its CatchHandler @ 0357e1a4 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_IObserver<bool>_TypeInfo,0);
LAB_0357e180:
                    /* try { // try from 0357e190 to 0367e19b has its CatchHandler @ 0357dd64 */
                    /* WARNING: Could not recover jumptable at 0x0357e194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pSVar6,(ulong)result,pVVar2->method);
  return;
}


// ===== internal void EMLHAINFJCL()  [RVA 0x347E19C]
// KPLJFEEMAOH.GCJCGBFLHEE$$EMLHAINFJCL @ RVA 0x347E19C

void KPLJFEEMAOH_GCJCGBFLHEE__EMLHAINFJCL(KPLJFEEMAOH_GCJCGBFLHEE_o *__this,MethodInfo *method)

{
  System_Action_IEnumerable_string___bool__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  KPLJFEEMAOH_o *pKVar1;
  GEJEGHKMPJM_o *__this_00;
  
                    /* try { // try from 0357e19c to 0367e1a3 has its CatchHandler @ 0357e1a4 */
                    /* catch() { ... } // from try @ 0357e168 with catch @ 0357e1a4
                       catch() { ... } // from try @ 0357e19c with catch @ 0357e1a4 */
  if ((DAT_0456836e & 1) == 0) {
    FUN_01bab630(&System_Action<IEnumerable<string>,_bool>_TypeInfo);
    FUN_01bab630(&Method_KPLJFEEMAOH_GCJCGBFLHEE_MOGKIIFFLCH__);
    DAT_0456836e = 1;
    method = extraout_x1;
  }
  pKVar1 = (__this->fields).__4__this;
  if (pKVar1 != (KPLJFEEMAOH_o *)0x0) {
    __this_00 = (pKVar1->fields).PEEHIKFEJAJ;
    CJNHFNHJHPE = (System_Action_IEnumerable_string___bool__o *)
                  thunk_FUN_01bda818(System_Action<IEnumerable<string>,_bool>_TypeInfo,method);
    System_Action<object,_bool>___ctor();
    if (__this_00 != (GEJEGHKMPJM_o *)0x0) {
      GEJEGHKMPJM__MDLGDNPLOHL(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

