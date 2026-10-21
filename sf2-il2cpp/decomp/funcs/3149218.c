// KKLJIDJBFEI$$GCLNNDGBNND @ RVA 0x3149218

void KKLJIDJBFEI__GCLNNDGBNND(KKLJIDJBFEI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  KAMBBJFPLGM_o *LLJHKLPGMGC;
  EEGDOGKBLNG_o *__this_00;
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  int *piVar5;
  AJJPCMDCAOB_c *pAVar6;
  
  if ((DAT_0456679b & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
    __this = (KKLJIDJBFEI_o *)FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_0456679b = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    LLJHKLPGMGC = (KAMBBJFPLGM_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    __this = (KKLJIDJBFEI_o *)0x0;
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__JOMFHMDCMNG(__this_00,LLJHKLPGMGC,(MethodInfo *)0x0);
      lVar1 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      __this = *(KKLJIDJBFEI_o **)(*(long *)(lVar1 + 0xc0) + 0x10);
      if (((ulong)__this[1].fields.super.KPDFPANJBJB & 0x10000000000) == 0) {
        __this = (KKLJIDJBFEI_o *)FUN_01b81620();
      }
      pAVar6 = ((__this->fields).IDFAHJPJGBM)->klass;
      if (pAVar6 != (AJJPCMDCAOB_c *)0x0) {
        pvVar3 = (pAVar6->_1).image;
        uVar4 = (ulong)*(ushort *)((long)pvVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)((long)pvVar3 + 0xb0) + 8);
          do {
            if (*(ODEIOKOJGDM_c **)(piVar5 + -2) == ODEIOKOJGDM_TypeInfo) {
              puVar2 = (undefined8 *)((long)pvVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_03249348;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_01b81914(pAVar6,ODEIOKOJGDM_TypeInfo,0);
LAB_03249348:
                    /* WARNING: Could not recover jumptable at 0x0324935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar2)(pAVar6,0,puVar2[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

