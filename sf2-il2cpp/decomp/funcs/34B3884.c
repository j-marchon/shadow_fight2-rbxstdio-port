// BIDBHCDLLHH$$.ctor @ RVA 0x34B3884

void BIDBHCDLLHH___ctor(BIDBHCDLLHH_o *__this,IEFEBEDLHNN_o *FLGDFENHMKM,IEFEBEDLHNN_o *JEKJCJEOEBG,
                       IEFEBEDLHNN_o *MGEDBHMONNP,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  long lVar2;
  undefined8 uVar3;
  IEFEBEDLHNN_array **ppIVar4;
  
  if ((DAT_04568570 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN___TypeInfo);
    DAT_04568570 = 1;
  }
  pIVar1 = (IEFEBEDLHNN_array *)FUN_01bab718(IEFEBEDLHNN___TypeInfo,3);
  ppIVar4 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = *ppIVar4;
  if (pIVar1 != (IEFEBEDLHNN_array *)0x0) {
    if ((FLGDFENHMKM != (IEFEBEDLHNN_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(FLGDFENHMKM,(((pIVar1->obj).klass)->_1).element_class),
       lVar2 == 0)) {
LAB_035b39d4:
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)pIVar1->max_length != 0) {
      pIVar1->m_Items[0] = FLGDFENHMKM;
      thunk_FUN_01c20e04(pIVar1->m_Items,FLGDFENHMKM);
      pIVar1 = *ppIVar4;
      if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b39cc;
      if ((JEKJCJEOEBG != (IEFEBEDLHNN_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(JEKJCJEOEBG,(((pIVar1->obj).klass)->_1).element_class),
         lVar2 == 0)) goto LAB_035b39d4;
      if (1 < (uint)pIVar1->max_length) {
        pIVar1->m_Items[1] = JEKJCJEOEBG;
        thunk_FUN_01c20e04(pIVar1->m_Items + 1,JEKJCJEOEBG);
        pIVar1 = *ppIVar4;
        if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b39cc;
        if ((MGEDBHMONNP != (IEFEBEDLHNN_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(MGEDBHMONNP,(((pIVar1->obj).klass)->_1).element_class),
           lVar2 == 0)) goto LAB_035b39d4;
        if (2 < (uint)pIVar1->max_length) {
          pIVar1->m_Items[2] = MGEDBHMONNP;
          thunk_FUN_01c20e04(pIVar1->m_Items + 2,MGEDBHMONNP);
          (__this->fields).DEKCPPOJFEH = KGLJICLJHEL;
          thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_035b39cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

