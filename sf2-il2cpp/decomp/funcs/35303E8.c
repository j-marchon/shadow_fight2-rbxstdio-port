// IJCLCKIJJDH$$HIDNIOLOJMJ @ RVA 0x35303E8

void IJCLCKIJJDH__HIDNIOLOJMJ
               (IJCLCKIJJDH_o *__this,System_Collections_Generic_List_MFBFOBDKLBC__o *DFCKGCHLPGK,
               MethodInfo *method)

{
  int32_t index;
  Il2CppObject *__this_00;
  Il2CppClass *__this_01;
  Il2CppObject *pIVar1;
  undefined8 *puVar2;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  System_Type_o *pSVar3;
  System_String_o *pSVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void **ppvVar8;
  long *plVar9;
  
                    /* catch() { ... } // from try @ 036303dc with catch @ 03630400 */
                    /* try { // try from 03630408 to 0373040f has its CatchHandler @ 03630424 */
                    /* try { // try from 03630410 to 0373041b has its CatchHandler @ 036302c4 */
  if ((DAT_04568a55 & 1) == 0) {
                    /* try { // try from 0363041c to 03730423 has its CatchHandler @ 03630424 */
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03630408 with catch @ 03630424
                       catch(type#2 @ 00000000) { ... } // from try @ 0363041c with catch @ 03630424
                        */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFBFOBDKLBC>_get_Item__);
    FUN_01bab630(&MFBFOBDKLBC_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_IJCLCKIJJDH_POLPDOALJOO_DMFBJOPEABP__);
    FUN_01bab630(&IJCLCKIJJDH_POLPDOALJOO_TypeInfo);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_11630);
    DAT_04568a55 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(IJCLCKIJJDH_POLPDOALJOO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    pIVar1 = __this_00 + 2;
    pIVar1->klass = (Il2CppClass *)DFCKGCHLPGK;
    thunk_FUN_01c20e04(pIVar1,DFCKGCHLPGK);
    __this_01 = pIVar1->klass;
    if (__this_01 != (Il2CppClass *)0x0) {
      index = (__this->fields).PGGDMOEHIJI;
      if (*(int *)&(__this_01->_1).namespaze <= index) {
        IJCLCKIJJDH__FGNINNOOCCL(__this,true,method);
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<MFBFOBDKLBC>_get_Item__);
      ppvVar8 = &__this_00[1].monitor;
      *ppvVar8 = pIVar1;
      thunk_FUN_01c20e04(ppvVar8,pIVar1);
      plVar9 = *ppvVar8;
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* try { // try from 03630538 to 037305cb has its CatchHandler @ 03630538
                       catch() { ... } // from try @ 03630538 with catch @ 03630538
                       catch() { ... } // from try @ 036305e8 with catch @ 03630538
                       catch() { ... } // from try @ 0363060c with catch @ 03630538
                       catch() { ... } // from try @ 03630634 with catch @ 03630538
                       catch() { ... } // from try @ 03630674 with catch @ 03630538 */
            if (*(MFBFOBDKLBC_c **)(piVar7 + -2) == MFBFOBDKLBC_TypeInfo) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_03630588;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01b81914(plVar9,MFBFOBDKLBC_TypeInfo,3);
LAB_03630588:
        source = (System_IObservable_T__o *)(*(code *)*puVar2)(plVar9,puVar2[1]);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
        System_Action<bool>___ctor();
                    /* try { // try from 036305cc to 037305d3 has its CatchHandler @ 03630618 */
        pIVar1 = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<bool>
                           (source,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
                    /* try { // try from 036305e0 to 037305e7 has its CatchHandler @ 03630614 */
                    /* try { // try from 036305e8 to 03730607 has its CatchHandler @ 03630538 */
        UniRx_DisposableExtensions__AddTo<object>
                  (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                          (__this->fields).MEMOAFOBLCM,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        if ((__this_00[1].monitor != (Il2CppObject *)0x0) &&
           (pSVar3 = System_Object__GetType(__this_00[1].monitor,(MethodInfo *)0x0),
           pSVar3 != (System_Type_o *)0x0)) {
                    /* try { // try from 03630608 to 0373060b has its CatchHandler @ 03630610 */
                    /* try { // try from 0363060c to 0373062f has its CatchHandler @ 03630538 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630608 with catch @ 03630610
                        */
          pSVar4 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._8_unknown.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._8_unknown.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036305e0 with catch @ 03630614
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036305cc with catch @ 03630618
                        */
                    /* try { // try from 03630630 to 03730633 has its CatchHandler @ 0363065c */
                    /* try { // try from 03630634 to 0373066b has its CatchHandler @ 03630538 */
          pSVar4 = System_String__Concat
                             (StringLiteral_11630,pSVar4,StringLiteral_802,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
          plVar9 = *ppvVar8;
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
                    /* catch() { ... } // from try @ 03630630 with catch @ 0363065c */
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                    /* try { // try from 0363066c to 03730673 has its CatchHandler @ 03630688 */
                    /* try { // try from 03630674 to 0373067f has its CatchHandler @ 03630538 */
                if (*(MFBFOBDKLBC_c **)(piVar7 + -2) == MFBFOBDKLBC_TypeInfo) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                  goto LAB_036306a4;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
                    /* try { // try from 03630680 to 03730687 has its CatchHandler @ 03630688 */
              } while (uVar6 != 0);
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363066c with catch @ 03630688
                       catch(type#2 @ 00000000) { ... } // from try @ 03630680 with catch @ 03630688
                        */
            puVar2 = (undefined8 *)FUN_01b81914(plVar9,MFBFOBDKLBC_TypeInfo,2);
LAB_036306a4:
                    /* WARNING: Could not recover jumptable at 0x036306bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar2)(plVar9,puVar2[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

