// Nekki.SF2.GUI.Shop.ShopScene$$GFFNHPFGAFJ @ RVA 0x34331C8

void Nekki_SF2_GUI_Shop_ShopScene__GFFNHPFGAFJ
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,System_Action_o *CPECAEHDDDB,
               MethodInfo *method)

{
  FKDLCJJOGIP_o *pFVar1;
  KKLJIDJBFEI_o *pKVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_04568187 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_PLCCEAFLBOM__);
    DAT_04568187 = 1;
  }
  pFVar1 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pFVar1 != (FKDLCJJOGIP_o *)0x0) {
    if ((pFVar1->fields)._MEAPCEHFFHD_k__BackingField != false) {
      Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO(__this,true,method);
      if (CPECAEHDDDB != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0353324c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(CPECAEHDDDB->fields).super.super.invoke_impl)
                  ((CPECAEHDDDB->fields).super.super.method_code,
                   (CPECAEHDDDB->fields).super.super.method);
        return;
      }
      return;
    }
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__PILMCAFCLMN(pKVar2,pSVar3,(MethodInfo *)0x0);
      pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
        KKLJIDJBFEI__KGJHOLAEPAI(pKVar2,pSVar3,(MethodInfo *)0x0);
        if (CPECAEHDDDB != (System_Action_o *)0x0) {
          pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_0353334c;
          KKLJIDJBFEI__PILMCAFCLMN(pKVar2,CPECAEHDDDB,(MethodInfo *)0x0);
          pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_0353334c;
          KKLJIDJBFEI__KGJHOLAEPAI(pKVar2,CPECAEHDDDB,(MethodInfo *)0x0);
        }
        pFVar1 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pFVar1 != (FKDLCJJOGIP_o *)0x0) {
          FKDLCJJOGIP__LGBOGFICFPF(pFVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0353334c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

