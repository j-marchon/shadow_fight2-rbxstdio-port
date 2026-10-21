// ONPHBGJDFBM$$KCEBNCEKNJD @ RVA 0x3133004

bool ONPHBGJDFBM__KCEBNCEKNJD(ONPHBGJDFBM_o *__this,Il2CppObject *ANGBPBINHBL,MethodInfo *method)

{
  uint uVar1;
  System_Action_KEFHDOHHHML__c *pSVar2;
  bool bVar3;
  System_Action_KEFHDOHHHML__o *pSVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if ((DAT_045666e9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
    DAT_045666e9 = 1;
  }
  bVar3 = FDAHDCHADGJ__BDLEIEHBFAD<object>
                    ((System_Action_T__o *)(__this->fields).BLNMHHKCCOD,
                     Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
  if (!bVar3) {
    pSVar4 = (__this->fields).BLNMHHKCCOD;
    if (pSVar4 != (System_Action_KEFHDOHHHML__o *)0x0) {
      lVar5 = (*(pSVar4->klass->vtable)._10_GetInvocationList.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._10_GetInvocationList.method);
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            pSVar2 = System_Action<KEFHDOHHHML>_TypeInfo;
            if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            lVar6 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_03233108;
            if (*(Il2CppObject **)(lVar6 + 0x20) == ANGBPBINHBL) {
              pSVar4 = (System_Action_KEFHDOHHHML__o *)
                       thunk_FUN_01bda71c(lVar6,System_Action<KEFHDOHHHML>_TypeInfo);
              if (pSVar4 == (System_Action_KEFHDOHHHML__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(lVar6,pSVar2);
              }
              ONPHBGJDFBM__DBBHAGMABOB(__this,pSVar4,method);
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar1);
        }
        goto LAB_032330e8;
      }
    }
LAB_03233108:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_032330e8:
  bVar3 = FDAHDCHADGJ__BDLEIEHBFAD<object>
                    ((System_Action_T__o *)(__this->fields).BLNMHHKCCOD,
                     Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
  return bVar3;
}

