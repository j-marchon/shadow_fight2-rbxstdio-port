// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$KHPEJMPPJOI @ RVA 0x330C2EC

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__KHPEJMPPJOI
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  float fVar10;
  
                    /* catch() { ... } // from try @ 0340c2a4 with catch @ 0340c2ec */
                    /* catch() { ... } // from try @ 0340c0e0 with catch @ 0340c2f0 */
                    /* catch() { ... } // from try @ 0340c17c with catch @ 0340c2f4 */
                    /* catch() { ... } // from try @ 0340c0ec with catch @ 0340c2f8 */
                    /* catch() { ... } // from try @ 0340c104 with catch @ 0340c2fc */
                    /* catch() { ... } // from try @ 0340c098 with catch @ 0340c300 */
                    /* catch() { ... } // from try @ 0340c038 with catch @ 0340c304 */
                    /* catch() { ... } // from try @ 0340c138 with catch @ 0340c308 */
                    /* catch() { ... } // from try @ 0340c1b4 with catch @ 0340c30c */
                    /* catch() { ... } // from try @ 0340c0b4 with catch @ 0340c310 */
  if ((DAT_04567788 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0340c328 to 0350c32b has its CatchHandler @ 0340c354 */
                    /* try { // try from 0340c32c to 0350c363 has its CatchHandler @ 0340bea0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_ECAECIIFHDI__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567788 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__MLOOLFNKCKA(__this,method);
                    /* catch() { ... } // from try @ 0340c328 with catch @ 0340c354 */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 0340c364 to 0350c36b has its CatchHandler @ 0340c380 */
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0340c36c to 0350c377 has its CatchHandler @ 0340bea0 */
                    /* try { // try from 0340c378 to 0350c37f has its CatchHandler @ 0340c380 */
  System_Action___ctor();
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0340c364 with catch @ 0340c380
                       catch() { ... } // from try @ 0340c378 with catch @ 0340c380 */
  pPVar6 = pPVar2->klass;
  fVar10 = (__this->fields)._waitStartHidePergament;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar6->vtable + (*piVar8 + 2);
        goto LAB_0340c3dc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_0340c3dc:
  pSVar5 = (System_Collections_IEnumerator_o *)
           (*pVVar4->methodPtr)((ulong)(uint)fVar10,pPVar2,uVar3,pVVar4->method);
  ppSVar9 = &(__this->fields).NACLAKCDEOP;
  *ppSVar9 = pSVar5;
  thunk_FUN_01c20e04(ppSVar9,pSVar5);
  return;
}

