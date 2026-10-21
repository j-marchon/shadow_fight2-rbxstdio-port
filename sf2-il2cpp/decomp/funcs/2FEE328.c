// KCJMBDCBIIF$$HAFBJDICOGK @ RVA 0x2FEE328

void KCJMBDCBIIF__HAFBJDICOGK(KCJMBDCBIIF_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  DLOALGNBPNL_o *pDVar3;
  int32_t EGJLNEOGECM;
  MethodInfo *in_x3;
  Il2CppObject *pIVar4;
  
  if ((DAT_04565a49 & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<DLOALGNBPNL>__);
    FUN_01bab630(&StringLiteral_5948);
    FUN_01bab630(&StringLiteral_5949);
    DAT_04565a49 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar1 = (KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->klass->_2).naturalAligment) &&
         ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo)) {
        bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
        if (bVar2) {
          pDVar3 = (DLOALGNBPNL_o *)
                   KEFHDOHHHML__PFNEPJAFEDF<object>
                             (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<DLOALGNBPNL>__);
          KCJMBDCBIIF__PKJGPLAAKNJ(__this,pDVar3,method);
          pDVar3 = KCJMBDCBIIF__JJOJLFCDCJO(__this,(OJKCDJCBOBL_o *)pIVar4[1].klass,method);
          EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
        }
        else {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_5949,(MethodInfo *)0x0);
          pDVar3 = (DLOALGNBPNL_o *)thunk_FUN_01bda818(DLOALGNBPNL_TypeInfo);
          DLOALGNBPNL___ctor(pDVar3,(MethodInfo *)0x0);
          EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
        }
        KCJMBDCBIIF__HHAFBOFFEHA(__this,pDVar3,EGJLNEOGECM,in_x3);
        return;
      }
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5948,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

