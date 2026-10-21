// CJFBGEEIPBA$$CBJDFGLCFBN @ RVA 0x3364294

void CJFBGEEIPBA__CBJDFGLCFBN(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o *pNVar2;
  long lVar3;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *pIVar4;
  
  method_00 = (MethodInfo *)IDCGLBOIAFJ;
  if ((DAT_04567aa5 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    DAT_04567aa5 = 1;
    method_00 = extraout_x1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,method_00);
  if (bVar1) {
    pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
    pNVar2 = (NLFLMJPNOLF_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    CJFBGEEIPBA__KMEMLHDKKFN(__this,pNVar2,method);
    lVar3 = thunk_FUN_01bda71c(pIVar4,System_Action<NLFLMJPNOLF>_TypeInfo);
    if (lVar3 == 0) {
      return;
    }
    if (pNVar2 != (NLFLMJPNOLF_o *)0x0) {
      pNVar2 = CJFBGEEIPBA__IPLHNJCJEIK(__this,(pNVar2->fields).OHMDCKEDOGH,method);
                    /* WARNING: Could not recover jumptable at 0x03464350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),pNVar2,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  else {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

