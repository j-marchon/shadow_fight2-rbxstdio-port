// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ShowPvp @ RVA 0x324FB00

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ShowPvp
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 0334fb0c to 0344fb13 has its CatchHandler @ 0334fd5c */
  if ((DAT_0456711d & 1) == 0) {
                    /* try { // try from 0334fb20 to 0344fb4b has its CatchHandler @ 0334fd58 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456711d = 1;
  }
  if ((__this->fields).PDNOIJPIOLD != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 0334fb4c to 0344fb6f has its CatchHandler @ 0334fd54 */
  pSVar4 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ANICGJMJLNE(__this,0.12,method_00);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  ppSVar1 = &(__this->fields).PDNOIJPIOLD;
  uVar2._0_1_ = (pPVar6->_2).rank;
  uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar2;
  if (uVar7 != 0) {
                    /* try { // try from 0334fb80 to 0344fb9f has its CatchHandler @ 0334fd50 */
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0334fbb0 to 0344fbbb has its CatchHandler @ 0334fd48 */
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_0334fbbc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 0334fba0 to 0344fbaf has its CatchHandler @ 0334fd4c */
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0334fbbc:
                    /* try { // try from 0334fbbc to 0344fc67 has its CatchHandler @ 0334f534 */
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  *ppSVar1 = pSVar4;
  thunk_FUN_01c20e04(ppSVar1,pSVar4);
  return;
}

