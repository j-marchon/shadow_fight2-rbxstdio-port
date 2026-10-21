// BIDBHCDLLHH$$.ctor @ RVA 0x34B3B5C

void BIDBHCDLLHH___ctor(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  long lVar3;
  undefined8 uVar4;
  IEFEBEDLHNN_array **ppIVar5;
  
  if ((DAT_04568571 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN___TypeInfo);
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
                    /* try { // try from 035b3bb0 to 036b3bb7 has its CatchHandler @ 035b3c24 */
    FUN_01bab630(&StringLiteral_21526);
    DAT_04568571 = 1;
  }
                    /* try { // try from 035b3bc4 to 036b3bcf has its CatchHandler @ 035b3c20 */
  pIVar1 = (IEFEBEDLHNN_array *)FUN_01bab718(IEFEBEDLHNN___TypeInfo,3);
  ppIVar5 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar5 = pIVar1;
                    /* try { // try from 035b3bd0 to 036b3c13 has its CatchHandler @ 035b3a64 */
  thunk_FUN_01c20e04(ppIVar5,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = *ppIVar5;
  pIVar2 = (IEFEBEDLHNN_o *)thunk_FUN_01bda818(IEFEBEDLHNN_TypeInfo);
  IEFEBEDLHNN___ctor(pIVar2,StringLiteral_21526,(MethodInfo *)0x0);
  if (pIVar1 != (IEFEBEDLHNN_array *)0x0) {
                    /* try { // try from 035b3c14 to 036b3c17 has its CatchHandler @ 035b3c1c */
                    /* try { // try from 035b3c18 to 036b3c3b has its CatchHandler @ 035b3a64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b3c14 with catch @ 035b3c1c
                        */
    if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((pIVar1->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_035b3cf4:
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b3bc4 with catch @ 035b3c20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b3bb0 with catch @ 035b3c24
                        */
    if ((int)pIVar1->max_length != 0) {
      pIVar1->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(pIVar1->m_Items,pIVar2);
                    /* try { // try from 035b3c3c to 036b3c3f has its CatchHandler @ 035b3c60 */
      pIVar1 = *ppIVar5;
                    /* try { // try from 035b3c40 to 036b3c67 has its CatchHandler @ 035b3a64 */
      pIVar2 = (IEFEBEDLHNN_o *)thunk_FUN_01bda818(IEFEBEDLHNN_TypeInfo);
      IEFEBEDLHNN___ctor(pIVar2,StringLiteral_21526,(MethodInfo *)0x0);
      if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3cec;
                    /* catch() { ... } // from try @ 035b3c3c with catch @ 035b3c60 */
                    /* try { // try from 035b3c68 to 036b3c6f has its CatchHandler @ 035b3c84 */
      if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((pIVar1->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_035b3cf4;
                    /* try { // try from 035b3c70 to 036b3c7b has its CatchHandler @ 035b3a64 */
      if (1 < (uint)pIVar1->max_length) {
                    /* try { // try from 035b3c7c to 036b3c83 has its CatchHandler @ 035b3c84 */
        pIVar1->m_Items[1] = pIVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b3c68 with catch @ 035b3c84
                       catch(type#2 @ 00000000) { ... } // from try @ 035b3c7c with catch @ 035b3c84
                        */
        thunk_FUN_01c20e04(pIVar1->m_Items + 1,pIVar2);
        pIVar1 = *ppIVar5;
        pIVar2 = (IEFEBEDLHNN_o *)thunk_FUN_01bda818(IEFEBEDLHNN_TypeInfo);
        IEFEBEDLHNN___ctor(pIVar2,StringLiteral_21526,(MethodInfo *)0x0);
        if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3cec;
        if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((pIVar1->obj).klass)->_1).element_class), lVar3 == 0
           )) goto LAB_035b3cf4;
        if (2 < (uint)pIVar1->max_length) {
          pIVar1->m_Items[2] = pIVar2;
          thunk_FUN_01c20e04(pIVar1->m_Items + 2,pIVar2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_035b3cec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

