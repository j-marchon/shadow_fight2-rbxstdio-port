// BIDBHCDLLHH$$JIPBODHMDBB @ RVA 0x34B365C

void BIDBHCDLLHH__JIPBODHMDBB(BIDBHCDLLHH_o *__this,IEFEBEDLHNN_o *CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  IEFEBEDLHNN_array *pIVar3;
  
  pIVar3 = (__this->fields).DIMDJNDKCBG;
  if (pIVar3 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((CJNHFNHJHPE != (IEFEBEDLHNN_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(CJNHFNHJHPE,(((pIVar3->obj).klass)->_1).element_class), lVar1 == 0)
     ) {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if (1 < (uint)pIVar3->max_length) {
    pIVar3->m_Items[1] = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar3->m_Items + 1,CJNHFNHJHPE);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

