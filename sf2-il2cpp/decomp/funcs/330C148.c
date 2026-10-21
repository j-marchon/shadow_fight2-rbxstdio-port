// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$MLOOLFNKCKA @ RVA 0x330C148

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__MLOOLFNKCKA
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04567785 & 1) == 0) {
                    /* try { // try from 0340c164 to 0350c16b has its CatchHandler @ 0340c2dc */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567785 = 1;
  }
  ppSVar7 = &(__this->fields).NACLAKCDEOP;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
                    /* try { // try from 0340c17c to 0350c183 has its CatchHandler @ 0340c2f4 */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0340c188 to 0350c18f has its CatchHandler @ 0340c2d4 */
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* try { // try from 0340c198 to 0350c19f has its CatchHandler @ 0340c2c4 */
  uVar5 = (ulong)uVar1;
                    /* try { // try from 0340c1a0 to 0350c1af has its CatchHandler @ 0340c2d0 */
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0340c1b4 to 0350c1d7 has its CatchHandler @ 0340c30c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0340c1e8 to 0350c1f3 has its CatchHandler @ 0340c2c8 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0340c1f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0340c1f4:
                    /* try { // try from 0340c1f4 to 0350c2a3 has its CatchHandler @ 0340bea0 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

