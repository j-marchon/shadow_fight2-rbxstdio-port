// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34E77EC

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,ANBKLGFGGFH_o *PKKMGBOIDJD,MethodInfo *method)

{
  System_Action_ANBKLGFGGFH__o *pSVar1;
  OLKKAIFGGAK_o **ppOVar2;
  
  if (PKKMGBOIDJD != (ANBKLGFGGFH_o *)0x0) {
    ppOVar2 = &(PKKMGBOIDJD->fields).super._HKPEJNKNEGG_k__BackingField;
    *ppOVar2 = __this;
    thunk_FUN_01c20e04(ppOVar2,__this);
    pSVar1 = (__this->fields).LJCLNOIHBFP;
    if (pSVar1 != (System_Action_ANBKLGFGGFH__o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,PKKMGBOIDJD,
                 (pSVar1->fields).super.super.method);
      (PKKMGBOIDJD->fields).super._HKPEJNKNEGG_k__BackingField = (OLKKAIFGGAK_o *)0x0;
      thunk_FUN_01c20e04(ppOVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

