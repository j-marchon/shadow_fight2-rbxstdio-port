// KKLJIDJBFEI$$NPFAFFLHIFO @ RVA 0x3146F60

void KKLJIDJBFEI__NPFAFFLHIFO(KKLJIDJBFEI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  EEGDOGKBLNG_o *pEVar2;
  int64_t iVar3;
  MethodInfo *method_00;
  undefined8 *puVar4;
  System_String_o *PCPECHHMLEC;
  System_String_o *pSVar5;
  
  if ((DAT_04566783 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<LMEMJBOBHBE>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_17842);
    FUN_01bab630(&StringLiteral_20660);
    FUN_01bab630(&StringLiteral_21521);
    FUN_01bab630(&StringLiteral_5840);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_21453);
    FUN_01bab630(&StringLiteral_17813);
    DAT_04566783 = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<LMEMJBOBHBE>__),
     PCPECHHMLEC = StringLiteral_21521, pSVar5 = StringLiteral_17813, pIVar1 != (Il2CppObject *)0x0)
     ) {
    if (*(int *)&pIVar1[1].monitor != 1) {
      if (*(int *)&pIVar1[1].monitor == 0) {
        puVar4 = &StringLiteral_20660;
      }
      else {
        puVar4 = &StringLiteral_21453;
      }
      pSVar5 = (System_String_o *)*puVar4;
      PCPECHHMLEC = StringLiteral_5840;
LAB_0324714c:
      JJPNLEPEAFM__JNDPLPKDPCP
                (PCPECHHMLEC,pSVar5,StringLiteral_9679,StringLiteral_1,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
                 (MethodInfo *)0x0);
      KKLJIDJBFEI__FHIODBIPGBG(__this,method_00);
      return;
    }
    if (pIVar1[2].monitor == (void *)0xffffffffffffffff) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 != (EEGDOGKBLNG_o *)0x0) {
        (pEVar2->fields).NCMLGNEFKBF = -1;
        goto LAB_0324714c;
      }
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      iVar3 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
      if (pEVar2 != (EEGDOGKBLNG_o *)0x0) {
        (pEVar2->fields).NCMLGNEFKBF = (long)pIVar1[2].monitor / 1000 + iVar3;
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (EEGDOGKBLNG_o *)0x0) {
          pSVar5 = MGNPHCAAEIO__HIIEINMMNGG((pEVar2->fields).NCMLGNEFKBF,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat
                             (StringLiteral_17842,pSVar5,StringLiteral_22500,(MethodInfo *)0x0);
          goto LAB_0324714c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

