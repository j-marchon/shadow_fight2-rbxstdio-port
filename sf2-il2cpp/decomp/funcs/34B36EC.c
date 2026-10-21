// BIDBHCDLLHH$$.ctor @ RVA 0x34B36EC

void BIDBHCDLLHH___ctor(BIDBHCDLLHH_o *__this,BIDBHCDLLHH_o *CCIEBILKFCF,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  long lVar2;
  undefined8 uVar3;
  IEFEBEDLHNN_array **ppIVar4;
  IEFEBEDLHNN_array *pIVar5;
  IEFEBEDLHNN_o *pIVar6;
  
  if ((DAT_0456856f & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN___TypeInfo);
    DAT_0456856f = 1;
  }
  pIVar1 = (IEFEBEDLHNN_array *)FUN_01bab718(IEFEBEDLHNN___TypeInfo,3);
  ppIVar4 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((CCIEBILKFCF != (BIDBHCDLLHH_o *)0x0) &&
     (pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG, pIVar1 != (IEFEBEDLHNN_array *)0x0)) {
    if ((int)pIVar1->max_length == 0) goto LAB_035b386c;
    pIVar5 = *ppIVar4;
    if (pIVar5 != (IEFEBEDLHNN_array *)0x0) {
      pIVar6 = pIVar1->m_Items[0];
      if ((pIVar6 != (IEFEBEDLHNN_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar6,(((pIVar5->obj).klass)->_1).element_class), lVar2 == 0))
      {
LAB_035b3870:
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)pIVar5->max_length != 0) {
        pIVar5->m_Items[0] = pIVar6;
        thunk_FUN_01c20e04(pIVar5->m_Items,pIVar6);
        pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG;
        if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
        if (1 < (uint)pIVar1->max_length) {
          pIVar5 = *ppIVar4;
          if (pIVar5 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
          pIVar6 = pIVar1->m_Items[1];
          if ((pIVar6 != (IEFEBEDLHNN_o *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(pIVar6,(((pIVar5->obj).klass)->_1).element_class),
             lVar2 == 0)) goto LAB_035b3870;
          if (1 < (uint)pIVar5->max_length) {
            pIVar5->m_Items[1] = pIVar6;
            thunk_FUN_01c20e04(pIVar5->m_Items + 1,pIVar6);
            pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG;
            if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
            if (2 < (uint)pIVar1->max_length) {
              pIVar5 = *ppIVar4;
              if (pIVar5 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
              pIVar6 = pIVar1->m_Items[2];
              if ((pIVar6 != (IEFEBEDLHNN_o *)0x0) &&
                 (lVar2 = thunk_FUN_01bda71c(pIVar6,(((pIVar5->obj).klass)->_1).element_class),
                 lVar2 == 0)) goto LAB_035b3870;
              if (2 < (uint)pIVar5->max_length) {
                pIVar5->m_Items[2] = pIVar6;
                thunk_FUN_01c20e04(pIVar5->m_Items + 2,pIVar6);
                (__this->fields).DEKCPPOJFEH = (CCIEBILKFCF->fields).DEKCPPOJFEH;
                thunk_FUN_01c20e04(&__this->fields);
                return;
              }
            }
          }
        }
      }
LAB_035b386c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_035b3868:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

