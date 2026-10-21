// CFEANGJDHEE$$LLCONNGHGKD @ RVA 0x30B00B4

void CFEANGJDHEE__LLCONNGHGKD(MethodInfo *method)

{
  CFEANGJDHEE_c *pCVar1;
  CFEANGJDHEE_o *pCVar2;
  System_Collections_Generic_Queue_DBLGMIJFILB__o *pSVar3;
  DBLGMIJFILB_o DVar4;
  
  if ((DAT_045661d2 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Dequeue__);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>_get_Count__);
    DAT_045661d2 = 1;
  }
  while( true ) {
    pCVar1 = CFEANGJDHEE_TypeInfo;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
    }
    pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
    if ((pCVar2 == (CFEANGJDHEE_o *)0x0) ||
       (pSVar3 = (pCVar2->fields).JBNEIFBJCJN,
       pSVar3 == (System_Collections_Generic_Queue_DBLGMIJFILB__o *)0x0)) break;
    if ((pSVar3->fields)._size < 1) {
      return;
    }
    pCVar1 = CFEANGJDHEE_TypeInfo;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
    }
    pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
    if ((pCVar2 == (CFEANGJDHEE_o *)0x0) ||
       (pSVar3 = (pCVar2->fields).JBNEIFBJCJN,
       pSVar3 == (System_Collections_Generic_Queue_DBLGMIJFILB__o *)0x0)) break;
    DVar4 = System_Collections_Generic_Queue<DBLGMIJFILB>__Dequeue
                      (pSVar3,Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Dequeue__);
    if (DVar4.fields.EFENHAFFBAG == (GHACLGGJIKK_o *)0x0) break;
    GHACLGGJIKK__NKLGCNHLBAF(DVar4.fields.EFENHAFFBAG,DVar4.fields.OPAEPDIIOEB,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

