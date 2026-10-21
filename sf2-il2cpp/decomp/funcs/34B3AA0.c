// BIDBHCDLLHH$$KIAOELALKBL @ RVA 0x34B3AA0

void BIDBHCDLLHH__KIAOELALKBL(BIDBHCDLLHH_o *__this,BIDBHCDLLHH_o *AFBFJDLMPAH,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IEFEBEDLHNN_array *pIVar2;
  IEFEBEDLHNN_o *pIVar3;
  
  pIVar2 = (__this->fields).DIMDJNDKCBG;
  if (pIVar2 != (IEFEBEDLHNN_array *)0x0) {
    if ((int)pIVar2->max_length == 0) goto LAB_035b3b58;
    if (AFBFJDLMPAH != (BIDBHCDLLHH_o *)0x0) {
      pIVar3 = pIVar2->m_Items[0];
      pIVar1 = BIDBHCDLLHH__BIBMBNBONAH(AFBFJDLMPAH,(MethodInfo *)AFBFJDLMPAH);
      if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
        IEFEBEDLHNN__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
        pIVar2 = (__this->fields).DIMDJNDKCBG;
        if (pIVar2 != (IEFEBEDLHNN_array *)0x0) {
          if ((uint)pIVar2->max_length < 2) {
LAB_035b3b58:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pIVar3 = pIVar2->m_Items[1];
          pIVar1 = BIDBHCDLLHH__HDCIDHFLJKA(AFBFJDLMPAH,method_00);
          if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
            IEFEBEDLHNN__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
            pIVar2 = (__this->fields).DIMDJNDKCBG;
            if (pIVar2 != (IEFEBEDLHNN_array *)0x0) {
              if ((uint)pIVar2->max_length < 3) goto LAB_035b3b58;
              pIVar3 = pIVar2->m_Items[2];
              pIVar1 = BIDBHCDLLHH__EHFDMBIJJGB(AFBFJDLMPAH,method_01);
              if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
                IEFEBEDLHNN__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

